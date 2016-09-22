<?php
/**
 * @file
 * uclalib_static.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function uclalib_static_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:static:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'static';
  $panelizer->no_blocks = FALSE;
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
  $display->layout = 'sidebar-left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'page_header' => NULL,
      'left' => NULL,
      'center_top' => NULL,
      'right' => NULL,
      'center_left' => NULL,
      'center_right' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '36fdf48c-e3d5-48e9-8ec2-42baa0f9e967';
  $display->window_title = '%node:title | %global:site:name';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-57de731a-b4a9-460a-8730-082aed0dcf13';
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
    $pane->uuid = '57de731a-b4a9-460a-8730-082aed0dcf13';
    $display->content['new-57de731a-b4a9-460a-8730-082aed0dcf13'] = $pane;
    $display->panels['main'][0] = 'new-57de731a-b4a9-460a-8730-082aed0dcf13';
    $pane = new stdClass();
    $pane->pid = 'new-e69d18e5-0aea-4e04-8a28-c97eaf36817f';
    $pane->panel = 'main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e69d18e5-0aea-4e04-8a28-c97eaf36817f';
    $display->content['new-e69d18e5-0aea-4e04-8a28-c97eaf36817f'] = $pane;
    $display->panels['main'][1] = 'new-e69d18e5-0aea-4e04-8a28-c97eaf36817f';
    $pane = new stdClass();
    $pane->pid = 'new-7bf9a9c8-2e4d-44a3-bba1-2db5902b2e15';
    $pane->panel = 'sidebar_left';
    $pane->type = 'uclalib_nav';
    $pane->subtype = 'uclalib_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7bf9a9c8-2e4d-44a3-bba1-2db5902b2e15';
    $display->content['new-7bf9a9c8-2e4d-44a3-bba1-2db5902b2e15'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-7bf9a9c8-2e4d-44a3-bba1-2db5902b2e15';
    $pane = new stdClass();
    $pane->pid = 'new-1727e7a0-aac1-4c9c-92c5-d6bfaccf9c90';
    $pane->panel = 'sidebar_left';
    $pane->type = 'quick_links';
    $pane->subtype = 'quick_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
        1 => 'panelizer',
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
    $pane->uuid = '1727e7a0-aac1-4c9c-92c5-d6bfaccf9c90';
    $display->content['new-1727e7a0-aac1-4c9c-92c5-d6bfaccf9c90'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-1727e7a0-aac1-4c9c-92c5-d6bfaccf9c90';
    $pane = new stdClass();
    $pane->pid = 'new-3fead003-1efd-43c4-b725-bffa5e6c151e';
    $pane->panel = 'sidebar_left';
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
    $pane->uuid = '3fead003-1efd-43c4-b725-bffa5e6c151e';
    $display->content['new-3fead003-1efd-43c4-b725-bffa5e6c151e'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-3fead003-1efd-43c4-b725-bffa5e6c151e';
    $pane = new stdClass();
    $pane->pid = 'new-75879fd5-ef84-4b88-8766-11a355d2e598';
    $pane->panel = 'top';
    $pane->type = 'uclalib_title';
    $pane->subtype = 'uclalib_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '75879fd5-ef84-4b88-8766-11a355d2e598';
    $display->content['new-75879fd5-ef84-4b88-8766-11a355d2e598'] = $pane;
    $display->panels['top'][0] = 'new-75879fd5-ef84-4b88-8766-11a355d2e598';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-e69d18e5-0aea-4e04-8a28-c97eaf36817f';
  $panelizer->display = $display;
  $export['node:static:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:static:section_main';
  $panelizer->title = 'Section Main Page';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'static';
  $panelizer->no_blocks = FALSE;
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
  $display->layout = 'sidebar-left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'page_header' => NULL,
      'left' => NULL,
      'center_top' => NULL,
      'right' => NULL,
      'center_left' => NULL,
      'center_right' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '94a58a02-d620-4bca-be3c-74c258964211';
  $display->window_title = '%node:title | %global:site:name';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-aaedd75e-39d8-49c5-ab46-10bc82f5495b';
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
    $pane->uuid = 'aaedd75e-39d8-49c5-ab46-10bc82f5495b';
    $display->content['new-aaedd75e-39d8-49c5-ab46-10bc82f5495b'] = $pane;
    $display->panels['main'][0] = 'new-aaedd75e-39d8-49c5-ab46-10bc82f5495b';
    $pane = new stdClass();
    $pane->pid = 'new-212989c4-d37d-4068-8b80-ba07dcabffb9';
    $pane->panel = 'main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '212989c4-d37d-4068-8b80-ba07dcabffb9';
    $display->content['new-212989c4-d37d-4068-8b80-ba07dcabffb9'] = $pane;
    $display->panels['main'][1] = 'new-212989c4-d37d-4068-8b80-ba07dcabffb9';
    $pane = new stdClass();
    $pane->pid = 'new-9f85a0e2-489d-40ee-a63c-0fd52354a64d';
    $pane->panel = 'sidebar_left';
    $pane->type = 'uclalib_nav';
    $pane->subtype = 'uclalib_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9f85a0e2-489d-40ee-a63c-0fd52354a64d';
    $display->content['new-9f85a0e2-489d-40ee-a63c-0fd52354a64d'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-9f85a0e2-489d-40ee-a63c-0fd52354a64d';
    $pane = new stdClass();
    $pane->pid = 'new-7b43547c-2517-4276-ae61-ee121c3cc64e';
    $pane->panel = 'sidebar_left';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-tier-2',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7b43547c-2517-4276-ae61-ee121c3cc64e';
    $display->content['new-7b43547c-2517-4276-ae61-ee121c3cc64e'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-7b43547c-2517-4276-ae61-ee121c3cc64e';
    $pane = new stdClass();
    $pane->pid = 'new-b472bf85-abdd-4be9-9d47-7ead398311a9';
    $pane->panel = 'sidebar_left';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-tier-3',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b472bf85-abdd-4be9-9d47-7ead398311a9';
    $display->content['new-b472bf85-abdd-4be9-9d47-7ead398311a9'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-b472bf85-abdd-4be9-9d47-7ead398311a9';
    $pane = new stdClass();
    $pane->pid = 'new-204dbfc2-144c-418c-ac1b-2d16b21ab17d';
    $pane->panel = 'top';
    $pane->type = 'uclalib_title';
    $pane->subtype = 'uclalib_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '204dbfc2-144c-418c-ac1b-2d16b21ab17d';
    $display->content['new-204dbfc2-144c-418c-ac1b-2d16b21ab17d'] = $pane;
    $display->panels['top'][0] = 'new-204dbfc2-144c-418c-ac1b-2d16b21ab17d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-212989c4-d37d-4068-8b80-ba07dcabffb9';
  $panelizer->display = $display;
  $export['node:static:section_main'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:static:section_sub';
  $panelizer->title = 'Section Sub Page';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'static';
  $panelizer->no_blocks = FALSE;
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
  $display->layout = 'sidebar-left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'page_header' => NULL,
      'left' => NULL,
      'center_top' => NULL,
      'right' => NULL,
      'center_left' => NULL,
      'center_right' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2b224cf0-35da-40eb-84a8-27ee6ca08d6a';
  $display->window_title = '%node:title | %global:site:name';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cac34ed5-6e10-4381-923b-bc0d59d627a0';
    $pane->panel = 'main';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
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
    $pane->uuid = 'cac34ed5-6e10-4381-923b-bc0d59d627a0';
    $display->content['new-cac34ed5-6e10-4381-923b-bc0d59d627a0'] = $pane;
    $display->panels['main'][0] = 'new-cac34ed5-6e10-4381-923b-bc0d59d627a0';
    $pane = new stdClass();
    $pane->pid = 'new-6c270e50-b9c6-44cb-a5b9-d28fe045efad';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6c270e50-b9c6-44cb-a5b9-d28fe045efad';
    $display->content['new-6c270e50-b9c6-44cb-a5b9-d28fe045efad'] = $pane;
    $display->panels['main'][1] = 'new-6c270e50-b9c6-44cb-a5b9-d28fe045efad';
    $pane = new stdClass();
    $pane->pid = 'new-85e90fbd-65ce-4e3e-9108-caaf0e0664be';
    $pane->panel = 'main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '85e90fbd-65ce-4e3e-9108-caaf0e0664be';
    $display->content['new-85e90fbd-65ce-4e3e-9108-caaf0e0664be'] = $pane;
    $display->panels['main'][2] = 'new-85e90fbd-65ce-4e3e-9108-caaf0e0664be';
    $pane = new stdClass();
    $pane->pid = 'new-b9b9907e-a88e-4a6e-8005-9d9c4fdf314d';
    $pane->panel = 'sidebar_left';
    $pane->type = 'uclalib_nav';
    $pane->subtype = 'uclalib_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b9b9907e-a88e-4a6e-8005-9d9c4fdf314d';
    $display->content['new-b9b9907e-a88e-4a6e-8005-9d9c4fdf314d'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-b9b9907e-a88e-4a6e-8005-9d9c4fdf314d';
    $pane = new stdClass();
    $pane->pid = 'new-66355f74-39fb-4eaa-ba47-4d42f46c21f1';
    $pane->panel = 'top';
    $pane->type = 'uclalib_nav';
    $pane->subtype = 'uclalib_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66355f74-39fb-4eaa-ba47-4d42f46c21f1';
    $display->content['new-66355f74-39fb-4eaa-ba47-4d42f46c21f1'] = $pane;
    $display->panels['top'][0] = 'new-66355f74-39fb-4eaa-ba47-4d42f46c21f1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-85e90fbd-65ce-4e3e-9108-caaf0e0664be';
  $panelizer->display = $display;
  $export['node:static:section_sub'] = $panelizer;

  return $export;
}
