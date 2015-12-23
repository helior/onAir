<?php
/**
 * @file
 * onair_podcast_ui.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function onair_podcast_ui_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_53058716-e490-42d9-8003-82c055641e54';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Podcast',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'podcast' => 'podcast',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '317d88c6-bca6-4f1c-89e5-7a702811282d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-38476b4e-84f4-43dc-9c41-b780a99d3af8';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '38476b4e-84f4-43dc-9c41-b780a99d3af8';
    $display->content['new-38476b4e-84f4-43dc-9c41-b780a99d3af8'] = $pane;
    $display->panels['left'][0] = 'new-38476b4e-84f4-43dc-9c41-b780a99d3af8';
    $pane = new stdClass();
    $pane->pid = 'new-417f94b1-6aa6-4bae-8eae-f446e6af944a';
    $pane->panel = 'right';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '417f94b1-6aa6-4bae-8eae-f446e6af944a';
    $display->content['new-417f94b1-6aa6-4bae-8eae-f446e6af944a'] = $pane;
    $display->panels['right'][0] = 'new-417f94b1-6aa6-4bae-8eae-f446e6af944a';
    $pane = new stdClass();
    $pane->pid = 'new-cb1f1816-b730-4ba4-924c-c549c85c8bcf';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'podcast_episodes-list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cb1f1816-b730-4ba4-924c-c549c85c8bcf';
    $display->content['new-cb1f1816-b730-4ba4-924c-c549c85c8bcf'] = $pane;
    $display->panels['right'][1] = 'new-cb1f1816-b730-4ba4-924c-c549c85c8bcf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_53058716-e490-42d9-8003-82c055641e54'] = $handler;

  return $export;
}
