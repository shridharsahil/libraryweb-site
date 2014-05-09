<?php
/**
 * @file
 * uclalib_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_search_page';
  $page->task = 'page';
  $page->admin_title = 'News Search Page';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_search_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'sidebar-left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'UCLA Library News';
  $display->uuid = '3ccf3608-6195-4c27-b3aa-eb6df7877716';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-76447b2e-881a-422f-857e-47ec2a08a22b';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_search-news_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => '',
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
    $pane->uuid = '76447b2e-881a-422f-857e-47ec2a08a22b';
    $display->content['new-76447b2e-881a-422f-857e-47ec2a08a22b'] = $pane;
    $display->panels['main'][0] = 'new-76447b2e-881a-422f-857e-47ec2a08a22b';
    $pane = new stdClass();
    $pane->pid = 'new-39a20337-389f-4c42-9c9c-667ca68bb887';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-news_search-news_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
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
    $pane->uuid = '39a20337-389f-4c42-9c9c-667ca68bb887';
    $display->content['new-39a20337-389f-4c42-9c9c-667ca68bb887'] = $pane;
    $display->panels['sidebar_left_golden'][0] = 'new-39a20337-389f-4c42-9c9c-667ca68bb887';
    $pane = new stdClass();
    $pane->pid = 'new-c58e3de5-ed00-40a9-9f36-357e9f60b8aa';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-1qpndRwdfnD7bkZtKnnGtokz0uDgzZul';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c58e3de5-ed00-40a9-9f36-357e9f60b8aa';
    $display->content['new-c58e3de5-ed00-40a9-9f36-357e9f60b8aa'] = $pane;
    $display->panels['sidebar_left_golden'][1] = 'new-c58e3de5-ed00-40a9-9f36-357e9f60b8aa';
    $pane = new stdClass();
    $pane->pid = 'new-ff5c4a2b-b6f3-4eb2-ad63-3954e5c2cbc5';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Dc1qU0dwxgIBMqJw2hsEBHKKXSdiRmmV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ff5c4a2b-b6f3-4eb2-ad63-3954e5c2cbc5';
    $display->content['new-ff5c4a2b-b6f3-4eb2-ad63-3954e5c2cbc5'] = $pane;
    $display->panels['sidebar_left_golden'][2] = 'new-ff5c4a2b-b6f3-4eb2-ad63-3954e5c2cbc5';
    $pane = new stdClass();
    $pane->pid = 'new-d7a79f1c-7378-4f25-ae57-b9c198f8be07';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-84S0KVjaMOzKINqvN9dhV2N1rBClgyEu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Series',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd7a79f1c-7378-4f25-ae57-b9c198f8be07';
    $display->content['new-d7a79f1c-7378-4f25-ae57-b9c198f8be07'] = $pane;
    $display->panels['sidebar_left_golden'][3] = 'new-d7a79f1c-7378-4f25-ae57-b9c198f8be07';
    $pane = new stdClass();
    $pane->pid = 'new-eaf57347-ec8a-4a2b-86f3-bbc7ef53c186';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-PzdHd4VPqXA3qjWQCFasjwlBBCzmEbe0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Audience',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'eaf57347-ec8a-4a2b-86f3-bbc7ef53c186';
    $display->content['new-eaf57347-ec8a-4a2b-86f3-bbc7ef53c186'] = $pane;
    $display->panels['sidebar_left_golden'][4] = 'new-eaf57347-ec8a-4a2b-86f3-bbc7ef53c186';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-76447b2e-881a-422f-857e-47ec2a08a22b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_search_page'] = $page;

  return $pages;

}
