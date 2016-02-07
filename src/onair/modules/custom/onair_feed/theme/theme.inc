<?php
/**
 * @file theme.inc
 */

/**
 * Implements template_preprocess_HOOK().
 */
function template_preprocess_onair_feed_rss(&$vars) {
  // Podcast variables
  $podcast = entity_metadata_wrapper('node', $vars['podcast']);
  $vars['podcast'] = $podcast;
  $vars['podcast_title'] = $podcast->title->value();
  $vars['podcast_subtitle'] = $podcast->field_itunes_sub_title->value();
  $vars['podcast_link_url'] = $podcast->field_link_url->value();
  $vars['podcast_copyright'] = $podcast->field_copyright->value();
  $vars['podcast_itunes_author'] = $podcast->field_itunes_author->value();
  $vars['podcast_itunes_summary'] = $podcast->field_itunes_summary->value();
  $vars['podcast_itunes_explicit'] = $podcast->field_itunes_explicit->value();
  $vars['podcast_itunes_block']= $podcast->field_itunes_block->value();
  $vars['podcast_itunes_owner'] = $podcast->field_itunes_owner->value();
  if (!empty($vars['podcast_itunes_owner'])) {
    $vars['podcast_itunes_owner_name'] = $podcast->field_itunes_owner->field_itunes_owner_name->value();
    $vars['podcast_itunes_owner_name'] = $podcast->field_itunes_owner->field_itunes_owner_email->value();
  }
  $vars['podcast_image'] = $podcast->field_image->value();
  $vars['podcast_itunes_complete'] = $podcast->field_itunes_complete->value();
  $vars['podcast_itunes_new_feed_url'] = $podcast->field_itunes_new_feed_url->value();

  // For each iTunes category, we must nest it inside of a parent category, if
  // one exists. We only inspect 2-levels of categories, though.
  $vars['itunes_categories'] = array();
  foreach ($podcast->field_ref_itunes_category->getIterator() as $term) {
    $parents = taxonomy_get_parents($term->tid->value());
    $category = array(
      '#type' => 'html_tag',
      '#tag' => 'itunes:category',
      '#attributes' => array('text' => $term->name->value()),
    );

    // If we have parent categories, we use the first one and nest our configured category inside...
    if (count($parents)) {
      $parent = array_shift($parents);
      $vars['itunes_categories'][$parent->tid] = array(
        '#type' => 'html_tag',
        '#tag' => 'itunes:category',
        '#attributes' => array('text' => $parent->name),
        '#value' => render($category),
      );
    }
    // ... otherwise we just render the category tag.
    else {
      $vars['itunes_categories'][$term->tid->value()] = $category;
    }
  }

  // Episode variables
  $vars['episodes'] = array();

  // Fetch all associated Episodes of a podcast
  $query = new EntityFieldQuery();
  $entity_type = 'node';
  $query
    ->entityCondition('entity_type', $entity_type)
    ->entityCondition('bundle', 'episode')
    ->propertyCondition('status', TRUE)
    ->fieldCondition('field_ref_podcast', 'target_id', $podcast->nid->value());

  $results = $query->execute();
  if (!empty($results[$entity_type])) {
    foreach ($results[$entity_type] as $result) {
      $vars['episodes'][$result->nid]['episode'] = $episode = entity_metadata_wrapper($entity_type, $result->nid);
      $vars['episodes'][$result->nid]['title'] = $episode->title->value();
      $vars['episodes'][$result->nid]['itunes_subtitle'] = $episode->field_itunes_sub_title->value();
      $vars['episodes'][$result->nid]['itunes_author'] = $episode->field_itunes_author->value();
      $vars['episodes'][$result->nid]['itunes_explicit'] = $episode->field_itunes_explicit->value();
      $vars['episodes'][$result->nid]['image'] = $episode->field_image->value();
      $vars['episodes'][$result->nid]['itunes_summary'] = $episode->field_itunes_summary->value();
      $vars['episodes'][$result->nid]['file'] = $episode->field_file->value();
      $vars['episodes'][$result->nid]['itunes_duration'] = $episode->field_itunes_duration->value();
      $vars['episodes'][$result->nid]['itunes_block'] = $episode->field_itunes_block->value();
      $vars['episodes'][$result->nid]['itunes_is_closed_caption'] = $episode->field_itunes_is_closed_caption->value();
      $vars['episodes'][$result->nid]['itunes_order'] = $episode->field_itunes_order->value();
    }
  }
}
