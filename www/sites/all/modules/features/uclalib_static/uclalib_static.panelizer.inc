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
  $panelizer->contexts = array();
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '36fdf48c-e3d5-48e9-8ec2-42baa0f9e967';
  $display->window_title = '';
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
    $pane->pid = 'new-4de7fecc-5052-4027-86b8-f853977d85e2';
    $pane->panel = 'top';
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
    $pane->uuid = '4de7fecc-5052-4027-86b8-f853977d85e2';
    $display->content['new-4de7fecc-5052-4027-86b8-f853977d85e2'] = $pane;
    $display->panels['top'][0] = 'new-4de7fecc-5052-4027-86b8-f853977d85e2';
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
    $pane->pid = 'new-e8c9b83a-10ea-4b25-a9a8-55dda8aa1fc8';
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
    $pane->uuid = 'e8c9b83a-10ea-4b25-a9a8-55dda8aa1fc8';
    $display->content['new-e8c9b83a-10ea-4b25-a9a8-55dda8aa1fc8'] = $pane;
    $display->panels['sidebar_left_golden'][0] = 'new-e8c9b83a-10ea-4b25-a9a8-55dda8aa1fc8';
    $pane = new stdClass();
    $pane->pid = 'new-42e32055-fd48-4e18-96a5-77f3be857b34';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'quick_links';
    $pane->subtype = 'quick_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
        1 => 'relationship_menu_parent_node_1',
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
    $pane->uuid = '42e32055-fd48-4e18-96a5-77f3be857b34';
    $display->content['new-42e32055-fd48-4e18-96a5-77f3be857b34'] = $pane;
    $display->panels['sidebar_left_golden'][1] = 'new-42e32055-fd48-4e18-96a5-77f3be857b34';
    $pane = new stdClass();
    $pane->pid = 'new-26c73e33-f09f-44a0-aebc-462ce2b17e08';
    $pane->panel = 'top';
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
    $pane->uuid = '26c73e33-f09f-44a0-aebc-462ce2b17e08';
    $display->content['new-26c73e33-f09f-44a0-aebc-462ce2b17e08'] = $pane;
    $display->panels['top'][0] = 'new-26c73e33-f09f-44a0-aebc-462ce2b17e08';
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
    $pane->pid = 'new-914d158d-b8d4-4662-a39d-5499ba0a43f0';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'sibling_content';
    $pane->subtype = 'sibling_content';
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
    $pane->uuid = '914d158d-b8d4-4662-a39d-5499ba0a43f0';
    $display->content['new-914d158d-b8d4-4662-a39d-5499ba0a43f0'] = $pane;
    $display->panels['sidebar_left_golden'][0] = 'new-914d158d-b8d4-4662-a39d-5499ba0a43f0';
    $pane = new stdClass();
    $pane->pid = 'new-a3b20d8c-dc0b-4c9a-a061-4a18b1ee2e9a';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'quick_links';
    $pane->subtype = 'quick_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
        1 => 'relationship_menu_parent_node_1',
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
    $pane->uuid = 'a3b20d8c-dc0b-4c9a-a061-4a18b1ee2e9a';
    $display->content['new-a3b20d8c-dc0b-4c9a-a061-4a18b1ee2e9a'] = $pane;
    $display->panels['sidebar_left_golden'][1] = 'new-a3b20d8c-dc0b-4c9a-a061-4a18b1ee2e9a';
    $pane = new stdClass();
    $pane->pid = 'new-c65ce2ca-1120-49aa-bf0b-aa4e652f00b3';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'relationship_menu_parent_node_1',
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
    $pane->uuid = 'c65ce2ca-1120-49aa-bf0b-aa4e652f00b3';
    $display->content['new-c65ce2ca-1120-49aa-bf0b-aa4e652f00b3'] = $pane;
    $display->panels['top'][0] = 'new-c65ce2ca-1120-49aa-bf0b-aa4e652f00b3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-85e90fbd-65ce-4e3e-9108-caaf0e0664be';
  $panelizer->display = $display;
  $export['node:static:section_sub'] = $panelizer;

  return $export;
}
