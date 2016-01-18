<?php
/**
 * @file
 * onair_base_ui.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function onair_base_ui_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
