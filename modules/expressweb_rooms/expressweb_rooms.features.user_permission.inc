<?php
/**
 * @file
 * expressweb_rooms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function expressweb_rooms_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create room content'.
  $permissions['create room content'] = array(
    'name' => 'create room content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any room content'.
  $permissions['delete any room content'] = array(
    'name' => 'delete any room content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own room content'.
  $permissions['delete own room content'] = array(
    'name' => 'delete own room content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any room content'.
  $permissions['edit any room content'] = array(
    'name' => 'edit any room content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own room content'.
  $permissions['edit own room content'] = array(
    'name' => 'edit own room content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
