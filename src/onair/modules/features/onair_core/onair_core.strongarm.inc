<?php
/**
 * @file
 * onair_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function onair_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'user';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = '[user:name],

You have been approved to join [site:name]! We\'ve created an account for you already, all you have to do is log in by clicking this link (or copy+pasting it to your browser:

[user:one-time-login-url]

This is a ONE TIME ONLY link — you\'ll be able to set your password immediately after. After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

If you find something broken, let me know at [site:mail], thanks!


--  [site:name] team
[site:slogan]
[site:url]';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'Welcome to [site:name]!';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '0';
  $export['user_register'] = $strongarm;

  return $export;
}
