<?php
/**
 * @file
 * uclalib_bookplates.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function uclalib_bookplates_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_51f84529-a3a2-4b4e-b6d8-31e6044daae0';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Bookplates',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'bookplates' => 'bookplates',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
  $display->title = 'Collection Endowments';
  $display->uuid = '2b8a5ef6-b358-452c-a9ce-94c35f66f55f';
  $display->window_title = 'UCLA Library Bookplates | %node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e545e4a1-efc6-4acc-a2d2-4186256789db';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'bookplates_single_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
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
    $pane->uuid = 'e545e4a1-efc6-4acc-a2d2-4186256789db';
    $display->content['new-e545e4a1-efc6-4acc-a2d2-4186256789db'] = $pane;
    $display->panels['main'][0] = 'new-e545e4a1-efc6-4acc-a2d2-4186256789db';
    $pane = new stdClass();
    $pane->pid = 'new-724bbc15-6ae2-4aac-86be-b4ea82ffc408';
    $pane->panel = 'sidebar_left';
    $pane->type = 'uclalib_nav';
    $pane->subtype = 'uclalib_nav';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '724bbc15-6ae2-4aac-86be-b4ea82ffc408';
    $display->content['new-724bbc15-6ae2-4aac-86be-b4ea82ffc408'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-724bbc15-6ae2-4aac-86be-b4ea82ffc408';
    $pane = new stdClass();
    $pane->pid = 'new-2e3ef122-2a25-4e4f-8546-1aecdc1bfa7d';
    $pane->panel = 'top';
    $pane->type = 'uclalib_title';
    $pane->subtype = 'uclalib_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'uclalib-nav-breadcrumb',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2e3ef122-2a25-4e4f-8546-1aecdc1bfa7d';
    $display->content['new-2e3ef122-2a25-4e4f-8546-1aecdc1bfa7d'] = $pane;
    $display->panels['top'][0] = 'new-2e3ef122-2a25-4e4f-8546-1aecdc1bfa7d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_51f84529-a3a2-4b4e-b6d8-31e6044daae0'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_106d1ac8-d0a0-46a9-a879-67d3e65c2b65';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Bookplates Subject Area',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'collection_endowment_initiative' => 'collection_endowment_initiative',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'sidebar-left-golden';
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
  $display->title = 'Collection Endowments';
  $display->uuid = '8f7910d2-1e76-4f28-a45d-4619c4a47230';
  $display->window_title = 'UCLA Library Bookplates | %node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-df7d44a8-a50e-4b4d-b90d-60f1455f85c0';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'bookplates_landing_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'context' => array(
        0 => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'df7d44a8-a50e-4b4d-b90d-60f1455f85c0';
    $display->content['new-df7d44a8-a50e-4b4d-b90d-60f1455f85c0'] = $pane;
    $display->panels['main'][0] = 'new-df7d44a8-a50e-4b4d-b90d-60f1455f85c0';
    $pane = new stdClass();
    $pane->pid = 'new-dab89867-e312-47cb-bc60-30803c0afc09';
    $pane->panel = 'sidebar_left';
    $pane->type = 'uclalib_nav';
    $pane->subtype = 'uclalib_nav';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dab89867-e312-47cb-bc60-30803c0afc09';
    $display->content['new-dab89867-e312-47cb-bc60-30803c0afc09'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-dab89867-e312-47cb-bc60-30803c0afc09';
    $pane = new stdClass();
    $pane->pid = 'new-0da855ce-d6c6-4e5c-8310-bfc0df9bcd79';
    $pane->panel = 'top';
    $pane->type = 'uclalib_title';
    $pane->subtype = 'uclalib_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '%title',
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
    $pane->uuid = '0da855ce-d6c6-4e5c-8310-bfc0df9bcd79';
    $display->content['new-0da855ce-d6c6-4e5c-8310-bfc0df9bcd79'] = $pane;
    $display->panels['top'][0] = 'new-0da855ce-d6c6-4e5c-8310-bfc0df9bcd79';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-dab89867-e312-47cb-bc60-30803c0afc09';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_106d1ac8-d0a0-46a9-a879-67d3e65c2b65'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_bookplates_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'bookplates';
  $page->task = 'page';
  $page->admin_title = 'Bookplates';
  $page->admin_description = '';
  $page->path = 'bookplates';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
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
  $handler->name = 'page_bookplates__panel';
  $handler->task = 'page';
  $handler->subtask = 'bookplates';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Bookplates',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'sidebar-left-golden';
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
  $display->title = 'Collection Endowments';
  $display->uuid = '5730a645-80d8-4490-9906-bd90d72db03d';
  $display->window_title = 'Welcome to UCLA Library Bookplates';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-58b6a450-81d4-4bd3-a63d-0a308f856142';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'bookplates',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 'items_per_page',
          ),
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 'search_api_views_fulltext',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'About Bookplates',
      'title' => '',
      'body' => '<p class="p1"><span style="font-size:16px;"><span class="s1">Endowments enable the UCLA Library to drive research and spark innovation on campus and beyond. We are grateful to the visionary donors who have invested in their passion, provided permanent support for ongoing research and created a living legacy that spans generations.</span></span></p>
<p><span style="font-size:16px;">If you have questions or would like to establish an endowment, please contact <a href="http://library.ucla.edu/about/giving-library/contact-us" style="font-size: 16px;">Library Development</a>.</span></p>
<hr>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '58b6a450-81d4-4bd3-a63d-0a308f856142';
    $display->content['new-58b6a450-81d4-4bd3-a63d-0a308f856142'] = $pane;
    $display->panels['main'][0] = 'new-58b6a450-81d4-4bd3-a63d-0a308f856142';
    $pane = new stdClass();
    $pane->pid = 'new-b00e79e1-4a09-4995-b90a-222d155bbb59';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'bookplates_landing_page';
    $pane->shown = TRUE;
    $pane->access = array(
      'logic' => 'or',
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 'search_api_views_fulltext',
          ),
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
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
      'url' => 'bookplates',
      'display' => 'bookplates_landing_page',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b00e79e1-4a09-4995-b90a-222d155bbb59';
    $display->content['new-b00e79e1-4a09-4995-b90a-222d155bbb59'] = $pane;
    $display->panels['main'][1] = 'new-b00e79e1-4a09-4995-b90a-222d155bbb59';
    $pane = new stdClass();
    $pane->pid = 'new-9003af41-ee69-4006-b051-f5b60f6f557b';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bookplates_full_content-bookplates_pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 'search_api_views_fulltext',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9003af41-ee69-4006-b051-f5b60f6f557b';
    $display->content['new-9003af41-ee69-4006-b051-f5b60f6f557b'] = $pane;
    $display->panels['main'][2] = 'new-9003af41-ee69-4006-b051-f5b60f6f557b';
    $pane = new stdClass();
    $pane->pid = 'new-cb453f78-d7b0-4208-a942-3be84ec96b8a';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'views-cc66f41f56902ca4d45831e1c0e85613';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-search',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cb453f78-d7b0-4208-a942-3be84ec96b8a';
    $display->content['new-cb453f78-d7b0-4208-a942-3be84ec96b8a'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-cb453f78-d7b0-4208-a942-3be84ec96b8a';
    $pane = new stdClass();
    $pane->pid = 'new-fefa0c9d-bb58-40cb-a767-d1d7663ec2cc';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-list-of-donors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
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
    $pane->uuid = 'fefa0c9d-bb58-40cb-a767-d1d7663ec2cc';
    $display->content['new-fefa0c9d-bb58-40cb-a767-d1d7663ec2cc'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-fefa0c9d-bb58-40cb-a767-d1d7663ec2cc';
    $pane = new stdClass();
    $pane->pid = 'new-3c2cb5d8-ecbf-467b-962e-d13e769749ab';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'views-325a6df0a2b3efc28dd7107fef13cd64';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => 'Subject Areas',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_collapsed' => 0,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3c2cb5d8-ecbf-467b-962e-d13e769749ab';
    $display->content['new-3c2cb5d8-ecbf-467b-962e-d13e769749ab'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-3c2cb5d8-ecbf-467b-962e-d13e769749ab';
    $pane = new stdClass();
    $pane->pid = 'new-5287f64b-5199-4460-ba35-59d923522122';
    $pane->panel = 'top';
    $pane->type = 'uclalib_title';
    $pane->subtype = 'uclalib_title';
    $pane->shown = FALSE;
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
    $pane->uuid = '5287f64b-5199-4460-ba35-59d923522122';
    $display->content['new-5287f64b-5199-4460-ba35-59d923522122'] = $pane;
    $display->panels['top'][0] = 'new-5287f64b-5199-4460-ba35-59d923522122';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['bookplates'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'bookplates_donors_a_z';
  $page->task = 'page';
  $page->admin_title = 'Bookplates Donors A-Z';
  $page->admin_description = '';
  $page->path = 'bookplates/donor-directory';
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
  $handler->name = 'page_bookplates_donors_a_z__panel';
  $handler->task = 'page';
  $handler->subtask = 'bookplates_donors_a_z';
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
    'name' => 'panel',
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
  $display->uuid = 'b7ff1956-5887-400b-a13c-84383a1bc08b';
  $display->window_title = 'UCLA Library Bookplates | List of Donors';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-563dbefd-be97-4867-8a6b-a514f75a199c';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'bookplates_donor_directory';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '100',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%N',
      'url' => 'bookplates/donor-directory',
      'display' => 'page',
      'override_title' => 1,
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
    $pane->uuid = '563dbefd-be97-4867-8a6b-a514f75a199c';
    $display->content['new-563dbefd-be97-4867-8a6b-a514f75a199c'] = $pane;
    $display->panels['main'][0] = 'new-563dbefd-be97-4867-8a6b-a514f75a199c';
    $pane = new stdClass();
    $pane->pid = 'new-0d7d7500-6740-4d24-a5d5-ff5167f696c0';
    $pane->panel = 'sidebar_left';
    $pane->type = 'uclalib_nav';
    $pane->subtype = 'uclalib_nav';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d7d7500-6740-4d24-a5d5-ff5167f696c0';
    $display->content['new-0d7d7500-6740-4d24-a5d5-ff5167f696c0'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-0d7d7500-6740-4d24-a5d5-ff5167f696c0';
    $pane = new stdClass();
    $pane->pid = 'new-ee1d4685-0a6c-4b3c-acff-08816f81b7e2';
    $pane->panel = 'top';
    $pane->type = 'uclalib_title';
    $pane->subtype = 'uclalib_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = 'ee1d4685-0a6c-4b3c-acff-08816f81b7e2';
    $display->content['new-ee1d4685-0a6c-4b3c-acff-08816f81b7e2'] = $pane;
    $display->panels['top'][0] = 'new-ee1d4685-0a6c-4b3c-acff-08816f81b7e2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-ee1d4685-0a6c-4b3c-acff-08816f81b7e2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['bookplates_donors_a_z'] = $page;

  return $pages;

}
