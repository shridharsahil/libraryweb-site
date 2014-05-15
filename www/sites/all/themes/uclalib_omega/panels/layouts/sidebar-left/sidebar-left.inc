<?php

/**
 * @file
 * Defines the standard sidebar left grid panels layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Sidebar Left'),
  'icon' => 'preview.png',
  'category' => t('UCLA Library content layouts'),
  'theme' => 'sidebar_left',
  'css' => '../../../css/layouts/sidebar-left/sidebar-left.layout.css',
  'regions' => array(
    'top' => t('Top'),
    'sidebar_left' => t('Sidebar Left'),
    'main' => t('Main'),
    'below_main_left' => t('Below Main Left'),
    'below_main_right' => t('Below Main Right'),
    'secondary' => t('Secondary'),
    'below_secondary_left' => t('Below Secondary Left'),
    'below_secondary_right' => t('Below Secondary Right'),
  ),
);

/**
 * Implements hook_preprocess_sidebar_left().
 */
function template_preprocess_sidebar_left(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-sidebar-left';

  // Use a class to change the layout when there is no sidebar content.
  if (!empty($variables['content']['sidebar_left'])) {
    $variables['attributes_array']['class'][] = 'with-sidebar-left';
  }

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-region';
    $variables['region_attributes_array'][$name]['class'][] = 'l-region--' . drupal_clean_css_identifier($name);
  }
}
