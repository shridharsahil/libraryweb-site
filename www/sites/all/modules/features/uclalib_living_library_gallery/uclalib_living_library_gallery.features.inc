<?php
/**
 * @file
 * uclalib_living_library_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_living_library_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
