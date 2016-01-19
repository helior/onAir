<?php

/**
 * onAir.profile
 */

/**
 * Implements hook_profile_details().
 */
function onair_profile_details() {
  return array(
    'name' => 'onAir',
    'description' => 'Podcaster site',
  );
}

/**
 * Implements hook_install_tasks().
 */
function onair_install_tasks() {
  return array(
    '_onair_install_task_theme' => array('display' => FALSE),
  );
}

function _onair_install_task_theme(&$install_state) {
  $theme = 'ember';
  theme_enable(array($theme));
  variable_set('theme_default', $theme);
  theme_disable(array('bartik'));
}
