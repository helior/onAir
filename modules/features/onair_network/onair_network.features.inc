<?php
/**
 * @file
 * onair_network.features.inc
 */

/**
 * Implements hook_node_info().
 */
function onair_network_node_info() {
  $items = array(
    'network' => array(
      'name' => t('Network'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
