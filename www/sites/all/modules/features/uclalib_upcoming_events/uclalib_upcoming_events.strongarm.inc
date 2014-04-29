<?php
/**
 * @file
 * uclalib_upcoming_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uclalib_upcoming_events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__upcoming_events';
  $strongarm->value = array(
    'view_modes' => array(
      'default' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '0',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'revision' => array(
          'weight' => '6',
        ),
        'view_mode' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-9',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_bean__upcoming_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unlimitedfield_remove_field_upcoming_events_events';
  $strongarm->value = 1;
  $export['unlimitedfield_remove_field_upcoming_events_events'] = $strongarm;

  return $export;
}
