<?php
/**
 * @file
 * uclalib_featured_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_featured_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
