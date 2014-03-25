<?php
/**
 * @file
 * uclalib_footer_settings.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uclalib_footer_settings_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-footer_description-field_footer_descripton'
  $field_instances['bean-footer_description-field_footer_descripton'] = array(
    'bundle' => 'footer_description',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add text for footer',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_footer_descripton',
    'label' => 'Footer Descripton',
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
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add text for footer');
  t('Footer Descripton');

  return $field_instances;
}
