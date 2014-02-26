<?php
/**
 * @file
 * uclalib_taxonomies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uclalib_taxonomies_taxonomy_default_vocabularies() {
  return array(
    'location_amenities' => array(
      'name' => 'Location Amenities',
      'machine_name' => 'location_amenities',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'location_equipment' => array(
      'name' => 'Location Equipment',
      'machine_name' => 'location_equipment',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'location_study_areas' => array(
      'name' => 'Location Study areas',
      'machine_name' => 'location_study_areas',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
