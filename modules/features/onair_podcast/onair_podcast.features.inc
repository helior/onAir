<?php
/**
 * @file
 * onair_podcast.features.inc
 */

/**
 * Implements hook_node_info().
 */
function onair_podcast_node_info() {
  $items = array(
    'podcast' => array(
      'name' => t('Podcast'),
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
