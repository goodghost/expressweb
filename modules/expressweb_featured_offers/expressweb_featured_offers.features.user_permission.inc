<?php
/**
 * @file
 * expressweb_featured_offers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function expressweb_featured_offers_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create featured_offers content'.
  $permissions['create featured_offers content'] = array(
    'name' => 'create featured_offers content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any featured_offers content'.
  $permissions['delete any featured_offers content'] = array(
    'name' => 'delete any featured_offers content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own featured_offers content'.
  $permissions['delete own featured_offers content'] = array(
    'name' => 'delete own featured_offers content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any featured_offers content'.
  $permissions['edit any featured_offers content'] = array(
    'name' => 'edit any featured_offers content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own featured_offers content'.
  $permissions['edit own featured_offers content'] = array(
    'name' => 'edit own featured_offers content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
