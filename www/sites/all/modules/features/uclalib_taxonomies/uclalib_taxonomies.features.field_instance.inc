<?php
/**
 * @file
 * uclalib_taxonomies.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uclalib_taxonomies_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-location_amenities-field_icon'
  $field_instances['taxonomy_term-location_amenities-field_icon'] = array(
    'bundle' => 'location_amenities',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'icon_field',
        'settings' => array(
          'link_to_content' => FALSE,
        ),
        'type' => 'icon_field_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'bundle' => NULL,
      'icon' => NULL,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'icon_field',
      'settings' => array(),
      'type' => 'icon_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-location_equipment-field_icon'
  $field_instances['taxonomy_term-location_equipment-field_icon'] = array(
    'bundle' => 'location_equipment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'icon_field',
        'settings' => array(
          'link_to_content' => FALSE,
        ),
        'type' => 'icon_field_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'bundle' => NULL,
      'icon' => NULL,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'icon_field',
      'settings' => array(),
      'type' => 'icon_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-location_study_areas-field_icon'
  $field_instances['taxonomy_term-location_study_areas-field_icon'] = array(
    'bundle' => 'location_study_areas',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'icon_field',
        'settings' => array(
          'link_to_content' => FALSE,
        ),
        'type' => 'icon_field_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'bundle' => NULL,
      'icon' => NULL,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'icon_field',
      'settings' => array(),
      'type' => 'icon_field',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Icon');

  return $field_instances;
}
