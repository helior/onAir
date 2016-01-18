<?php
/**
 * @file
 * onair_network_ui.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function onair_network_ui_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
