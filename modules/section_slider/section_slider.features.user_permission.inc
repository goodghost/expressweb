<?php
/**
 * @file
 * section_slider.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function section_slider_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create section_slider content'.
  $permissions['create section_slider content'] = array(
    'name' => 'create section_slider content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any section_slider content'.
  $permissions['delete any section_slider content'] = array(
    'name' => 'delete any section_slider content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own section_slider content'.
  $permissions['delete own section_slider content'] = array(
    'name' => 'delete own section_slider content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any section_slider content'.
  $permissions['edit any section_slider content'] = array(
    'name' => 'edit any section_slider content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own section_slider content'.
  $permissions['edit own section_slider content'] = array(
    'name' => 'edit own section_slider content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
