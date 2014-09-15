<?php
/**
 * @file
 * uclalib_exhibition.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uclalib_exhibition_taxonomy_default_vocabularies() {
  return array(
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
