<?php
/**
 * @file
 * uclalib_libguides.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uclalib_libguides_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any libguides_api_v1 bean'.
  $permissions['create any libguides_api_v1 bean'] = array(
    'name' => 'create any libguides_api_v1 bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any libguides_api_v1 bean'.
  $permissions['delete any libguides_api_v1 bean'] = array(
    'name' => 'delete any libguides_api_v1 bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any libguides_api_v1 bean'.
  $permissions['edit any libguides_api_v1 bean'] = array(
    'name' => 'edit any libguides_api_v1 bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any libguides_api_v1 bean'.
  $permissions['view any libguides_api_v1 bean'] = array(
    'name' => 'view any libguides_api_v1 bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
