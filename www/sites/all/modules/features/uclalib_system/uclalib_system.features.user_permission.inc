<?php
/**
 * @file
 * uclalib_system.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uclalib_system_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer panelizer taxonomy_term academic_departmental_liaison defaults'.
  $permissions['administer panelizer taxonomy_term academic_departmental_liaison defaults'] = array(
    'name' => 'administer panelizer taxonomy_term academic_departmental_liaison defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'clear ccle_redirects_importer feeds'.
  $permissions['clear ccle_redirects_importer feeds'] = array(
    'name' => 'clear ccle_redirects_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ccle_redirects_importer feeds'.
  $permissions['import ccle_redirects_importer feeds'] = array(
    'name' => 'import ccle_redirects_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ccle_redirects_importer feeds'.
  $permissions['unlock ccle_redirects_importer feeds'] = array(
    'name' => 'unlock ccle_redirects_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'system',
  );

  return $permissions;
}
