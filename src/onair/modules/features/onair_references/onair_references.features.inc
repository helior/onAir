<?php
/**
 * @file
 * onair_references.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function onair_references_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
