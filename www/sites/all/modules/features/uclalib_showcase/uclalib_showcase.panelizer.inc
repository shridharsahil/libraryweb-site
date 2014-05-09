<?php
/**
 * @file
 * uclalib_showcase.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function uclalib_showcase_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'bean:showcase:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'bean';
  $panelizer->panelizer_key = 'showcase';
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
  $display->layout = 'grid-3';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ab7be954-55af-4b99-becc-ad8a4a0be2a8';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-af4732ed-720d-4a95-9769-e02b6df84af9';
    $pane->panel = 'first';
    $pane->type = 'entity_field';
    $pane->subtype = 'bean:field_showcase';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'edit' => '',
        'delete' => '',
        'add' => '',
        'description' => 0,
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'af4732ed-720d-4a95-9769-e02b6df84af9';
    $display->content['new-af4732ed-720d-4a95-9769-e02b6df84af9'] = $pane;
    $display->panels['first'][0] = 'new-af4732ed-720d-4a95-9769-e02b6df84af9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-af4732ed-720d-4a95-9769-e02b6df84af9';
  $panelizer->display = $display;
  $export['bean:showcase:default:default'] = $panelizer;

  return $export;
}
