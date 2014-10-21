<?php
/**
 * @file
 * uclalib_caching.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uclalib_caching_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cacheexclude_list';
  $strongarm->value = 'ajax/*
hours
locations
aasc
aiscl
arts
biomed
bunche-center
clark
csrc
eastasian
err
ethnomusicology
gonda-family-library
law
music
powell
rosenfeld
sel
social-science-data-archive
special-collections
srlf
yrl
';
  $export['cacheexclude_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cacheexclude_node_types';
  $strongarm->value = array(
    'destination' => 0,
    'uclalib_event' => 0,
    'exhibition' => 0,
    'location' => 0,
    'news' => 0,
    'uclalib_resources' => 0,
    'staff_profile' => 0,
    'static' => 0,
    'webform' => 0,
  );
  $export['cacheexclude_node_types'] = $strongarm;

  return $export;
}
