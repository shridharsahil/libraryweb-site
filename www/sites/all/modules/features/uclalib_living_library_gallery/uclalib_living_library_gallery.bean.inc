<?php
/**
 * @file
 * uclalib_living_library_gallery.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uclalib_living_library_gallery_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'living_library_gallery';
  $bean_type->label = 'Living Library Gallery';
  $bean_type->options = '';
  $bean_type->description = 'A gallery of images. The first 4 will be displayed on the page, and those 4 and additional images will display in a scrolling gallery in a lightbox when clicked.';
  $export['living_library_gallery'] = $bean_type;

  return $export;
}
