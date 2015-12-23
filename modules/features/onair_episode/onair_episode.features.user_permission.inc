<?php
/**
 * @file
 * onair_episode.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function onair_episode_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create episode content'.
  $permissions['create episode content'] = array(
    'name' => 'create episode content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any episode content'.
  $permissions['delete any episode content'] = array(
    'name' => 'delete any episode content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own episode content'.
  $permissions['delete own episode content'] = array(
    'name' => 'delete own episode content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any episode content'.
  $permissions['edit any episode content'] = array(
    'name' => 'edit any episode content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own episode content'.
  $permissions['edit own episode content'] = array(
    'name' => 'edit own episode content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
