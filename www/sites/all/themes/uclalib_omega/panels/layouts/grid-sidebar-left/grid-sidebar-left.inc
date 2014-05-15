<?php

/**
 * @file
 * Defines the standard sidebar left panels layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Grid, Sidebar Left'),
  'icon' => 'preview.png',
  'category' => t('UCLA Library content layouts'),
  'theme' => 'grid_sidebar_left',
  'css' => '../../../css/layouts/grid-sidebar-left/grid-sidebar-left.layout.css',
  'regions' => array(
    'top' => t('Top'),
    'sidebar_left' => t('Sidebar Left'),
    'main' => t('Main'),
    'content_top_left' => t('Content Top Left'),
    'content_top_middle' => t('Content Top Center'),
    'content_top_right' => t('Content Top Right'),
    'content_middle_left' => t('Content Middle Left'),
    'content_middle_middle' => t('Content Middle Center'),
    'content_middle_right' => t('Content Middle Right'),
    'content_bottom_left' => t('Content Bottom Left'),
    'content_bottom_middle' => t('Content Bottom Center'),
    'content_bottom_right' => t('Content Bottom Right'),
  ),
);

/**
 * Implements hook_preprocess_grid_sidebar_left().
 */
function template_preprocess_grid_sidebar_left(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-grid-sidebar-left';

  // Use a class to change the layout when there is no sidebar content.
  if (!empty($variables['content']['sidebar_left'])) {
    $variables['attributes_array']['class'][] = 'with-sidebar-left';
  }

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-region';
    $variables['region_attributes_array'][$name]['class'][] = 'l-region--' . drupal_clean_css_identifier($name);
  }
}
