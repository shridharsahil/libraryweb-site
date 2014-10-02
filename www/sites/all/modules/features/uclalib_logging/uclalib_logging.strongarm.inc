<?php
/**
 * @file
 * uclalib_logging.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uclalib_logging_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'syslog_ng_enabled';
  $strongarm->value = 1;
  $export['syslog_ng_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'syslog_ng_facility';
  $strongarm->value = '128';
  $export['syslog_ng_facility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'syslog_ng_format';
  $strongarm->value = '!base_url|!timestamp|!type|!ip|!request_uri|!referer|!uid|!link|!message';
  $export['syslog_ng_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'syslog_ng_ident';
  $strongarm->value = 'drupalwatchdog';
  $export['syslog_ng_ident'] = $strongarm;

  return $export;
}
