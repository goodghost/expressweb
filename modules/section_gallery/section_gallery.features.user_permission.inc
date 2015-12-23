<?php
/**
 * @file
 * section_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function section_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create section_gallery content'.
  $permissions['create section_gallery content'] = array(
    'name' => 'create section_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any section_gallery content'.
  $permissions['delete any section_gallery content'] = array(
    'name' => 'delete any section_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own section_gallery content'.
  $permissions['delete own section_gallery content'] = array(
    'name' => 'delete own section_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any section_gallery content'.
  $permissions['edit any section_gallery content'] = array(
    'name' => 'edit any section_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own section_gallery content'.
  $permissions['edit own section_gallery content'] = array(
    'name' => 'edit own section_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
