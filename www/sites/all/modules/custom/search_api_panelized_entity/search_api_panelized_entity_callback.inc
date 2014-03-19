<?php

/**
 * @file
 * Contains SearchApiAlterAddViewedEntity.
 */

/**
 * Search API data alteration callback that adds the panelized entity.
 */
class SearchApiAlterAddPanelizedEntity extends SearchApiAbstractAlterCallback {

  /**
   * Only support indexes containing entities.
   *
   * @see SearchApiAlterCallbackInterface::supportsIndex()
   */
  public function supportsIndex(SearchApiIndex $index) {
    return (bool) $index->getEntityType();
  }

  public function configurationForm() {
    $view_modes = array();
    if ($entity_type = $this->index->getEntityType()) {
      $handler = panelizer_entity_plugin_get_handler($entity_type);
      foreach ($handler->plugin['view modes'] as $key => $mode) {
        $view_modes[$key] = $mode['label'];
      }
    }
    $this->options += array('mode' => reset($view_modes));
    if (count($view_modes) > 1) {
      $form['mode'] = array(
        '#type' => 'select',
        '#title' => t('View mode'),
        '#options' => $view_modes,
        '#default_value' => $this->options['mode'],
      );
    }
    else {
      $form['mode'] = array(
        '#type' => 'value',
        '#value' => $this->options['mode'],
      );
      if ($view_modes) {
        $form['note'] = array(
          '#markup' => '<p>' . t('Entities of type %type have only a single view mode. ' .
              'Therefore, no selection needs to be made.', array('%type' => $info['label'])) . '</p>',
        );
      }
      else {
        $form['note'] = array(
          '#markup' => '<p>' . t('Entities of type %type have no defined view modes. ' .
              'This might either mean that they are always displayed the same way, or that they cannot be processed by this alteration at all. ' .
              'Please consider this when using this alteration.', array('%type' => $info['label'])) . '</p>',
        );
      }
    }
    return $form;
  }

  public function alterItems(array &$items) {
    // Prevent session information from being saved while indexing.
    drupal_save_session(FALSE);

    // Force the current user to anonymous to prevent access bypass in search
    // indexes.
    $original_user = $GLOBALS['user'];
    $GLOBALS['user'] = drupal_anonymous_user();

    $type = $this->index->getEntityType();
    $entity_info = entity_get_info($type);
    $bundle_key = $entity_info['entity keys']['bundle'];
    $id_key = $entity_info['entity keys']['id'];
    $mode = empty($this->options['mode']) ? 'default' : $this->options['mode'];
    $handler = panelizer_entity_plugin_get_handler($type);
    foreach ($items as &$item) {
      try {
        $text = '';
        if ($info = $handler->render_entity($item, $mode)) {
          $build = array();
          $build['#view_mode'] = $mode;
          $build['#theme'] = 'panelizer_view_mode';
          $build['#panelizer'] = $item->panelizer[$mode];
          $build['#panelizer_content'] = $info;
          $build['#panelizer_handler'] = $handler;
          $build['#panelizer_entity'] = $item;
          $build['#panelizer_bundle'] = $item->$bundle_key;
          $build['#panelizer_entity_id'] = $item->$id_key;
          $text = drupal_render($build);
        }

        if (!$text) {
          $item->search_api_panelized = NULL;
          continue;
        }
        $item->search_api_panelized = $text;
      }
      catch (Exception $e) {
        $item->search_api_panelized = NULL;
      }
    }

    // Restore the user.
    $GLOBALS['user'] = $original_user;
    drupal_save_session(TRUE);
  }

  public function propertyInfo() {
    return array(
      'search_api_panelized' => array(
        'label' => t('Panelized Entity HTML output'),
        'description' => t('The whole HTML content of the Panelized entity when viewed.'),
        'type' => 'text',
      ),
    );
  }
}
