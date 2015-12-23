<?php
/**
 * @file
 * section_description_and_images.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function section_description_and_images_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create section_description_and_images content'.
  $permissions['create section_description_and_images content'] = array(
    'name' => 'create section_description_and_images content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any section_description_and_images content'.
  $permissions['delete any section_description_and_images content'] = array(
    'name' => 'delete any section_description_and_images content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own section_description_and_images content'.
  $permissions['delete own section_description_and_images content'] = array(
    'name' => 'delete own section_description_and_images content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any section_description_and_images content'.
  $permissions['edit any section_description_and_images content'] = array(
    'name' => 'edit any section_description_and_images content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own section_description_and_images content'.
  $permissions['edit own section_description_and_images content'] = array(
    'name' => 'edit own section_description_and_images content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
