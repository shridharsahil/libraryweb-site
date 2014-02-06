<?php
/**
 * @file
 * uclalib_arch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_arch_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
