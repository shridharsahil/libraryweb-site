<?php
/**
 * @file
 * site_alert.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function site_alert_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
$mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
$mini->api_version = 1;
$mini->name = 'alert_pane';
$mini->category = 'Header';
$mini->admin_title = 'Alert Pane';
$mini->admin_description = '';
$mini->requiredcontexts = array();
$mini->contexts = array();
$mini->relationships = array();
$display = new panels_display();
$display->layout = 'onecol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'top' => NULL,
    'left' => NULL,
    'right' => NULL,
    'bottom' => NULL,
    'middle' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1';
  $pane->panel = 'middle';
  $pane->type = 'page_site_alert';
  $pane->subtype = 'page_site_alert';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array();
  $pane->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-1'] = $pane;
  $display->panels['middle'][0] = 'new-1';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$mini->display = $display;
  $export['alert_pane'] = $mini;

  return $export;
}
