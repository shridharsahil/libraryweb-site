<?php
/**
 * @file
 * uclalib_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = 'The site\'s homepage.';
  $page->path = 'homepage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'homepage',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'homepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_left_main' => NULL,
      'top_left_bottom_left' => NULL,
      'top_left_bottom_right' => NULL,
      'top_right_sidebar' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
    ),
    'bottom_left' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f17360f4-b63b-4fb3-9811-d091de9826e5';
  $display->window_title = 'Welcome to the UCLA Library';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc43767f-7c38-4a35-b6ab-cdf65357a2d6';
    $pane->panel = 'bottom_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-upcoming-events';
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
    $pane->uuid = 'dc43767f-7c38-4a35-b6ab-cdf65357a2d6';
    $display->content['new-dc43767f-7c38-4a35-b6ab-cdf65357a2d6'] = $pane;
    $display->panels['bottom_left'][0] = 'new-dc43767f-7c38-4a35-b6ab-cdf65357a2d6';
    $pane = new stdClass();
    $pane->pid = 'new-2f6d0bc2-3d84-4d36-a352-062a8cc194aa';
    $pane->panel = 'bottom_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'recent_news_highlight-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_news_categories_tid' => '63',
        'field_news_location_target_id' => '1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2f6d0bc2-3d84-4d36-a352-062a8cc194aa';
    $display->content['new-2f6d0bc2-3d84-4d36-a352-062a8cc194aa'] = $pane;
    $display->panels['bottom_left'][1] = 'new-2f6d0bc2-3d84-4d36-a352-062a8cc194aa';
    $pane = new stdClass();
    $pane->pid = 'new-6c94d951-6cfe-47a7-b021-d603823cd012';
    $pane->panel = 'bottom_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-find-printers-copiers-and-other-';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'border-blue',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c94d951-6cfe-47a7-b021-d603823cd012';
    $display->content['new-6c94d951-6cfe-47a7-b021-d603823cd012'] = $pane;
    $display->panels['bottom_right'][0] = 'new-6c94d951-6cfe-47a7-b021-d603823cd012';
    $pane = new stdClass();
    $pane->pid = 'new-aaf4703d-ef45-4c09-9188-246947c54849';
    $pane->panel = 'top_left_bottom_left';
    $pane->type = 'views';
    $pane->subtype = 'todays_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Today\'s Hours <span class="icon-hours"></span>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'border-blue-inline-title',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aaf4703d-ef45-4c09-9188-246947c54849';
    $display->content['new-aaf4703d-ef45-4c09-9188-246947c54849'] = $pane;
    $display->panels['top_left_bottom_left'][0] = 'new-aaf4703d-ef45-4c09-9188-246947c54849';
    $pane = new stdClass();
    $pane->pid = 'new-04d8e4c9-2b4d-4ff7-a61a-d692dab1def3';
    $pane->panel = 'top_left_bottom_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-get-started-at-the-library';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'border-blue',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04d8e4c9-2b4d-4ff7-a61a-d692dab1def3';
    $display->content['new-04d8e4c9-2b4d-4ff7-a61a-d692dab1def3'] = $pane;
    $display->panels['top_left_bottom_right'][0] = 'new-04d8e4c9-2b4d-4ff7-a61a-d692dab1def3';
    $pane = new stdClass();
    $pane->pid = 'new-50719f8e-efd1-40c9-8b30-048e9c373c27';
    $pane->panel = 'top_left_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Start your research',
      'title' => 'Start your research',
      'body' => '<p>Start your research goes here</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'important-column-heading',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '50719f8e-efd1-40c9-8b30-048e9c373c27';
    $display->content['new-50719f8e-efd1-40c9-8b30-048e9c373c27'] = $pane;
    $display->panels['top_left_main'][0] = 'new-50719f8e-efd1-40c9-8b30-048e9c373c27';
    $pane = new stdClass();
    $pane->pid = 'new-e080e2cb-f504-4491-9f25-10b1dab5273d';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Project Highlights',
      'title' => 'Project Highlights',
      'body' => 'Project Highlights goes here',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'important-column-heading',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e080e2cb-f504-4491-9f25-10b1dab5273d';
    $display->content['new-e080e2cb-f504-4491-9f25-10b1dab5273d'] = $pane;
    $display->panels['top_right_sidebar'][0] = 'new-e080e2cb-f504-4491-9f25-10b1dab5273d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
