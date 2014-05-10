<?php
/**
 * @file
 * bsp_event_cal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bsp_event_cal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bsp_event_cal_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
