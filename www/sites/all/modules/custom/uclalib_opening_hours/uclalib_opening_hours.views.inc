<?php
/**
 * @file
 * Views integration for the opening hours.
 */

/**
 * Implements hook_views_data().
 */
function uclalib_opening_hours_views_data() {
  $data = array();

  $data['node']['opening_hours_week'] = array(
    'title' => t('Opening hours week'),
    'group' => t('Opening hours'),
    'description' => t('Opening hours table for the current weeek.'),
    'field' => array(
      'field' => 'nid',
      'handler' => 'uclalib_opening_hours_field_opening_hours_week'
    ),
  );

  $data['node']['opening_hours_today'] = array(
    'title' => t('Opening hours today'),
    'group' => t('Opening hours'),
    'description' => t('Opening hours for today'),
    'field' => array(
      'field' => 'nid',
      'extra' => 'title',
      'handler' => 'uclalib_opening_hours_field_opening_hours_today'
    ),
  );

  return $data;
}