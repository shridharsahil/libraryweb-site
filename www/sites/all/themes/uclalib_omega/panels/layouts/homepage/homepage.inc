<?php

/**
 * @file
 * Defines the standard sidebar left panels layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Homepage'),
  'icon' => 'preview.png',
  'category' => t('UCLA Library content layouts'),
  'theme' => 'homepage',
  'css' => '../../../css/layouts/homepage/homepage.layout.css',
  'regions' => array(
    'top' => t('Top'),
    'top_left_main' => t('Top left main'),
    'top_left_bottom_left' => t('Top left bottom left'),
    'top_left_bottom_right' => t('Top left bottom right'),
    'top_left_bottom_after' => t('Top left bottom after'),
    'top_right_sidebar' => t('Top right sidebar'),
    'bottom_left' => t('Bottom left'),
    'bottom_right' => t('Bottom left'),
  ),
);

/**
 * Implements hook_preprocess_homepage().
 */
function template_preprocess_homepage(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-homepage';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-region';
    $variables['region_attributes_array'][$name]['class'][] = 'l-region--' . drupal_clean_css_identifier($name);
  }
}
