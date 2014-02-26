<?php
/**
 * @file
 * ucla_library_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ucla_library_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'events_and_exhibitions_audience' => array(
      'name' => 'Events and Exhibitions Audience',
      'machine_name' => 'events_and_exhibitions_audience',
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
    'staff_subject_areas' => array(
      'name' => 'Staff Subject Areas',
      'machine_name' => 'staff_subject_areas',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
