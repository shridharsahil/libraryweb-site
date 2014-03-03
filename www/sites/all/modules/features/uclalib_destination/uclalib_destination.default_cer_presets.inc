<?php
/**
 * @file
 * uclalib_destination.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function uclalib_destination_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*destination*field_destination_location*node*location*field_location_destinations';
  $cnr_obj->enabled = 1;
  $export['node*destination*field_destination_location*node*location*field_location_destinations'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*location*field_location_destinations*node*destination*field_destination_location';
  $cnr_obj->enabled = 1;
  $export['node*location*field_location_destinations*node*destination*field_destination_location'] = $cnr_obj;

  return $export;
}
