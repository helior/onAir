<?php
/**
 * @file theme.inc
 */

/**
 * Implements template_preprocess_HOOK().
 */
function template_preprocess_onair_feed_rss(&$vars) {
  $vars['podcast'] = entity_metadata_wrapper('node', $vars['podcast']);
}