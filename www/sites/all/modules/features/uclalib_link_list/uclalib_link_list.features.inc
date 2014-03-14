<?php
/**
 * @file
 * uclalib_link_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_link_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "multifield" && $api == "multifield") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
