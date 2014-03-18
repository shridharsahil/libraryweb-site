<?php
/**
 * @file
 * uclalib_support_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_support_services_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}
