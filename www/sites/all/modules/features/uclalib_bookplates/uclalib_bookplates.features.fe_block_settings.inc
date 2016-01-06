<?php
/**
 * @file
 * uclalib_bookplates.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function uclalib_bookplates_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-ODD10l2DVbGGI31FJH53mldPHHIIe9PC'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ODD10l2DVbGGI31FJH53mldPHHIIe9PC',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uclalib_omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uclalib_omega',
        'weight' => 0,
      ),
    ),
    'title' => 'Sort by Subject Area',
    'visibility' => 1,
  );

  $export['views-325a6df0a2b3efc28dd7107fef13cd64'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '325a6df0a2b3efc28dd7107fef13cd64',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uclalib_omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uclalib_omega',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-cc66f41f56902ca4d45831e1c0e85613'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'cc66f41f56902ca4d45831e1c0e85613',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'uclalib_omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uclalib_omega',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
