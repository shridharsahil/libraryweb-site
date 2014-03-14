<?php
/**
 * @file
 * uclalib_featured_content.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uclalib_featured_content_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'featured_content';
  $bean_type->label = 'Featured Content';
  $bean_type->options = '';
  $bean_type->description = 'Content that can be placed into the frontpage&#039;s featured content component.';
  $export['featured_content'] = $bean_type;

  return $export;
}
