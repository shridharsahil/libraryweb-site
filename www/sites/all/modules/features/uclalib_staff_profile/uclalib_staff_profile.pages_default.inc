<?php
/**
 * @file
 * uclalib_staff_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function uclalib_staff_profile_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__staff_profile';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Staff Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'staff_profile',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'staff_profile' => 'staff_profile',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
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
  $display->title = '';
  $display->uuid = 'd266c3f8-2180-4321-b114-f5f72bb678c4';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e940704-6675-4c34-8afd-3bb893cbff48';
    $pane->panel = 'main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e940704-6675-4c34-8afd-3bb893cbff48';
    $display->content['new-3e940704-6675-4c34-8afd-3bb893cbff48'] = $pane;
    $display->panels['main'][0] = 'new-3e940704-6675-4c34-8afd-3bb893cbff48';
    $pane = new stdClass();
    $pane->pid = 'new-313a0fc7-859e-47cb-abb2-6b51bc2d3b8f';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-at-a-glance---staff-profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '313a0fc7-859e-47cb-abb2-6b51bc2d3b8f';
    $display->content['new-313a0fc7-859e-47cb-abb2-6b51bc2d3b8f'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-313a0fc7-859e-47cb-abb2-6b51bc2d3b8f';
    $pane = new stdClass();
    $pane->pid = 'new-aa5be553-d25e-4d20-a9e4-56258efa4c75';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-contact-quick-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Quick Links',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aa5be553-d25e-4d20-a9e4-56258efa4c75';
    $display->content['new-aa5be553-d25e-4d20-a9e4-56258efa4c75'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-aa5be553-d25e-4d20-a9e4-56258efa4c75';
    $pane = new stdClass();
    $pane->pid = 'new-3380d70e-f9b8-4403-a530-fdc9a3cefac7';
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
    $pane->uuid = '3380d70e-f9b8-4403-a530-fdc9a3cefac7';
    $display->content['new-3380d70e-f9b8-4403-a530-fdc9a3cefac7'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-3380d70e-f9b8-4403-a530-fdc9a3cefac7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__staff_profile'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_staff_profile_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ask_a_librarian';
  $page->task = 'page';
  $page->admin_title = 'Ask a Librarian';
  $page->admin_description = '';
  $page->path = 'contact/ask-librarian';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Ask a Librarian',
    'name' => 'user-menu',
    'weight' => '0',
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
  $handler->name = 'page_ask_a_librarian_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ask_a_librarian';
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
  $display->title = 'Ask a Librarian';
  $display->uuid = 'db3cfade-6cd6-49ef-886b-cdd1fc77c32b';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-85c28d27-8d1b-4470-a879-e5ea93ba2aff';
    $pane->panel = 'below_main_left';
    $pane->type = 'ask_librarian';
    $pane->subtype = 'ask_librarian';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Chat with a Librarian',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85c28d27-8d1b-4470-a879-e5ea93ba2aff';
    $display->content['new-85c28d27-8d1b-4470-a879-e5ea93ba2aff'] = $pane;
    $display->panels['below_main_left'][0] = 'new-85c28d27-8d1b-4470-a879-e5ea93ba2aff';
    $pane = new stdClass();
    $pane->pid = 'new-89ad957a-f7a0-4fc4-9642-42e3fd2bf788';
    $pane->panel = 'below_main_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-other-research-support-options';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Other Research Support Options',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'contact-links',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '89ad957a-f7a0-4fc4-9642-42e3fd2bf788';
    $display->content['new-89ad957a-f7a0-4fc4-9642-42e3fd2bf788'] = $pane;
    $display->panels['below_main_right'][0] = 'new-89ad957a-f7a0-4fc4-9642-42e3fd2bf788';
    $pane = new stdClass();
    $pane->pid = 'new-a4bb8398-5285-41bf-a3a3-c132a497ae21';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-tier-1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4bb8398-5285-41bf-a3a3-c132a497ae21';
    $display->content['new-a4bb8398-5285-41bf-a3a3-c132a497ae21'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-a4bb8398-5285-41bf-a3a3-c132a497ae21';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ask_a_librarian'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact';
  $page->task = 'page';
  $page->admin_title = 'Contact';
  $page->admin_description = '';
  $page->path = 'contact';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Contact',
    'name' => 'user-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
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
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact';
  $display->uuid = 'e889d048-3987-4b82-b122-1b085a5444d2';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9a676a78-42b0-4e1f-8631-e020b2018136';
    $pane->panel = 'secondary';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Looking for a librarian or staff?',
      'title' => '',
      'body' => '<h2>
	Library Staff</h2>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-search-staff-title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9a676a78-42b0-4e1f-8631-e020b2018136';
    $display->content['new-9a676a78-42b0-4e1f-8631-e020b2018136'] = $pane;
    $display->panels['secondary'][0] = 'new-9a676a78-42b0-4e1f-8631-e020b2018136';
    $pane = new stdClass();
    $pane->pid = 'new-f1de1eb1-f39b-4795-b171-094355054b15';
    $pane->panel = 'secondary';
    $pane->type = 'staff_search_pane';
    $pane->subtype = 'staff_search_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Looking for a librarian or staff?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f1de1eb1-f39b-4795-b171-094355054b15';
    $display->content['new-f1de1eb1-f39b-4795-b171-094355054b15'] = $pane;
    $display->panels['secondary'][1] = 'new-f1de1eb1-f39b-4795-b171-094355054b15';
    $pane = new stdClass();
    $pane->pid = 'new-3afaaaea-c358-4503-a1b4-c6c821355895';
    $pane->panel = 'secondary';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Looking for a specific location?',
      'title' => '',
      'body' => '<h2>
	Search by Library Department</h2>
<div class="more-link">
	<a href="/staff">Search all Departments</a>&nbsp;<br>
	</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-contact-location-list',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3afaaaea-c358-4503-a1b4-c6c821355895';
    $display->content['new-3afaaaea-c358-4503-a1b4-c6c821355895'] = $pane;
    $display->panels['secondary'][2] = 'new-3afaaaea-c358-4503-a1b4-c6c821355895';
    $pane = new stdClass();
    $pane->pid = 'new-6a51cbf3-69a2-4a37-bb31-3eaa298088ac';
    $pane->panel = 'secondary';
    $pane->type = 'horizontal_rule';
    $pane->subtype = 'horizontal_rule';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6a51cbf3-69a2-4a37-bb31-3eaa298088ac';
    $display->content['new-6a51cbf3-69a2-4a37-bb31-3eaa298088ac'] = $pane;
    $display->panels['secondary'][3] = 'new-6a51cbf3-69a2-4a37-bb31-3eaa298088ac';
    $pane = new stdClass();
    $pane->pid = 'new-d246aa3d-cbe8-45ed-8dd2-4315bf9f61ee';
    $pane->panel = 'secondary';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Libraries ',
      'title' => '',
      'body' => '<h2>Libraries</h2>
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd246aa3d-cbe8-45ed-8dd2-4315bf9f61ee';
    $display->content['new-d246aa3d-cbe8-45ed-8dd2-4315bf9f61ee'] = $pane;
    $display->panels['secondary'][4] = 'new-d246aa3d-cbe8-45ed-8dd2-4315bf9f61ee';
    $pane = new stdClass();
    $pane->pid = 'new-57262676-1bbd-427f-8e64-a5d6a4ada060';
    $pane->panel = 'secondary';
    $pane->type = 'horizontal_rule';
    $pane->subtype = 'horizontal_rule';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '57262676-1bbd-427f-8e64-a5d6a4ada060';
    $display->content['new-57262676-1bbd-427f-8e64-a5d6a4ada060'] = $pane;
    $display->panels['secondary'][5] = 'new-57262676-1bbd-427f-8e64-a5d6a4ada060';
    $pane = new stdClass();
    $pane->pid = 'new-6476beb7-6861-4a4b-b6c6-703267542f66';
    $pane->panel = 'secondary';
    $pane->type = 'views';
    $pane->subtype = 'contact_hours';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '6476beb7-6861-4a4b-b6c6-703267542f66';
    $display->content['new-6476beb7-6861-4a4b-b6c6-703267542f66'] = $pane;
    $display->panels['secondary'][6] = 'new-6476beb7-6861-4a4b-b6c6-703267542f66';
    $pane = new stdClass();
    $pane->pid = 'new-e4751dc2-8a26-4783-8669-87eb046f3505';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-tier-1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4751dc2-8a26-4783-8669-87eb046f3505';
    $display->content['new-e4751dc2-8a26-4783-8669-87eb046f3505'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-e4751dc2-8a26-4783-8669-87eb046f3505';
    $pane = new stdClass();
    $pane->pid = 'new-48a713bc-3061-4c7b-a021-b95a0df00e94';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-contact-quick-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Quick Links',
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
    $pane->uuid = '48a713bc-3061-4c7b-a021-b95a0df00e94';
    $display->content['new-48a713bc-3061-4c7b-a021-b95a0df00e94'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-48a713bc-3061-4c7b-a021-b95a0df00e94';
    $pane = new stdClass();
    $pane->pid = 'new-1442f07f-3a5c-4887-a1ab-3d0a60006a80';
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
    $pane->uuid = '1442f07f-3a5c-4887-a1ab-3d0a60006a80';
    $display->content['new-1442f07f-3a5c-4887-a1ab-3d0a60006a80'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-1442f07f-3a5c-4887-a1ab-3d0a60006a80';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact'] = $page;

  return $pages;

}
