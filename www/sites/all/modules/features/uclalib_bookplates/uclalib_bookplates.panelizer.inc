<?php
/**
 * @file
 * uclalib_bookplates.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function uclalib_bookplates_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:bookplates:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'bookplates';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collection Endowment Initiative';
  $display->uuid = '0a430934-e48c-4f65-9d78-992e8e2b96d4';
  $display->window_title = '%node:title | %global:site:name';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:bookplates:default'] = $panelizer;

  return $export;
}
