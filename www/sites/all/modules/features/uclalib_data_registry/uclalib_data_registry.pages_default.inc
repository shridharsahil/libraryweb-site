<?php
/**
 * @file
 * uclalib_data_registry.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_data_registry_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'bdr';
  $page->task = 'page';
  $page->admin_title = 'Browse Data Registry';
  $page->admin_description = '';
  $page->path = 'support/publishing-data-management/data-management-curation-services/data-registry/browse';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_bdr_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'bdr';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_everywhere_site_template' => 'site_template_panel_context',
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
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'bdr';
  $display->uuid = '5eb23d49-231c-423c-9a12-63131804356f';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-34d436d7-a798-4752-9faa-6395a6c22e96';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'update_registry_all';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
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
    $pane->uuid = '34d436d7-a798-4752-9faa-6395a6c22e96';
    $display->content['new-34d436d7-a798-4752-9faa-6395a6c22e96'] = $pane;
    $display->panels['main'][0] = 'new-34d436d7-a798-4752-9faa-6395a6c22e96';
    $pane = new stdClass();
    $pane->pid = 'new-581786c8-c7c3-42a9-8449-de84fc592feb';
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
    $pane->uuid = '581786c8-c7c3-42a9-8449-de84fc592feb';
    $display->content['new-581786c8-c7c3-42a9-8449-de84fc592feb'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-581786c8-c7c3-42a9-8449-de84fc592feb';
    $pane = new stdClass();
    $pane->pid = 'new-4bbca205-cf2c-403a-a20e-76277cd80876';
    $pane->panel = 'top';
    $pane->type = 'uclalib_title';
    $pane->subtype = 'uclalib_title';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
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
    $pane->uuid = '4bbca205-cf2c-403a-a20e-76277cd80876';
    $display->content['new-4bbca205-cf2c-403a-a20e-76277cd80876'] = $pane;
    $display->panels['top'][0] = 'new-4bbca205-cf2c-403a-a20e-76277cd80876';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4bbca205-cf2c-403a-a20e-76277cd80876';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['bdr'] = $page;

  return $pages;

}
