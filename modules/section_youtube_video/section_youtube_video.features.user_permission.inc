<?php
/**
 * @file
 * section_youtube_video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function section_youtube_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create section_youtube_video content'.
  $permissions['create section_youtube_video content'] = array(
    'name' => 'create section_youtube_video content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any section_youtube_video content'.
  $permissions['delete any section_youtube_video content'] = array(
    'name' => 'delete any section_youtube_video content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own section_youtube_video content'.
  $permissions['delete own section_youtube_video content'] = array(
    'name' => 'delete own section_youtube_video content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any section_youtube_video content'.
  $permissions['edit any section_youtube_video content'] = array(
    'name' => 'edit any section_youtube_video content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own section_youtube_video content'.
  $permissions['edit own section_youtube_video content'] = array(
    'name' => 'edit own section_youtube_video content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
