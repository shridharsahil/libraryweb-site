<?php

/**
 * @file
 * Defines the standard two-column symetrical grid panels layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Two Column'),
  'icon' => 'preview.png',
  'category' => t('UCLA Library content layouts'),
  'theme' => 'two_column',
  'css' => '../../../css/layouts/two-column/two-column.layout.css',
  'regions' => array(
    'top' => t('Top'),
    'main' => t('Main'),
    'left' => t('Left'),
    'right' => t('Right'),
    'secondary' => t('Secondary'),
    'below_left' => t('Below Left'),
    'below_right' => t('Below Right'),
  ),
);

/**
 * Implements hook_preprocess_two_column().
 */
function template_preprocess_two_column(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-two-column';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-region';
    $variables['region_attributes_array'][$name]['class'][] = 'l-region--' . drupal_clean_css_identifier($name);
  }
}
