<?php
/**
 * @file
 * uclalib_static.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uclalib_static_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'enter static revision log entry'.
  $permissions['enter static revision log entry'] = array(
    'name' => 'enter static revision log entry',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override static authored by option'.
  $permissions['override static authored by option'] = array(
    'name' => 'override static authored by option',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override static authored on option'.
  $permissions['override static authored on option'] = array(
    'name' => 'override static authored on option',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override static promote to front page option'.
  $permissions['override static promote to front page option'] = array(
    'name' => 'override static promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override static published option'.
  $permissions['override static published option'] = array(
    'name' => 'override static published option',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override static revision option'.
  $permissions['override static revision option'] = array(
    'name' => 'override static revision option',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override static sticky option'.
  $permissions['override static sticky option'] = array(
    'name' => 'override static sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'view any unpublished static content'.
  $permissions['view any unpublished static content'] = array(
    'name' => 'view any unpublished static content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
