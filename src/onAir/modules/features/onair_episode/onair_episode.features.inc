<?php
/**
 * @file
 * onair_episode.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function onair_episode_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function onair_episode_node_info() {
  $items = array(
    'episode' => array(
      'name' => t('Episode'),
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
