<?php
/**
 * @file
 * uclalib_support_services.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function uclalib_support_services_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:static:support_services';
  $panelizer->title = 'Support & Services';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'static';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array(
    0 => array(
      'identifier' => 'Global',
      'keyword' => 'global',
      'name' => 'token',
      'id' => 1,
    ),
  );
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Menu parent',
      'keyword' => 'menu_parent_node',
      'name' => 'menu_parent_node',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'grid-sidebar-left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'content_top_left' => NULL,
      'content_top_right' => NULL,
      'content_middle_left' => NULL,
      'content_middle_right' => NULL,
      'content_bottom_left' => NULL,
      'content_bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4a2f672d-66da-4b24-a65a-0dcfb30b31d4';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc7c8d49-0e0d-49f0-8b7a-424a62d9870d';
    $pane->panel = 'content_bottom_left';
    $pane->type = 'custom';
    $pane->subtype = 'stub_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc7c8d49-0e0d-49f0-8b7a-424a62d9870d';
    $display->content['new-bc7c8d49-0e0d-49f0-8b7a-424a62d9870d'] = $pane;
    $display->panels['content_bottom_left'][0] = 'new-bc7c8d49-0e0d-49f0-8b7a-424a62d9870d';
    $pane = new stdClass();
    $pane->pid = 'new-49f91e50-b33a-4911-b58f-3677aa8061d0';
    $pane->panel = 'content_middle_left';
    $pane->type = 'custom';
    $pane->subtype = 'stub_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '49f91e50-b33a-4911-b58f-3677aa8061d0';
    $display->content['new-49f91e50-b33a-4911-b58f-3677aa8061d0'] = $pane;
    $display->panels['content_middle_left'][0] = 'new-49f91e50-b33a-4911-b58f-3677aa8061d0';
    $pane = new stdClass();
    $pane->pid = 'new-2515674c-e627-4f8e-8bf4-dac8c916ea30';
    $pane->panel = 'content_bottom_right';
    $pane->type = 'custom';
    $pane->subtype = 'stub_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2515674c-e627-4f8e-8bf4-dac8c916ea30';
    $display->content['new-2515674c-e627-4f8e-8bf4-dac8c916ea30'] = $pane;
    $display->panels['content_bottom_right'][0] = 'new-2515674c-e627-4f8e-8bf4-dac8c916ea30';
    $pane = new stdClass();
    $pane->pid = 'new-10527d82-721d-48dd-898e-fc947be0715f';
    $pane->panel = 'content_top_left';
    $pane->type = 'custom';
    $pane->subtype = 'stub_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '10527d82-721d-48dd-898e-fc947be0715f';
    $display->content['new-10527d82-721d-48dd-898e-fc947be0715f'] = $pane;
    $display->panels['content_top_left'][0] = 'new-10527d82-721d-48dd-898e-fc947be0715f';
    $pane = new stdClass();
    $pane->pid = 'new-002bf4dd-acc2-4018-9b81-a60bef33814e';
    $pane->panel = 'content_top_right';
    $pane->type = 'custom';
    $pane->subtype = 'stub_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '002bf4dd-acc2-4018-9b81-a60bef33814e';
    $display->content['new-002bf4dd-acc2-4018-9b81-a60bef33814e'] = $pane;
    $display->panels['content_top_right'][0] = 'new-002bf4dd-acc2-4018-9b81-a60bef33814e';
    $pane = new stdClass();
    $pane->pid = 'new-42a1af7d-da0c-406d-83f2-6bf14b23f190';
    $pane->panel = 'content_middle_right';
    $pane->type = 'custom';
    $pane->subtype = 'stub_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '42a1af7d-da0c-406d-83f2-6bf14b23f190';
    $display->content['new-42a1af7d-da0c-406d-83f2-6bf14b23f190'] = $pane;
    $display->panels['content_middle_right'][0] = 'new-42a1af7d-da0c-406d-83f2-6bf14b23f190';
    $pane = new stdClass();
    $pane->pid = 'new-acae6abe-9f28-475d-b78a-a42a7ead93f4';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'acae6abe-9f28-475d-b78a-a42a7ead93f4';
    $display->content['new-acae6abe-9f28-475d-b78a-a42a7ead93f4'] = $pane;
    $display->panels['main'][0] = 'new-acae6abe-9f28-475d-b78a-a42a7ead93f4';
    $pane = new stdClass();
    $pane->pid = 'new-8fa26739-ec55-42c8-a10e-54cdc5f56229';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'sub_content';
    $pane->subtype = 'sub_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '8fa26739-ec55-42c8-a10e-54cdc5f56229';
    $display->content['new-8fa26739-ec55-42c8-a10e-54cdc5f56229'] = $pane;
    $display->panels['sidebar_left_golden'][0] = 'new-8fa26739-ec55-42c8-a10e-54cdc5f56229';
    $pane = new stdClass();
    $pane->pid = 'new-4a93447a-739e-45ab-a432-40df48e2b4a6';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'quick_links';
    $pane->subtype = 'quick_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
        1 => 'empty',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4a93447a-739e-45ab-a432-40df48e2b4a6';
    $display->content['new-4a93447a-739e-45ab-a432-40df48e2b4a6'] = $pane;
    $display->panels['sidebar_left_golden'][1] = 'new-4a93447a-739e-45ab-a432-40df48e2b4a6';
    $pane = new stdClass();
    $pane->pid = 'new-6a2dd5e0-dab0-4893-a1a2-79390f6c6bb3';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'custom';
    $pane->subtype = 'questions_highlight';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6a2dd5e0-dab0-4893-a1a2-79390f6c6bb3';
    $display->content['new-6a2dd5e0-dab0-4893-a1a2-79390f6c6bb3'] = $pane;
    $display->panels['sidebar_left_golden'][2] = 'new-6a2dd5e0-dab0-4893-a1a2-79390f6c6bb3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-acae6abe-9f28-475d-b78a-a42a7ead93f4';
  $panelizer->display = $display;
  $export['node:static:support_services'] = $panelizer;

  return $export;
}
