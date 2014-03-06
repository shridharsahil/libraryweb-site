<?php
/**
 * @file
 * uclalib_static.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_static_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function uclalib_static_node_info() {
  $items = array(
    'static' => array(
      'name' => t('Static page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
