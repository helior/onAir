<?php

$plugin = array(
  'title' => t('onAir Feed Url'),
  'description' => t('Renders an absolute URL to the podcast RSS feed.'),
  'required context' => new ctools_context_required(t('Node'), 'node', array('type' => 'podcast')),
  'category' => t('onAir'),
);

/**
 * Render callback.
 */
function onair_feed_feed_url_content_type_render($subtype, $conf, $panel_args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }

  $node = $context->data;
  $output = onair_feed_feed_url($node);
  $output = '<input type="text" size="50" value="' . $output . '" />';

  $element = new stdClass();
  $element->module = 'onair_feed';
  $element->content = $output;

  return $element;

}

function onair_feed_feed_url_content_type_edit_form($form, &$form_state) {
  return $form;
}

function onair_feed_feed_url_content_type_edit_form_submit($form, &$form_state) {
}
