<?php
/**
 * @file
 * uclalib_link_list.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uclalib_link_list_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'link_list';
  $bean_type->label = 'Link List';
  $bean_type->options = '';
  $bean_type->description = 'List of internal and external links to place in a block.';
  $export['link_list'] = $bean_type;

  return $export;
}
