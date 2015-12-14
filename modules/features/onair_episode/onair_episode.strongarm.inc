<?php
/**
 * @file
 * onair_episode.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function onair_episode_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__episode';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__episode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_episode_pattern';
  $strongarm->value = '[node:field-ref-podcast:field_name]/episode/[node:title]';
  $export['pathauto_node_episode_pattern'] = $strongarm;

  return $export;
}
