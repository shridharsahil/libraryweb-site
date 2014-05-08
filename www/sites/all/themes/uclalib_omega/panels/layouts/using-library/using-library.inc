<?php

/**
 * @file
 * Defines the standard sidebar left panels layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Using Library'),
  'icon' => 'preview.png',
  'category' => t('UCLA Library content layouts'),
  'theme' => 'using_library',
  'css' => '../../../css/layouts/using-library/using-library.layout.css',
  'regions' => array(
    'top' => t('Top'),
    'sidebar_left' => t('Sidebar Left'),
    'sidebar_right' => t('Sidebar Right'),
    'main' => t('Main'),
    'below_main_left' => t('Below Main Left'),
  ),
);

/**
 * Implements hook_preprocess_sidebar_left_right().
 */
function template_preprocess_using_library(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-using-library';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'l-region';
    $variables['region_attributes_array'][$name]['class'][] = 'l-region--' . drupal_clean_css_identifier($name);
  }

  // Place panes in the 'highlighted' theme region that exists outside
  // the panel area itself. This functionality requires a CORE PATCH!
  // See http://drupal.org/node/713462
  if (get_class($variables['renderer'] != 'panels_renderer_editor')
    && isset($variables['content']['top'])) {
    drupal_add_region_content('highlighted', $variables['content']['top']);
    $variables['content']['top'] = '';
  }
}
