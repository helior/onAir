<?php
/**
 * @file
 * onair_network.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function onair_network_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__network';
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
  $export['field_bundle_settings_node__network'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_network_pattern';
  $strongarm->value = 'network/[node:title]';
  $export['pathauto_node_network_pattern'] = $strongarm;

  return $export;
}
