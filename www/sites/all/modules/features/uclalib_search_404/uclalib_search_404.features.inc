<?php
/**
 * @file
 * uclalib_search_404.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_search_404_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
