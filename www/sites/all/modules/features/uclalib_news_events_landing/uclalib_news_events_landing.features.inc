<?php
/**
 * @file
 * uclalib_news_events_landing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_news_events_landing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uclalib_news_events_landing_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
