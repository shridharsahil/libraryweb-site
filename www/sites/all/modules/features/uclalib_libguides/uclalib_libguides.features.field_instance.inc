<?php
/**
 * @file
 * uclalib_libguides.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uclalib_libguides_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-libguides_api_v1-field_lg_api_v1_desc'
  $field_instances['bean-libguides_api_v1-field_lg_api_v1_desc'] = array(
    'bundle' => 'libguides_api_v1',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Include the guide description next to the guide title in your results.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_lg_api_v1_desc',
    'label' => 'Include description?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'bean-libguides_api_v1-field_lg_api_v1_limit'
  $field_instances['bean-libguides_api_v1-field_lg_api_v1_limit'] = array(
    'bundle' => 'libguides_api_v1',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter the number of results to display, or enter 0 (zero) to display all matching items.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_lg_api_v1_limit',
    'label' => 'Number of results',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'bean-libguides_api_v1-field_lg_api_v1_more'
  $field_instances['bean-libguides_api_v1-field_lg_api_v1_more'] = array(
    'bundle' => 'libguides_api_v1',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Display a "more results" link at the bottom of your results that points back to the LibGuides search page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_lg_api_v1_more',
    'label' => 'Show more results?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'bean-libguides_api_v1-field_lg_api_v1_search_term'
  $field_instances['bean-libguides_api_v1-field_lg_api_v1_search_term'] = array(
    'bundle' => 'libguides_api_v1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can customize your API request to only return guides that contain a certain term, or those that are assigned to a category matching a specific name. Leaving this option blank will return all published guides.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_lg_api_v1_search_term',
    'label' => 'Search term',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'bean-libguides_api_v1-field_lg_api_v1_search_type'
  $field_instances['bean-libguides_api_v1-field_lg_api_v1_search_type'] = array(
    'bundle' => 'libguides_api_v1',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can customize your API request to only return guides that contain a certain term, or those that are assigned to a category matching a specific name. Leaving this option blank will return all published guides.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_lg_api_v1_search_type',
    'label' => 'Search type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-libguides_api_v1-field_lg_api_v1_sortby'
  $field_instances['bean-libguides_api_v1-field_lg_api_v1_sortby'] = array(
    'bundle' => 'libguides_api_v1',
    'default_value' => array(
      0 => array(
        'value' => 'SKIP',
      ),
    ),
    'deleted' => 0,
    'description' => 'Select how your matching guides should be sorted, either alphabetically by name, by popularity, by publication date, etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_lg_api_v1_sortby',
    'label' => 'Sort order',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display a "more results" link at the bottom of your results that points back to the LibGuides search page.');
  t('Enter the number of results to display, or enter 0 (zero) to display all matching items.');
  t('Include description?');
  t('Include the guide description next to the guide title in your results.');
  t('Number of results');
  t('Search term');
  t('Search type');
  t('Select how your matching guides should be sorted, either alphabetically by name, by popularity, by publication date, etc.');
  t('Show more results?');
  t('Sort order');
  t('You can customize your API request to only return guides that contain a certain term, or those that are assigned to a category matching a specific name. Leaving this option blank will return all published guides.');

  return $field_instances;
}
