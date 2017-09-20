<?php

/**
 * @file
 * Drush integration for autogrow_textarea.
 */

/**
 * The jQuery NS-Autogrow plugin URI.
 */
define('AUTOGROW_DOWNLOAD_URI', 'https://github.com/ro31337/jquery.ns-autogrow/archive/1.1.6.zip');

/**
 * Implements hook_drush_command().
 */
function autogrow_textarea_drush_command() {
  $items = [];

  $items['autogrow-plugin'] = [
    'callback' => 'drush_autogrow_plugin',
    'description' => dt('Download and install the jQuery NS-Autogrow plugin.'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'aliases' => ['autogrowplugin'],
  ];

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function autogrow_textarea_drush_help($section) {
  switch ($section) {
    case 'drush:autogrow-plugin':
      return dt('Download and install the jQuery NS-Autogrow plugin from https://github.com/ro31337/jquery.ns-autogrow.');
  }
}

/**
 * Command to download the jQuery NS-Autogrow plugin.
 */
function drush_autogrow_plugin() {
  $path = 'libraries';

  // Create the path if it does not exist.
  if (!is_dir($path)) {
    drush_op('mkdir', $path);
    drush_log(dt('Directory @path was created', ['@path' => $path]), 'notice');
  }

  // Set the directory to the download location.
  $olddir = getcwd();
  chdir($path);

  // Download the zip archive.
  if ($filepath = drush_download_file(AUTOGROW_DOWNLOAD_URI)) {
    $filename = basename($filepath);
    $dirname = basename($filepath, '.zip');

    // Remove any existing jQuery NS-Autogrow plugin directory.
    if (is_dir($dirname) || is_dir('jquery_ns_autogrow')) {
      drush_delete_dir($dirname, TRUE);
      drush_delete_dir('jquery_ns_autogrow', TRUE);
      drush_log(dt('An existing jQuery NS-Autogrow plugin was deleted from @path', ['@path' => $path]), 'notice');
    }

    // Decompress the zip archive.
    drush_tarball_extract($filename, $dirname);

    // Change the directory name to "chosen" if needed.
    if ($dirname != 'jquery_ns_autogrow') {
      drush_move_dir($dirname, 'jquery_ns_autogrow', TRUE);
      $dirname = 'jquery_ns_autogrow';
    }
  }

  if (is_dir($dirname)) {
    drush_log(dt('jQuery NS-Autogrow plugin has been installed in @path', ['@path' => $path]), 'success');
  }
  else {
    drush_log(dt('Drush was unable to install the jQuery NS-Autogrow plugin to @path', ['@path' => $path]), 'error');
  }

  // Set working directory back to the previous working directory.
  chdir($olddir);
}
