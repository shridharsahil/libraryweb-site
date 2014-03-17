<?php
/**
 * @file
 * uclalib_quick_find.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uclalib_quick_find_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-quick_find-field_quick_find_terms'
  $field_instances['bean-quick_find-field_quick_find_terms'] = array(
    'bundle' => 'quick_find',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference_views_formatter',
        'settings' => array(
          'view_display' => 'default',
          'view_name' => 'quick_find_bean_display',
        ),
        'type' => 'entityreference_views_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_quick_find_terms',
    'label' => 'Terms',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 1,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Terms');

  return $field_instances;
}
