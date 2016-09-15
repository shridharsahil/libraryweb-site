<?php
/**
 * @file
 * uclalib_news_events_landing.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_news_events_landing_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_and_events';
  $page->task = 'page';
  $page->admin_title = 'News and Events';
  $page->admin_description = '';
  $page->path = 'news-events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News and Events',
    'name' => 'main-menu',
    'weight' => '5',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
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
  $handler->name = 'page_news_and_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_and_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-hide-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'sidebar_right' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'left' => NULL,
      'right' => NULL,
      'secondary' => NULL,
      'below_left' => NULL,
      'below_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News & Events';
  $display->uuid = '81ff575b-b17b-4871-a3ed-f813b4574f00';
  $display->window_title = 'UCLA Library Upcoming News & Events';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-88df0f09-5455-4606-ade2-02e0a53850fd';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'bean-news--events-landing-page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '88df0f09-5455-4606-ade2-02e0a53850fd';
    $display->content['new-88df0f09-5455-4606-ade2-02e0a53850fd'] = $pane;
    $display->panels['main'][0] = 'new-88df0f09-5455-4606-ade2-02e0a53850fd';
    $pane = new stdClass();
    $pane->pid = 'new-182fca69-d75c-482e-8da8-f01ad1ff1c72';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'bean-news--events-showcase';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'lap-desk-only',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '182fca69-d75c-482e-8da8-f01ad1ff1c72';
    $display->content['new-182fca69-d75c-482e-8da8-f01ad1ff1c72'] = $pane;
    $display->panels['top'][0] = 'new-182fca69-d75c-482e-8da8-f01ad1ff1c72';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_and_events'] = $page;

  return $pages;

}
