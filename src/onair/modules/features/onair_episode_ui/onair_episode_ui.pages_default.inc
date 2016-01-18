<?php
/**
 * @file
 * onair_episode_ui.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function onair_episode_ui_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_35e2b92f-75aa-4eee-8c31-80776bc62950';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Episode',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Podcast',
        'keyword' => 'podcast',
        'name' => 'entity_from_field:field_ref_podcast-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'episode' => 'episode',
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
      'left' => NULL,
      'default' => NULL,
      'right' => NULL,
    ),
    'left' => array(
      'style' => 'default',
    ),
    'right' => array(
      'style' => 'naked',
    ),
    'style' => 'naked',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e22bb0bb-d85d-4649-ac18-62a0f2d1f4b0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d48f57c-9233-465b-abe3-2cc61531b175';
    $pane->panel = 'left';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'relationship_entity_from_field:field_ref_podcast-node-node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9d48f57c-9233-465b-abe3-2cc61531b175';
    $display->content['new-9d48f57c-9233-465b-abe3-2cc61531b175'] = $pane;
    $display->panels['left'][0] = 'new-9d48f57c-9233-465b-abe3-2cc61531b175';
    $pane = new stdClass();
    $pane->pid = 'new-1c694020-c435-488c-89b6-3b7a8e83e7a6';
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
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1c694020-c435-488c-89b6-3b7a8e83e7a6';
    $display->content['new-1c694020-c435-488c-89b6-3b7a8e83e7a6'] = $pane;
    $display->panels['left'][1] = 'new-1c694020-c435-488c-89b6-3b7a8e83e7a6';
    $pane = new stdClass();
    $pane->pid = 'new-7e467f52-92b9-467c-a486-c9e278f38575';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_itunes_duration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7e467f52-92b9-467c-a486-c9e278f38575';
    $display->content['new-7e467f52-92b9-467c-a486-c9e278f38575'] = $pane;
    $display->panels['left'][2] = 'new-7e467f52-92b9-467c-a486-c9e278f38575';
    $pane = new stdClass();
    $pane->pid = 'new-a0dfc831-a6ef-4e77-9986-87ba5a913a83';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_itunes_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a0dfc831-a6ef-4e77-9986-87ba5a913a83';
    $display->content['new-a0dfc831-a6ef-4e77-9986-87ba5a913a83'] = $pane;
    $display->panels['left'][3] = 'new-a0dfc831-a6ef-4e77-9986-87ba5a913a83';
    $pane = new stdClass();
    $pane->pid = 'new-be9285b4-2714-4355-91f4-e92a7b8afc12';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_itunes_explicit';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'be9285b4-2714-4355-91f4-e92a7b8afc12';
    $display->content['new-be9285b4-2714-4355-91f4-e92a7b8afc12'] = $pane;
    $display->panels['left'][4] = 'new-be9285b4-2714-4355-91f4-e92a7b8afc12';
    $pane = new stdClass();
    $pane->pid = 'new-0e1e520a-2eea-4411-917e-36d2ffb95119';
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
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0e1e520a-2eea-4411-917e-36d2ffb95119';
    $display->content['new-0e1e520a-2eea-4411-917e-36d2ffb95119'] = $pane;
    $display->panels['right'][0] = 'new-0e1e520a-2eea-4411-917e-36d2ffb95119';
    $pane = new stdClass();
    $pane->pid = 'new-23eeaae2-2c95-40dc-ad37-dd1a6e6f878e';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_itunes_sub_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '23eeaae2-2c95-40dc-ad37-dd1a6e6f878e';
    $display->content['new-23eeaae2-2c95-40dc-ad37-dd1a6e6f878e'] = $pane;
    $display->panels['right'][1] = 'new-23eeaae2-2c95-40dc-ad37-dd1a6e6f878e';
    $pane = new stdClass();
    $pane->pid = 'new-ac341c80-e54b-4407-88f3-41dd8e0a65d7';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_file';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_audio',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'controls' => 1,
        'autoplay' => 0,
        'loop' => 0,
        'preload' => 'auto',
        'multiple_file_behavior' => 'tags',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ac341c80-e54b-4407-88f3-41dd8e0a65d7';
    $display->content['new-ac341c80-e54b-4407-88f3-41dd8e0a65d7'] = $pane;
    $display->panels['right'][2] = 'new-ac341c80-e54b-4407-88f3-41dd8e0a65d7';
    $pane = new stdClass();
    $pane->pid = 'new-73e046dd-62b0-4168-aac2-dcf5753dce28';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_itunes_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Summary',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '73e046dd-62b0-4168-aac2-dcf5753dce28';
    $display->content['new-73e046dd-62b0-4168-aac2-dcf5753dce28'] = $pane;
    $display->panels['right'][3] = 'new-73e046dd-62b0-4168-aac2-dcf5753dce28';
    $pane = new stdClass();
    $pane->pid = 'new-a53f96e1-858c-44ab-979e-c927f17ebc3d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_show_notes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a53f96e1-858c-44ab-979e-c927f17ebc3d';
    $display->content['new-a53f96e1-858c-44ab-979e-c927f17ebc3d'] = $pane;
    $display->panels['right'][4] = 'new-a53f96e1-858c-44ab-979e-c927f17ebc3d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1c694020-c435-488c-89b6-3b7a8e83e7a6';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_35e2b92f-75aa-4eee-8c31-80776bc62950'] = $handler;

  return $export;
}
