<?php

/**
 * @file
 * Defines the standard sidebar left panels layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Sidebar Left & Right'),
  'icon' => 'preview.png',
  'category' => t('UCLA Library content layouts'),
  'theme' => 'sidebar_left_right',
  'css' => '../../../css/layouts/sidebar-left-right/sidebar-left-right.layout.css',
  'regions' => array(
    'top' => t('Top'),
    'sidebar_left' => t('Sidebar Left'),
    'sidebar_right' => t('Sidebar Right'),
    'main' => t('Main'),
    'below_main_left' => t('Below Main Left'),
    'below_main_right' => t('Below Main Right'),
    'secondary' => t('Secondary'),
    'below_secondary_left' => t('Below Secondary Left'),
    'below_secondary_right' => t('Below Secondary Right'),
  ),
);

/**
 * Implements hook_preprocess_sidebar_left_right().
 */
function template_preprocess_sidebar_left_right(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-sidebar-left-right';

  // Use a class to change the layout when there is no sidebar content.
  if (!empty($variables['content']['sidebar_left']) && !empty($variables['content']['sidebar_right'])) {
    $variables['attributes_array']['class'][] = 'with-both-sidebars';
  }
  elseif (!empty($variables['content']['sidebar_right'])) {
    $variables['attributes_array']['class'][] = 'with-sidebar-right';
  }
  elseif (!empty($variables['content']['sidebar_left'])) {
    $variables['attributes_array']['class'][] = 'with-sidebar-left';
  }

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-region';
    $variables['region_attributes_array'][$name]['class'][] = 'l-region--' . drupal_clean_css_identifier($name);
  }
}
