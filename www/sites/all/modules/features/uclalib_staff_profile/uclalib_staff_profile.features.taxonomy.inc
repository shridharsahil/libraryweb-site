<?php
/**
 * @file
 * uclalib_staff_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uclalib_staff_profile_taxonomy_default_vocabularies() {
  return array(
    'academic_departmental_liaison' => array(
      'name' => 'Academic Departmental Liaison',
      'machine_name' => 'academic_departmental_liaison',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'area_of_expertise' => array(
      'name' => 'Area of Expertise',
      'machine_name' => 'area_of_expertise',
      'description' => 'Staff defined skill areas',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
