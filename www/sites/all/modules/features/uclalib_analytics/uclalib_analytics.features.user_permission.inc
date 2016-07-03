<?php
/**
 * @file
 * uclalib_analytics.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uclalib_analytics_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer google tag manager'.
  $permissions['administer google tag manager'] = array(
    'name' => 'administer google tag manager',
    'roles' => array(
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
    ),
    'module' => 'google_tag',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  return $permissions;
}
