<?php
/**
 * @file
 * Enables modules and site configuration for a minimal site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function uclalib_form_install_configure_form_alter(&$form, $form_state) {

  // Pre-populate the site name with the project name.
  $form['site_information']['site_name']['#default_value'] = "UCLA Library";
  $form['site_information']['site_mail']['#default_value'] = "webmaster@bluesparklabs.com";

  // Pre-fill the admin user account.
  $form['admin_account']['account']['name']['#value'] = "bluespark";
  $form['admin_account']['account']['mail']['#value'] = "webmaster@bluesparklabs.com";
  $form['admin_account']['account']['pass']['#value'] = array('pass1' => 'admin', 'pass2' => 'admin');

  // Server settings.
  $form['server_settings']['site_default_country']['#default_value'] = 'US';

  // Timezone settings.
  // Note: awaiting to definitive timezone - setup Los Angeles
  // http://drupal.org/node/1017020#comment-6897960 - to solve unset default_select
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Los_Angeles';
  unset($form['server_settings']['date_default_timezone']['#attributes']);
}

/**
 * Implements hook_install_tasks().
 */
function uclalib_install_tasks(&$install_state) {
  $tasks['uclalib_install_task_install_theme'] = array(
    'display_name' => st('Install theme'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'uclalib_install_task_install_theme',
  );

  $tasks['uclalib_install_task_enable_page_manager_view'] = array(
    'display_name' => st('Enable Node Template and Term Template'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'uclalib_install_task_enable_page_manager_view'
  );

  $tasks['uclalib_install_task_set_jquery_version'] = array(
    'display_name' => st('Setup jquery version - 1.7'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'uclalib_install_task_set_jquery_version'
  );

  return $tasks;
}

/**
 * Callback funtion to install and configure themes.
 */
function uclalib_install_task_install_theme() {
  // Any themes without keys here will get numeric keys and so will be enabled,
  // but not placed into variables.
  $enable = array(
    'theme_default' => 'uclalib_omega',
    'admin_theme' => 'seven',
  );
  theme_enable($enable);

  foreach ($enable as $var => $theme) {
    if (!is_numeric($var)) {
      variable_set($var, $theme);
    }
  }
}


/**
 * Callback function to enable page manager node view & page manager term view
 */
function uclalib_install_task_enable_page_manager_view(){

  variable_set('page_manager_node_view_disabled', FALSE);
  variable_set('page_manager_term_view_disabled', FALSE);

  $GLOBALS['page_manager_enabling_node_view'] = TRUE;
  $GLOBALS['page_manager_enabling_term_view'] = TRUE;
}

/**
 * Callback function to set jquery version
 */
function uclalib_install_task_set_jquery_version(){
  // javascript library select2 needs at least jquery 1.7 (1.7 do not break navbar, upper version does)
  variable_set('jquery_update_jquery_version', '1.7');
}
