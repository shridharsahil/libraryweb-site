<?php
/**
 * @file
 * uclalib_system.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_system_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
