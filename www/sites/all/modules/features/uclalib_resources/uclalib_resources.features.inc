<?php
/**
 * @file
 * uclalib_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_resources_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uclalib_resources_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uclalib_resources_node_info() {
  $items = array(
    'uclalib_resources' => array(
      'name' => t('Resources'),
      'base' => 'node_content',
      'description' => t('Resources content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
