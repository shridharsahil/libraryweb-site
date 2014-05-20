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
