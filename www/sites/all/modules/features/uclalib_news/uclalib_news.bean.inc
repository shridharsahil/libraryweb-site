<?php
/**
 * @file
 * uclalib_news.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uclalib_news_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'upcoming_news';
  $bean_type->label = 'Upcoming News';
  $bean_type->options = '';
  $bean_type->description = 'Create a block with selected upcoming news items.';
  $export['upcoming_news'] = $bean_type;

  return $export;
}
