<?php
/**
 * @file
 * section_item_with_link.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function section_item_with_link_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create section_item_with_link content'.
  $permissions['create section_item_with_link content'] = array(
    'name' => 'create section_item_with_link content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any section_item_with_link content'.
  $permissions['delete any section_item_with_link content'] = array(
    'name' => 'delete any section_item_with_link content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own section_item_with_link content'.
  $permissions['delete own section_item_with_link content'] = array(
    'name' => 'delete own section_item_with_link content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any section_item_with_link content'.
  $permissions['edit any section_item_with_link content'] = array(
    'name' => 'edit any section_item_with_link content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own section_item_with_link content'.
  $permissions['edit own section_item_with_link content'] = array(
    'name' => 'edit own section_item_with_link content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
