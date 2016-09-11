<?php
/**
 * @file
 * uclalib_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function uclalib_users_user_default_roles() {
  $roles = array();

  // Exported role: CE_Basic.
  $roles['CE_Basic'] = array(
    'name' => 'CE_Basic',
    'weight' => 1,
  );

  // Exported role: Communication.
  $roles['Communication'] = array(
    'name' => 'Communication',
    'weight' => 3,
  );

  // Exported role: Hours.
  $roles['Hours'] = array(
    'name' => 'Hours',
    'weight' => 4,
  );

  // Exported role: Lead Site Editor.
  $roles['Lead Site Editor'] = array(
    'name' => 'Lead Site Editor',
    'weight' => 10,
  );

  // Exported role: Schedule Source Admin.
  $roles['Schedule Source Admin'] = array(
    'name' => 'Schedule Source Admin',
    'weight' => 11,
  );

  // Exported role: admin_dev.
  $roles['admin_dev'] = array(
    'name' => 'admin_dev',
    'weight' => 8,
  );

  // Exported role: admin_ga.
  $roles['admin_ga'] = array(
    'name' => 'admin_ga',
    'weight' => 9,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 7,
  );

  // Exported role: content editors.
  $roles['content editors'] = array(
    'name' => 'content editors',
    'weight' => 0,
  );

  // Exported role: resources editors.
  $roles['resources editors'] = array(
    'name' => 'resources editors',
    'weight' => 2,
  );

  return $roles;
}
