<?php
/**
 * @file
 * uclalib_upcoming_events.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uclalib_upcoming_events_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'upcoming_events';
  $bean_type->label = 'Upcoming Events';
  $bean_type->options = '';
  $bean_type->description = 'Create a block with selected upcoming events.';
  $export['upcoming_events'] = $bean_type;

  return $export;
}
