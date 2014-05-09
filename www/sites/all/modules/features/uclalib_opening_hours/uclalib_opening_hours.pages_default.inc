<?php
/**
 * @file
 * uclalib_opening_hours.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_opening_hours_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'library_hours';
  $page->task = 'page';
  $page->admin_title = 'Library Hours';
  $page->admin_description = '';
  $page->path = 'hours';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Hours',
    'name' => 'user-menu',
    'weight' => '-1',
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
  $handler->name = 'page_library_hours_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'library_hours';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Library Hours';
  $display->uuid = '19ee4022-1a6d-428f-b400-9f81eb7a784c';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-03801bad-ffff-413e-a99c-6a222769eec9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'library_hours-panel_pane_1';
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
    $pane->uuid = '03801bad-ffff-413e-a99c-6a222769eec9';
    $display->content['new-03801bad-ffff-413e-a99c-6a222769eec9'] = $pane;
    $display->panels['middle'][0] = 'new-03801bad-ffff-413e-a99c-6a222769eec9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-03801bad-ffff-413e-a99c-6a222769eec9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['library_hours'] = $page;

  return $pages;

}
