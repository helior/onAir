<?php
/**
 * @file theme.inc
 */

/**
 * Implements template_preprocess_HOOK().
 */
function template_preprocess_onair_feed_rss(&$vars) {
  $podcast = entity_metadata_wrapper('node', $vars['podcast']);
  $vars['podcast'] = $podcast;

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
}
