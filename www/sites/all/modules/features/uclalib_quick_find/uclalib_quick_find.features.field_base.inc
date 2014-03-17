<?php
/**
 * @file
 * uclalib_quick_find.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function uclalib_quick_find_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_quick_find_terms'
  $field_bases['field_quick_find_terms'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quick_find_terms',
    'foreign keys' => array(
      'taxonomy_term_data' => array(
        'columns' => array(
          'target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'name',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'location_amenities' => 'location_amenities',
          'location_equipment' => 'location_equipment',
          'location_study_areas' => 'location_study_areas',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
