<?php
/**
 * @file
 * onair_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function onair_core_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 2,
    'machine_name' => 'editor',
  );

  return $roles;
}
