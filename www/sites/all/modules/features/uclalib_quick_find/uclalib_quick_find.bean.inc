<?php
/**
 * @file
 * uclalib_quick_find.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uclalib_quick_find_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'quick_find';
  $bean_type->label = 'Quick find';
  $bean_type->options = '';
  $bean_type->description = 'Curated list that references taxonomy terms that link to a faceted Locations search.';
  $export['quick_find'] = $bean_type;

  return $export;
}
