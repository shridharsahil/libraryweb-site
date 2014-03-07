<?php
/**
 * @file
 * uclalib_exhibition.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_exhibition_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function uclalib_exhibition_node_info() {
  $items = array(
    'exhibition' => array(
      'name' => t('Exhibition'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
