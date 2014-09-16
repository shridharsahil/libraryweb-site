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

  // Exported role: admin_dev.
  $roles['admin_dev'] = array(
    'name' => 'admin_dev',
    'weight' => 5,
  );

  // Exported role: admin_ga.
  $roles['admin_ga'] = array(
    'name' => 'admin_ga',
    'weight' => 6,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: content editors.
  $roles['content editors'] = array(
    'name' => 'content editors',
    'weight' => 3,
  );

  // Exported role: resources editors.
  $roles['resources editors'] = array(
    'name' => 'resources editors',
    'weight' => 4,
  );

  return $roles;
}
