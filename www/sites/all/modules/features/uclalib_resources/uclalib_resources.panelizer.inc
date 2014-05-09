<?php
/**
 * @file
 * uclalib_resources.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function uclalib_resources_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:uclalib_resources:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'uclalib_resources';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
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
  $display->title = '';
  $display->uuid = 'dd768dda-0c4e-4f35-b9fd-f6068a291dd9';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6b5f1bee-47fb-4072-abf6-d1a1df4683a7';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
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
    $pane->uuid = '6b5f1bee-47fb-4072-abf6-d1a1df4683a7';
    $display->content['new-6b5f1bee-47fb-4072-abf6-d1a1df4683a7'] = $pane;
    $display->panels['center'][0] = 'new-6b5f1bee-47fb-4072-abf6-d1a1df4683a7';
    $pane = new stdClass();
    $pane->pid = 'new-e9a00dc5-18c7-4509-bda6-31393e5d2a2e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resource_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e9a00dc5-18c7-4509-bda6-31393e5d2a2e';
    $display->content['new-e9a00dc5-18c7-4509-bda6-31393e5d2a2e'] = $pane;
    $display->panels['center'][1] = 'new-e9a00dc5-18c7-4509-bda6-31393e5d2a2e';
    $pane = new stdClass();
    $pane->pid = 'new-c98da188-1542-4bb8-9bd7-96458b9dc9fb';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '250',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c98da188-1542-4bb8-9bd7-96458b9dc9fb';
    $display->content['new-c98da188-1542-4bb8-9bd7-96458b9dc9fb'] = $pane;
    $display->panels['center'][2] = 'new-c98da188-1542-4bb8-9bd7-96458b9dc9fb';
    $pane = new stdClass();
    $pane->pid = 'new-8cd62d65-93eb-43da-aa98-e64314803aa6';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_icon';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'icon_field_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link_to_content' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8cd62d65-93eb-43da-aa98-e64314803aa6';
    $display->content['new-8cd62d65-93eb-43da-aa98-e64314803aa6'] = $pane;
    $display->panels['center'][3] = 'new-8cd62d65-93eb-43da-aa98-e64314803aa6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-6b5f1bee-47fb-4072-abf6-d1a1df4683a7';
  $panelizer->display = $display;
  $export['node:uclalib_resources:default:teaser'] = $panelizer;

  return $export;
}
