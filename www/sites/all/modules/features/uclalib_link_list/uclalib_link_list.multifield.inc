<?php
/**
 * @file
 * uclalib_link_list.multifield.inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function uclalib_link_list_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'link_with_description';
  $multifield->label = 'Link With Description';
  $multifield->description = '';
  $export['link_with_description'] = $multifield;

  return $export;
}
