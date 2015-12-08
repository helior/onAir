<?php
/**
 * @file
 * onair_network.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function onair_network_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'networks';
  $page->task = 'page';
  $page->admin_title = 'Networks';
  $page->admin_description = '';
  $page->path = 'networks';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Networks',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_networks__panel_context_35af8893-0f17-483e-88fd-f21a537cf9a0';
  $handler->task = 'page';
  $handler->subtask = 'networks';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'List',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4ecb0c7b-e4ad-4603-8a6b-3a24ece563a5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0fd64ae7-d265-4b71-b707-8171ee5716b8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'networks-main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0fd64ae7-d265-4b71-b707-8171ee5716b8';
    $display->content['new-0fd64ae7-d265-4b71-b707-8171ee5716b8'] = $pane;
    $display->panels['middle'][0] = 'new-0fd64ae7-d265-4b71-b707-8171ee5716b8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['networks'] = $page;

  return $pages;

}
