<?php
/**
 * @file
 * uclalib_location_multifields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function uclalib_location_multifields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_social_link'
  $field_bases['field_social_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_link',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_social_type'
  $field_bases['field_social_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_type',
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
        'Yelp' => 'Yelp',
        'Pinterest' => 'Pinterest',
        'Twitter' => 'Twitter',
        'Facebook' => 'Facebook',
        'Instagram' => 'Instagram',
        'RSS' => 'RSS',
        'Youtube' => 'Youtube',
        'Tumblr' => 'Tumblr',
        'Linkedin' => 'Linkedin',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
