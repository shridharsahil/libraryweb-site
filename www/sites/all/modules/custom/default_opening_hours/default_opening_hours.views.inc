<?php
/**
 * @file
 * Views integration.
 */

/**
 * Implements hook_views_data_alter().
 */
function default_opening_hours_views_data_alter(&$data){
  //dpm($data);
//  $tables = views_fetch_base_tables();
  $data['search_api_index_location_search']['open_now'] = array(
    'title' => t('Open Now'),
    'group' => t('Opening hours'),
    'description' => t('In the indexed node open now'),
    'field' => array(
      'field' => 'nid',
      'handler' => 'uclalib_opening_hours_field_open_now'
    ),
    'filter' => array(
      'field' => 'nid',
      'handler' => 'uclalib_opening_hours_filter_open_now'
    ),
  );
}