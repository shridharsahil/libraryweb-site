<?php
/**
 * @file
 * uclalib_taxonomies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_taxonomies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
