<?php
/**
 * @file
 * uclalib_news_events_landing.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function uclalib_news_events_landing_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'bean:news_and_events_bean:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'bean';
  $panelizer->panelizer_key = 'news_and_events_bean';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'grid-2';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8520f7ab-f608-4914-97e1-6c73be784435';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-50d96cba-586e-4d99-82aa-81a6c01fdb05';
    $pane->panel = 'top_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_events_landing_display-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'title' => '%bean',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '50d96cba-586e-4d99-82aa-81a6c01fdb05';
    $display->content['new-50d96cba-586e-4d99-82aa-81a6c01fdb05'] = $pane;
    $display->panels['top_left'][0] = 'new-50d96cba-586e-4d99-82aa-81a6c01fdb05';
    $pane = new stdClass();
    $pane->pid = 'new-1fde139a-a334-419e-8ef1-4fda642f7d08';
    $pane->panel = 'top_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_events_landing_display-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'title' => '%bean',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1fde139a-a334-419e-8ef1-4fda642f7d08';
    $display->content['new-1fde139a-a334-419e-8ef1-4fda642f7d08'] = $pane;
    $display->panels['top_right'][0] = 'new-1fde139a-a334-419e-8ef1-4fda642f7d08';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['bean:news_and_events_bean:default:default'] = $panelizer;

  return $export;
}
