<?php
/**
 * @file
 * uclalib_libguides.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uclalib_libguides_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'libguides_api_v1';
  $bean_type->label = 'LibGuides API';
  $bean_type->options = '';
  $bean_type->description = 'Provides parameters for LibGuides API (version 1.x), allowing for easy embedding of LibGuides data in Drupal.  This will change when we migrate to LibGuides 2, and may not be relevant if we import/index LibGuides content directly within Drupal.';
  $export['libguides_api_v1'] = $bean_type;

  return $export;
}
