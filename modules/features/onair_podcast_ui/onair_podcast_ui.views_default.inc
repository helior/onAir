<?php
/**
 * @file
 * onair_podcast_ui.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function onair_podcast_ui_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'podcast_episodes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Podcast Episodes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'field_itunes_duration' => 'field_itunes_duration',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_itunes_duration' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M j, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: iTunes: Duration */
  $handler->display->display_options['fields']['field_itunes_duration']['id'] = 'field_itunes_duration';
  $handler->display->display_options['fields']['field_itunes_duration']['table'] = 'field_data_field_itunes_duration';
  $handler->display->display_options['fields']['field_itunes_duration']['field'] = 'field_itunes_duration';
  $handler->display->display_options['fields']['field_itunes_duration']['label'] = '';
  $handler->display->display_options['fields']['field_itunes_duration']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Podcast (field_ref_podcast) */
  $handler->display->display_options['arguments']['field_ref_podcast_target_id']['id'] = 'field_ref_podcast_target_id';
  $handler->display->display_options['arguments']['field_ref_podcast_target_id']['table'] = 'field_data_field_ref_podcast';
  $handler->display->display_options['arguments']['field_ref_podcast_target_id']['field'] = 'field_ref_podcast_target_id';
  $handler->display->display_options['arguments']['field_ref_podcast_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_ref_podcast_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ref_podcast_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ref_podcast_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ref_podcast_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'list');
  $handler->display->display_options['argument_input'] = array(
    'field_ref_podcast_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Podcast (field_ref_podcast)',
    ),
  );
  $export['podcast_episodes'] = $view;

  return $export;
}
