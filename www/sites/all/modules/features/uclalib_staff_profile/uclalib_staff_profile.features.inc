<?php
/**
 * @file
 * uclalib_staff_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_staff_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uclalib_staff_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function uclalib_staff_profile_image_default_styles() {
  $styles = array();

  // Exported image style: staff_profile_photo.
  $styles['staff_profile_photo'] = array(
    'name' => 'staff_profile_photo',
    'label' => 'Staff Profile Photo',
    'effects' => array(
      0 => array(
        'label' => 'Manual Crop: Staff Profile Photo',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 340,
          'height' => 400,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'staff_profile_photo',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: staff_profile_photo_thumbnail.
  $styles['staff_profile_photo_thumbnail'] = array(
    'name' => 'staff_profile_photo_thumbnail',
    'label' => 'Staff Profile Photo Thumbnail',
    'effects' => array(
      0 => array(
        'label' => 'Manual Crop: Reuse cropped style',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'staff_profile_photo',
        ),
        'weight' => 0,
      ),
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 80,
          'height' => 95,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function uclalib_staff_profile_node_info() {
  $items = array(
    'staff_profile' => array(
      'name' => t('Staff Profile'),
      'base' => 'node_content',
      'description' => t('Library staff profile.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
