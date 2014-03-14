<?php
/**
 * @file
 * uclalib_featured_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_featured_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function uclalib_featured_content_image_default_styles() {
  $styles = array();

  // Exported image style: featured_content_thumbnail.
  $styles['featured_content_thumbnail'] = array(
    'name' => 'featured_content_thumbnail',
    'label' => 'Featured Content Thumbnail',
    'effects' => array(
      5 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'featured_content_thumbnail',
        ),
        'weight' => 0,
      ),
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
