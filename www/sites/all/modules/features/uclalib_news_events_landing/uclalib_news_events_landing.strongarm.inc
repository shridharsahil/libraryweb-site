<?php
/**
 * @file
 * uclalib_news_events_landing.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uclalib_news_events_landing_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unlimitedfield_remove_field_events';
  $strongarm->value = 1;
  $export['unlimitedfield_remove_field_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unlimitedfield_remove_field_news';
  $strongarm->value = 1;
  $export['unlimitedfield_remove_field_news'] = $strongarm;

  return $export;
}
