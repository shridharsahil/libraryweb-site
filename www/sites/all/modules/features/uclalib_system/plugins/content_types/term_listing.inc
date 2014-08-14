<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Global'),
  'title' => t("Term listing"),
  'description' => t("Quick links of current or parent node"),
  'required context' => array(new ctools_context_required(t('Node'), array('node'))),
  'edit form'          => 'uclalib_term_listing_edit_form',
  'render callback' => 'uclalib_term_listing_render',
);

/**
 * Edit form callback.
 */
function uclalib_term_listing_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['field'] = array(
    '#type' => 'textfield',
    '#title' => t('Term reference field name'),
    '#size' => 50,
    '#description' => t('Machine name for the term reference field.'),
    '#default_value' => !empty($conf['field']) ? $conf['field'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );
  $form['view_path'] = array(
    '#type' => 'textfield',
    '#title' => t('View path'),
    '#size' => 50,
    '#description' => t('Path to the view, e.g. news-events/events-agenda'),
    '#default_value' => !empty($conf['view_path']) ? $conf['view_path'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );
  return $form;
}

/**
 * Submit form callback.
 */
function uclalib_term_listing_edit_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Render callback.
 *
 * "CTools:Content types" plugin render callback for "Uclalib opening hours:Opening hours table".
 *
 * @param string $subtype
 *   Subtype identifier.
 * @param array  $conf
 *   Configuration of the $subtype instance.
 * @param array  $args
 *   Documentation missing.
 * @param array  $pane_context
 *   Documentation missing.
 * @param array  $incoming_content
 *   Documentation missing.
 *
 * @return object
 *   The content.
 */
function uclalib_term_listing_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  if (isset($pane_context[0]->data) && !empty($pane_context[0]->data)) {
    $node = $pane_context[0]->data;
  }
  else {
    return;
  }

  // Bail if there are no terms referenced.
  if (!isset($node->{$conf['field']}[LANGUAGE_NONE]) || !count($node->{$conf['field']}[LANGUAGE_NONE])) {
    return;
  }

  $terms = array();
  foreach ($node->{$conf['field']}[LANGUAGE_NONE] as $item) {
    $term = taxonomy_term_load($item['tid']);
    $terms[] = l($term->name, $conf['view_path'], array('query' => array('f[0]' => $conf['field'] . ':' . $term->tid)));
  }
  $variables = array(
    'items' => $terms,
    'title' => '',
    'type' => 'ul',
    'attributes' => array(),
  );

  $block = new stdClass();
  $block->title = t('Term listing');
  $block->content = theme_item_list($variables);

  return $block;
}
