<?php
/**
 * @file
 * uclalib_link_list.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uclalib_link_list_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-link_list-field_linklist_links'
  $field_instances['bean-link_list-field_linklist_links'] = array(
    'bundle' => 'link_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_linklist_links',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(),
      'type' => 'multifield_default',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Links');

  return $field_instances;
}
