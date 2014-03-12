<?php
/**
 * @file
 * uclalib_opening_hours.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uclalib_opening_hours_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'hours_page' => array(
        'label' => 'Hours Page',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
