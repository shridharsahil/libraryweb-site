<?php
/**
 * @file
 * uclalib_link_list.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function uclalib_link_list_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_homepage_check'
  $field_bases['field_homepage_check'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_homepage_check',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_introduction'
  $field_bases['field_introduction'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_introduction',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_linklist_links'
  $field_bases['field_linklist_links'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_linklist_links',
    'foreign keys' => array(
      'field_link_description_format' => array(
        'columns' => array(
          'field_link_description_format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'field_link_description_format' => array(
        0 => 'field_link_description_format',
      ),
      'id' => array(
        0 => 'id',
      ),
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'link_with_description',
  );

  return $field_bases;
}
