<?php
/**
 * @file onair_feed.page.inc
 */

 /**
  * Page callback.
  */
 function onair_feed_rss_page_callback($podcast) {
   // Set Content-Type headers if they haven't already been set.
  //  if (is_null(drupal_get_http_header('Content-Type'))) {
  //    drupal_add_http_header('Content-Type', 'application/rss+xml; charset=utf-8');
  //  }

   // Set Content-Language headers if they haven't already been set.
  //  if (is_null(drupal_get_http_header('Content-Language'))) {
  //    global $language;
  //    drupal_add_http_header('Content-Language', $language->language);
  //  }

   $output = theme('onair_feed_rss', array('podcast' => $podcast));
   $output = tidy_repair_string($output, array(
     'output-xml' => true,
     'input-xml' => true,
     'indent' => true,
     'wrap' => 0,
   ));
  //  print $output;
  //  drupal_page_footer();
  //  exit;
  return '<textarea rows="40">' . $output . '</textarea>';
 }
