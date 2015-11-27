<?php
/**
 * @file
 * onair_references.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function onair_references_taxonomy_default_vocabularies() {
  return array(
    'keywords' => array(
      'name' => 'Keywords',
      'machine_name' => 'keywords',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
