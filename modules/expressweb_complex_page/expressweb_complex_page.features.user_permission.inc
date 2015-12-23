<?php
/**
 * @file
 * expressweb_complex_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function expressweb_complex_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create complex_page content'.
  $permissions['create complex_page content'] = array(
    'name' => 'create complex_page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any complex_page content'.
  $permissions['delete any complex_page content'] = array(
    'name' => 'delete any complex_page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own complex_page content'.
  $permissions['delete own complex_page content'] = array(
    'name' => 'delete own complex_page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any complex_page content'.
  $permissions['edit any complex_page content'] = array(
    'name' => 'edit any complex_page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own complex_page content'.
  $permissions['edit own complex_page content'] = array(
    'name' => 'edit own complex_page content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
