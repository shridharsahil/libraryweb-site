<?php
/**
 * @file
 * uclalib_news_events_landing.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uclalib_news_events_landing_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'news_and_events_bean';
  $bean_type->label = 'News and Events';
  $bean_type->options = '';
  $bean_type->description = 'News and events: curated news, events for the news-events landing page';
  $export['news_and_events_bean'] = $bean_type;

  return $export;
}
