<?php
/**
 * @file
 * uclalib_link_list_multifield.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_link_list_multifield_ctools_plugin_api($module = NULL, $api = NULL) {
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
