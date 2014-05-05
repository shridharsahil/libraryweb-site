<?php
/**
 * @file
 * uclalib_text_block_bean.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uclalib_text_block_bean_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'text_block';
  $bean_type->label = 'Text Block';
  $bean_type->options = '';
  $bean_type->description = 'A basic, reusable block of text with no title field.';
  $export['text_block'] = $bean_type;

  return $export;
}
