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
    'audience' => array(
      'name' => 'Audience',
      'machine_name' => 'audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'events_and_exhibitions_series' => array(
      'name' => 'Events and Exhibitions Series',
      'machine_name' => 'events_and_exhibitions_series',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'events_categories' => array(
      'name' => 'Events Categories',
      'machine_name' => 'events_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
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
    'news_categories' => array(
      'name' => 'News Categories',
      'machine_name' => 'news_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'resource_categories' => array(
      'name' => 'Resource Categories',
      'machine_name' => 'resource_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'staff_departments' => array(
      'name' => 'Staff Departments',
      'machine_name' => 'staff_departments',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
