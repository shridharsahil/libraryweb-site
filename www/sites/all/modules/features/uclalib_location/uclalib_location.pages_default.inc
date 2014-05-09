<?php
/**
 * @file
 * uclalib_location.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_location_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'location_search';
  $page->task = 'page';
  $page->admin_title = 'Location Search';
  $page->admin_description = '';
  $page->path = 'locations';
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
  $handler->name = 'page_location_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'location_search';
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
  $display->layout = 'sidebar-left';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '72.77374976761479',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '27.2262502323852',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dd38bd21-67b0-45b2-9142-112e9be83abc';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-960f21bf-0df1-4b81-a2f1-11fa2320def9';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'location_search-panel_pane_1';
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
    $pane->uuid = '960f21bf-0df1-4b81-a2f1-11fa2320def9';
    $display->content['new-960f21bf-0df1-4b81-a2f1-11fa2320def9'] = $pane;
    $display->panels['main'][0] = 'new-960f21bf-0df1-4b81-a2f1-11fa2320def9';
    $pane = new stdClass();
    $pane->pid = 'new-69c3b8ef-8da7-4440-9083-0cfffe6b48e9';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'views-7676abd10308a3844c65d210917a6c50';
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
    $pane->uuid = '69c3b8ef-8da7-4440-9083-0cfffe6b48e9';
    $display->content['new-69c3b8ef-8da7-4440-9083-0cfffe6b48e9'] = $pane;
    $display->panels['sidebar_left_golden'][0] = 'new-69c3b8ef-8da7-4440-9083-0cfffe6b48e9';
    $pane = new stdClass();
    $pane->pid = 'new-2d43cb10-cc00-47f9-9953-d7f3d1d2a1a0';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-bTI1w8Nuhrk7oP24NO1OJO4pkObiIq4G';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Equipment',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2d43cb10-cc00-47f9-9953-d7f3d1d2a1a0';
    $display->content['new-2d43cb10-cc00-47f9-9953-d7f3d1d2a1a0'] = $pane;
    $display->panels['sidebar_left_golden'][1] = 'new-2d43cb10-cc00-47f9-9953-d7f3d1d2a1a0';
    $pane = new stdClass();
    $pane->pid = 'new-320c7bc8-848a-4e6f-86e6-97a7ecb19f9d';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-lezaXRxGQehgf5TeDb5KW0dKO65R1G6d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Study areas',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '320c7bc8-848a-4e6f-86e6-97a7ecb19f9d';
    $display->content['new-320c7bc8-848a-4e6f-86e6-97a7ecb19f9d'] = $pane;
    $display->panels['sidebar_left_golden'][2] = 'new-320c7bc8-848a-4e6f-86e6-97a7ecb19f9d';
    $pane = new stdClass();
    $pane->pid = 'new-f3b6a022-1723-41f8-afdf-4eb33ddfbb69';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-1ynNBlTvQZV71h2pYFLkyG41OqkbIABs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Amenities',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f3b6a022-1723-41f8-afdf-4eb33ddfbb69';
    $display->content['new-f3b6a022-1723-41f8-afdf-4eb33ddfbb69'] = $pane;
    $display->panels['sidebar_left_golden'][3] = 'new-f3b6a022-1723-41f8-afdf-4eb33ddfbb69';
    $pane = new stdClass();
    $pane->pid = 'new-635eb81a-5b91-4b64-8fef-67558c847cb6';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ZYdPWBsFGwiQKrzDoGQYdOl1OO6hCz4Z';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Buildings',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '635eb81a-5b91-4b64-8fef-67558c847cb6';
    $display->content['new-635eb81a-5b91-4b64-8fef-67558c847cb6'] = $pane;
    $display->panels['sidebar_left_golden'][4] = 'new-635eb81a-5b91-4b64-8fef-67558c847cb6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-960f21bf-0df1-4b81-a2f1-11fa2320def9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['location_search'] = $page;

  return $pages;

}
