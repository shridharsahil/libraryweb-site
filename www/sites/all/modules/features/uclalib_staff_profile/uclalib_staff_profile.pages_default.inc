<?php
/**
 * @file
 * uclalib_staff_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_staff_profile_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact';
  $page->task = 'page';
  $page->admin_title = 'Contact';
  $page->admin_description = '';
  $page->path = 'contact';
  $page->access = array();
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
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'contact';
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
  );
  $display = new panels_display();
  $display->layout = 'sidebar-left-right';
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
    ),
  );
  $display->cache = array();
  $display->title = 'Contact';
  $display->uuid = 'e889d048-3987-4b82-b122-1b085a5444d2';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5d25bf9a-cdb3-4dc8-9d71-3524376d9067';
    $pane->panel = 'main';
    $pane->type = 'ask_librarian';
    $pane->subtype = 'ask_librarian';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Have a Research Question?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5d25bf9a-cdb3-4dc8-9d71-3524376d9067';
    $display->content['new-5d25bf9a-cdb3-4dc8-9d71-3524376d9067'] = $pane;
    $display->panels['main'][0] = 'new-5d25bf9a-cdb3-4dc8-9d71-3524376d9067';
    $pane = new stdClass();
    $pane->pid = 'new-b7fbd529-34d4-49d5-881a-4cfcc25a7f00';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'bean-other-research-support-options';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b7fbd529-34d4-49d5-881a-4cfcc25a7f00';
    $display->content['new-b7fbd529-34d4-49d5-881a-4cfcc25a7f00'] = $pane;
    $display->panels['main'][1] = 'new-b7fbd529-34d4-49d5-881a-4cfcc25a7f00';
    $pane = new stdClass();
    $pane->pid = 'new-f1de1eb1-f39b-4795-b171-094355054b15';
    $pane->panel = 'main';
    $pane->type = 'staff_search_pane';
    $pane->subtype = 'staff_search_pane';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f1de1eb1-f39b-4795-b171-094355054b15';
    $display->content['new-f1de1eb1-f39b-4795-b171-094355054b15'] = $pane;
    $display->panels['main'][2] = 'new-f1de1eb1-f39b-4795-b171-094355054b15';
    $pane = new stdClass();
    $pane->pid = 'new-3afaaaea-c358-4503-a1b4-c6c821355895';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title with link for locations list box',
      'title' => '',
      'body' => '<div>
	Looking for a specific location?<a href="">Search all Locations</a>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3afaaaea-c358-4503-a1b4-c6c821355895';
    $display->content['new-3afaaaea-c358-4503-a1b4-c6c821355895'] = $pane;
    $display->panels['main'][3] = 'new-3afaaaea-c358-4503-a1b4-c6c821355895';
    $pane = new stdClass();
    $pane->pid = 'new-325ee195-fb19-4d2d-a382-5b7af60885b4';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'todays_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
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
      'override_title_text' => 'Looking for a specific location?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '325ee195-fb19-4d2d-a382-5b7af60885b4';
    $display->content['new-325ee195-fb19-4d2d-a382-5b7af60885b4'] = $pane;
    $display->panels['main'][4] = 'new-325ee195-fb19-4d2d-a382-5b7af60885b4';
    $pane = new stdClass();
    $pane->pid = 'new-c849cbd1-c921-40a9-ab36-2e9797d8bb0c';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'At a Glance',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c849cbd1-c921-40a9-ab36-2e9797d8bb0c';
    $display->content['new-c849cbd1-c921-40a9-ab36-2e9797d8bb0c'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-c849cbd1-c921-40a9-ab36-2e9797d8bb0c';
    $pane = new stdClass();
    $pane->pid = 'new-5ca68471-1f73-44ac-8ffc-5a408b92104f';
    $pane->panel = 'sidebar_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-have-a-technical-question';
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
    $pane->uuid = '5ca68471-1f73-44ac-8ffc-5a408b92104f';
    $display->content['new-5ca68471-1f73-44ac-8ffc-5a408b92104f'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-5ca68471-1f73-44ac-8ffc-5a408b92104f';
    $pane = new stdClass();
    $pane->pid = 'new-7d8b694b-543e-43be-850b-766a94958f38';
    $pane->panel = 'sidebar_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-want-to-give-us-feedback';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7d8b694b-543e-43be-850b-766a94958f38';
    $display->content['new-7d8b694b-543e-43be-850b-766a94958f38'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-7d8b694b-543e-43be-850b-766a94958f38';
    $pane = new stdClass();
    $pane->pid = 'new-cc47781e-b59d-4352-90f0-e0fb3243372c';
    $pane->panel = 'sidebar_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-interested-in-making-a-donation';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cc47781e-b59d-4352-90f0-e0fb3243372c';
    $display->content['new-cc47781e-b59d-4352-90f0-e0fb3243372c'] = $pane;
    $display->panels['sidebar_right'][2] = 'new-cc47781e-b59d-4352-90f0-e0fb3243372c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5d25bf9a-cdb3-4dc8-9d71-3524376d9067';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact'] = $page;

  return $pages;

}
