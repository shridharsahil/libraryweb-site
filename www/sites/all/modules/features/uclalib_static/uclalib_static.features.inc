<?php
/**
 * @file
 * uclalib_static.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_static_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function uclalib_static_image_default_styles() {
  $styles = array();

  // Exported image style: static_images_crop.
  $styles['static_images_crop'] = array(
    'name' => 'static_images_crop',
    'label' => 'Static Images Crop',
    'effects' => array(
      4 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => '',
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'static_images_crop',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function uclalib_static_node_info() {
  $items = array(
    'static' => array(
      'name' => t('Static page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
