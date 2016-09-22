<?php
/**
 * @file
 * uclalib_using_library.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_using_library_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'using_the_library_page';
  $page->task = 'page';
  $page->admin_title = 'Using the Library Landing Page';
  $page->admin_description = '';
  $page->path = 'use';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Using the Library',
    'weight' => '15',
    'name' => 'main-menu',
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
  $handler->name = 'page_using_the_library_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'using_the_library_page';
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
  $display->layout = 'sidebar-left';
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
      'below_secondary_left' => NULL,
      'secondary' => NULL,
      'below_secondary_right' => NULL,
    ),
    'below_main_left' => array(
      'style' => '-1',
    ),
    'below_secondary_left' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = 'Using the Library';
  $display->uuid = '2a4bf06b-00e6-4e5b-a38f-a439d0c8343b';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd47704a-7b2b-47af-baa7-81ffab6701e9';
    $pane->panel = 'below_main_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-access--privileges-landing-page';
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
    $pane->uuid = 'bd47704a-7b2b-47af-baa7-81ffab6701e9';
    $display->content['new-bd47704a-7b2b-47af-baa7-81ffab6701e9'] = $pane;
    $display->panels['below_main_left'][0] = 'new-bd47704a-7b2b-47af-baa7-81ffab6701e9';
    $pane = new stdClass();
    $pane->pid = 'new-95c85639-ab33-4ad8-8d6f-2e36f921045e';
    $pane->panel = 'below_main_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-computers--computing-services';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '95c85639-ab33-4ad8-8d6f-2e36f921045e';
    $display->content['new-95c85639-ab33-4ad8-8d6f-2e36f921045e'] = $pane;
    $display->panels['below_main_left'][1] = 'new-95c85639-ab33-4ad8-8d6f-2e36f921045e';
    $pane = new stdClass();
    $pane->pid = 'new-f598a504-1f02-41f8-a340-2744a302258c';
    $pane->panel = 'below_main_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-get-started-at-the-library-for-u';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Borrow, Renew, Return',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f598a504-1f02-41f8-a340-2744a302258c';
    $display->content['new-f598a504-1f02-41f8-a340-2744a302258c'] = $pane;
    $display->panels['below_main_right'][0] = 'new-f598a504-1f02-41f8-a340-2744a302258c';
    $pane = new stdClass();
    $pane->pid = 'new-73dfa6f7-3a29-4f93-a37a-177927e73bc8';
    $pane->panel = 'below_secondary_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-using-the-library-upcoming-event';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Upcoming Events <i class="icon icon-todo"></i>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '73dfa6f7-3a29-4f93-a37a-177927e73bc8';
    $display->content['new-73dfa6f7-3a29-4f93-a37a-177927e73bc8'] = $pane;
    $display->panels['below_secondary_left'][0] = 'new-73dfa6f7-3a29-4f93-a37a-177927e73bc8';
    $pane = new stdClass();
    $pane->pid = 'new-e759e341-6ce8-44b2-8f9a-6625d0ffa0ff';
    $pane->panel = 'below_secondary_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'recent_news_highlight-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_news_categories_tid' => 'all',
        'field_news_location_target_id' => 'all',
        'field_staff_subject_areas_tid' => 'all',
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
    $pane->uuid = 'e759e341-6ce8-44b2-8f9a-6625d0ffa0ff';
    $display->content['new-e759e341-6ce8-44b2-8f9a-6625d0ffa0ff'] = $pane;
    $display->panels['below_secondary_left'][1] = 'new-e759e341-6ce8-44b2-8f9a-6625d0ffa0ff';
    $pane = new stdClass();
    $pane->pid = 'new-558390d6-b2aa-4855-a1e0-39cf8d8363b9';
    $pane->panel = 'below_secondary_right';
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '558390d6-b2aa-4855-a1e0-39cf8d8363b9';
    $display->content['new-558390d6-b2aa-4855-a1e0-39cf8d8363b9'] = $pane;
    $display->panels['below_secondary_right'][0] = 'new-558390d6-b2aa-4855-a1e0-39cf8d8363b9';
    $pane = new stdClass();
    $pane->pid = 'new-eb6812a7-5ada-47bd-b1a8-b1d590ce24e3';
    $pane->panel = 'main';
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
      'style' => 'background-gray',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'more-link-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eb6812a7-5ada-47bd-b1a8-b1d590ce24e3';
    $display->content['new-eb6812a7-5ada-47bd-b1a8-b1d590ce24e3'] = $pane;
    $display->panels['main'][0] = 'new-eb6812a7-5ada-47bd-b1a8-b1d590ce24e3';
    $pane = new stdClass();
    $pane->pid = 'new-55664e1c-97b6-4ef4-a2e0-fc8f91092299';
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
    $pane->uuid = '55664e1c-97b6-4ef4-a2e0-fc8f91092299';
    $display->content['new-55664e1c-97b6-4ef4-a2e0-fc8f91092299'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-55664e1c-97b6-4ef4-a2e0-fc8f91092299';
    $pane = new stdClass();
    $pane->pid = 'new-b0d737de-b8a9-4568-a62b-0a94fc20f3f6';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-using-the-library-quick-links-bl';
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
      'css_class' => 'sidebar-tier-2',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b0d737de-b8a9-4568-a62b-0a94fc20f3f6';
    $display->content['new-b0d737de-b8a9-4568-a62b-0a94fc20f3f6'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-b0d737de-b8a9-4568-a62b-0a94fc20f3f6';
    $pane = new stdClass();
    $pane->pid = 'new-e9fdf0f1-0876-4644-8524-ab2263f17204';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'bean-using-the-library-living-library';
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
      'css_class' => 'desk-only',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e9fdf0f1-0876-4644-8524-ab2263f17204';
    $display->content['new-e9fdf0f1-0876-4644-8524-ab2263f17204'] = $pane;
    $display->panels['top'][0] = 'new-e9fdf0f1-0876-4644-8524-ab2263f17204';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['using_the_library_page'] = $page;

  return $pages;

}
