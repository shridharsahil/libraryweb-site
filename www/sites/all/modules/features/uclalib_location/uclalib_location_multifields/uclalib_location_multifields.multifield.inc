<?php
/**
 * @file
 * uclalib_location_multifields.multifield.inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function uclalib_location_multifields_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'social_links';
  $multifield->label = 'Social Links';
  $multifield->description = '';
  $export['social_links'] = $multifield;

  return $export;
}
