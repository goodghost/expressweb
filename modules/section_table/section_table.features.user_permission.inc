<?php
/**
 * @file
 * section_table.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function section_table_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create table_price_list content'.
  $permissions['create table_price_list content'] = array(
    'name' => 'create table_price_list content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any table_price_list content'.
  $permissions['delete any table_price_list content'] = array(
    'name' => 'delete any table_price_list content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own table_price_list content'.
  $permissions['delete own table_price_list content'] = array(
    'name' => 'delete own table_price_list content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any table_price_list content'.
  $permissions['edit any table_price_list content'] = array(
    'name' => 'edit any table_price_list content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own table_price_list content'.
  $permissions['edit own table_price_list content'] = array(
    'name' => 'edit own table_price_list content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
