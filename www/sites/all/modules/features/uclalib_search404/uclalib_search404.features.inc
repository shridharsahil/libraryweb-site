<?php
/**
 * @file
 * uclalib_search404.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_search404_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
