<?php
/**
 * @file
 * uclalib_bookplates..inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function uclalib_bookplates_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'bookplates_donor_s_';
  $multifield->label = 'Bookplates Donor(s)';
  $multifield->description = '';
  $export['bookplates_donor_s_'] = $multifield;

  return $export;
}
