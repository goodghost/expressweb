<?php
/**
 * @file
 * expressweb_contact.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function expressweb_contact_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create contact content'.
  $permissions['create contact content'] = array(
    'name' => 'create contact content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create contact_form content'.
  $permissions['create contact_form content'] = array(
    'name' => 'create contact_form content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create contact_templates content'.
  $permissions['create contact_templates content'] = array(
    'name' => 'create contact_templates content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any contact content'.
  $permissions['delete any contact content'] = array(
    'name' => 'delete any contact content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any contact_form content'.
  $permissions['delete any contact_form content'] = array(
    'name' => 'delete any contact_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any contact_templates content'.
  $permissions['delete any contact_templates content'] = array(
    'name' => 'delete any contact_templates content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own contact content'.
  $permissions['delete own contact content'] = array(
    'name' => 'delete own contact content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own contact_form content'.
  $permissions['delete own contact_form content'] = array(
    'name' => 'delete own contact_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own contact_templates content'.
  $permissions['delete own contact_templates content'] = array(
    'name' => 'delete own contact_templates content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any contact content'.
  $permissions['edit any contact content'] = array(
    'name' => 'edit any contact content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any contact_form content'.
  $permissions['edit any contact_form content'] = array(
    'name' => 'edit any contact_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any contact_templates content'.
  $permissions['edit any contact_templates content'] = array(
    'name' => 'edit any contact_templates content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own contact content'.
  $permissions['edit own contact content'] = array(
    'name' => 'edit own contact content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own contact_form content'.
  $permissions['edit own contact_form content'] = array(
    'name' => 'edit own contact_form content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own contact_templates content'.
  $permissions['edit own contact_templates content'] = array(
    'name' => 'edit own contact_templates content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
