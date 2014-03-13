<?php
/**
 * @file
 * File description goes here
 */

/**
 * Implements hook_views_data().
 */
function uclalib_destination_views_data(){
  $data = array();

  $data['node']['facilities_icons'] = array(
    'group' => t('UCLALIB'),
    'title' => t('Facilities Icons.'),
    'field' => array(
      'field' => 'nid',
      'handler' => 'uclalib_destination_field_facilities_icons',
    ),
  );

  return $data;
}