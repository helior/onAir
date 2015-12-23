<?php
/**
 * @file
 * onair_user_ui.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function onair_user_ui_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_c4648ca0-0720-4597-8234-25c03da86cad';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Editor',
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
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 200153887,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c8f8337b-ceb7-4c4f-9091-d52b277ed3db';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74cc80db-c378-4883-b305-37c7fae6495d';
    $pane->panel = 'middle';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '74cc80db-c378-4883-b305-37c7fae6495d';
    $display->content['new-74cc80db-c378-4883-b305-37c7fae6495d'] = $pane;
    $display->panels['middle'][0] = 'new-74cc80db-c378-4883-b305-37c7fae6495d';
    $pane = new stdClass();
    $pane->pid = 'new-747b6e56-14f5-4d7c-a2ac-04531fa572cd';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'podcasts-owned_by_user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'My Podcasts',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '747b6e56-14f5-4d7c-a2ac-04531fa572cd';
    $display->content['new-747b6e56-14f5-4d7c-a2ac-04531fa572cd'] = $pane;
    $display->panels['middle'][1] = 'new-747b6e56-14f5-4d7c-a2ac-04531fa572cd';
    $pane = new stdClass();
    $pane->pid = 'new-40cb046e-d09a-4ee8-ae3c-771a82a08028';
    $pane->panel = 'middle';
    $pane->type = 'link';
    $pane->subtype = 'link';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 200153887,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'content' => 'Create a podcast',
      'href' => '/node/add/podcast',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '40cb046e-d09a-4ee8-ae3c-771a82a08028';
    $display->content['new-40cb046e-d09a-4ee8-ae3c-771a82a08028'] = $pane;
    $display->panels['middle'][2] = 'new-40cb046e-d09a-4ee8-ae3c-771a82a08028';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_c4648ca0-0720-4597-8234-25c03da86cad'] = $handler;

  return $export;
}
