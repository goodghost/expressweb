<?php
/**
 * @file
 * section_text_over_image.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function section_text_over_image_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create section_text_over_image content'.
  $permissions['create section_text_over_image content'] = array(
    'name' => 'create section_text_over_image content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any section_text_over_image content'.
  $permissions['delete any section_text_over_image content'] = array(
    'name' => 'delete any section_text_over_image content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own section_text_over_image content'.
  $permissions['delete own section_text_over_image content'] = array(
    'name' => 'delete own section_text_over_image content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any section_text_over_image content'.
  $permissions['edit any section_text_over_image content'] = array(
    'name' => 'edit any section_text_over_image content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own section_text_over_image content'.
  $permissions['edit own section_text_over_image content'] = array(
    'name' => 'edit own section_text_over_image content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
