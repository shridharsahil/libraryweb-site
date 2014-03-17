<?php
/**
 * @file
 * uclalib_location_multifields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_location_multifields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "multifield" && $api == "multifield") {
    return array("version" => "1");
  }
}
