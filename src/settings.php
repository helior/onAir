<?php
$environment = getenv('SITE_ENV');
$dir = __DIR__ . '/settings';

include "$dir/settings.default.php";
// Load default environment settings, if available.
if (is_file("$dir/settings.$environment.default.php")) {
  include "$dir/settings.$environment.default.php";
}
// Load private environment settings, if available.
if (is_file("$dir/settings.$environment.php")) {
  include "$dir/settings.$environment.php";
}

// Load local settings file for local workstations.
if (is_file("$dir/settings.local.php")) {
  include "$dir/settings.local.php";
}
