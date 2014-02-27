<?php
/**
 * @file
 * Drush commands.
 */

/**
 * Implements hook_drush_command().
 */
function uclalib_taxonomies_drush_command() {
  $commands = array();

  $commands['uclalib-create-terms'] = array(
    'aliases' => array('ucterms'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'description' => dt('Create taxonomy terms.'),
  );

  return $commands;
}

/**
 * Implements drush_uclalib_create_terms().
 */
function drush_uclalib_taxonomies_uclalib_create_terms() {
  module_load_install('uclalib_taxonomies');

  _uclalib_taxonomies_create_terms();
}

