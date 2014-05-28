<?php
/**
 * @file
 * uclalib_text_block_bean.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uclalib_text_block_bean_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-text_block-field_text_block'
  $field_instances['bean-text_block-field_text_block'] = array(
    'bundle' => 'text_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_text_block',
    'label' => 'Text Block',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Text Block');

  return $field_instances;
}
