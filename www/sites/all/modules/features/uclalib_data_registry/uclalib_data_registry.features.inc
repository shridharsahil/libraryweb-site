<?php
/**
 * @file
 * uclalib_data_registry.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_data_registry_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uclalib_data_registry_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uclalib_data_registry_node_info() {
  $items = array(
    'data' => array(
      'name' => t('Data Registry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name of Project'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
