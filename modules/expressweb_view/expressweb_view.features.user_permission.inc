<?php
/**
 * @file
 * expressweb_view.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function expressweb_view_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create view content'.
  $permissions['create view content'] = array(
    'name' => 'create view content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any view content'.
  $permissions['delete any view content'] = array(
    'name' => 'delete any view content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own view content'.
  $permissions['delete own view content'] = array(
    'name' => 'delete own view content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any view content'.
  $permissions['edit any view content'] = array(
    'name' => 'edit any view content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own view content'.
  $permissions['edit own view content'] = array(
    'name' => 'edit own view content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
