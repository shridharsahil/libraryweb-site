<?php
/**
 * @file
 * uclalib_text_block_bean.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function uclalib_text_block_bean_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_text_block'
  $field_bases['field_text_block'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_text_block',
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

  return $field_bases;
}
