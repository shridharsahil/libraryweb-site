<?php


/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * UCLALIB Omega theme.
 */

/**
 * Implements template_preprocess_panels_pane().
 *
 * Add bean type as a class to bean panes.
 */
function uclalib_omega_preprocess_panels_pane(&$vars) {
  if ($vars['pane']->type == 'block') {
    if (isset($vars['content']['bean']) && is_array($vars['content']['bean'])) {
      $bean_info = current($vars['content']['bean']);
      $bean_type = $bean_info['#bundle'];
      $bean_class = drupal_html_class('pane-bean-' . $bean_type);

      // Replace class 'pane-block' with more useful 'pane-bean-$bean-type';
      $found = FALSE;
      foreach ($vars['classes_array'] as $index => $block_class) {
        if ($block_class == 'pane-block') {
          $vars['classes_array'][$index] = $bean_class;
          $found = TRUE;
          break;
        }
      }
      // If we couldnt find the pane-block class, add the new class to the end.
      if (!$found) {
        $vars['classes_array'][] = $bean_class;
      }
    }
  }
}

 /**
 * Add data-th attributes to table cells in views.
 */
function uclalib_preprocess_views_view_table(&$vars) {
  $view     = $vars['view'];
  $options  = $vars['options'];
  $handler  = $view->style_plugin;
  $fields   = &$view->field;
  $columns  = $handler->sanitize_columns($options['columns'], $fields);
  $rows     = $vars['rows'];
  $result   = $vars['result'];
  foreach ($columns as $field => $column) {
    foreach ($result as $num => $row) {
      if( empty($rows[$num][$field]) ) {
        $vars['field_classes'][$field][$num] .= ' responsive-data-table__empty-cell';
      }
      else {
        $vars['field_attributes'][$field][$num]['data-label'] = filter_xss(!empty($fields[$field]) ? $fields[$field]->label() : '');
      }
    }
  }
}
