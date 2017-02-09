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
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
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
    $pane->pid = 'new-413bbd59-1d96-4e26-b398-e386d1bd5cad';
    $pane->panel = 'sidebar_left';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-search',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '413bbd59-1d96-4e26-b398-e386d1bd5cad';
    $display->content['new-413bbd59-1d96-4e26-b398-e386d1bd5cad'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-413bbd59-1d96-4e26-b398-e386d1bd5cad';
    $pane = new stdClass();
    $pane->pid = 'new-25a718ea-6e1e-4e4f-b3fd-15c08509c0c9';
    $pane->panel = 'sidebar_left';
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
      'settings' => array(
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '25a718ea-6e1e-4e4f-b3fd-15c08509c0c9';
    $display->content['new-25a718ea-6e1e-4e4f-b3fd-15c08509c0c9'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-25a718ea-6e1e-4e4f-b3fd-15c08509c0c9';
    $pane = new stdClass();
    $pane->pid = 'new-49fd72f2-1a0d-48d3-b87d-7c263f874897';
    $pane->panel = 'sidebar_left';
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
      'settings' => array(
        'pane_collapsed' => 1,
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
    $pane->uuid = '49fd72f2-1a0d-48d3-b87d-7c263f874897';
    $display->content['new-49fd72f2-1a0d-48d3-b87d-7c263f874897'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-49fd72f2-1a0d-48d3-b87d-7c263f874897';
    $pane = new stdClass();
    $pane->pid = 'new-ca5b9381-0933-4e4a-a2a2-b1c0634b06a3';
    $pane->panel = 'sidebar_left';
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
      'settings' => array(
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ca5b9381-0933-4e4a-a2a2-b1c0634b06a3';
    $display->content['new-ca5b9381-0933-4e4a-a2a2-b1c0634b06a3'] = $pane;
    $display->panels['sidebar_left'][3] = 'new-ca5b9381-0933-4e4a-a2a2-b1c0634b06a3';
    $pane = new stdClass();
    $pane->pid = 'new-6b50453e-edc5-484b-9f80-fcf03cb60c02';
    $pane->panel = 'sidebar_left';
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
      'settings' => array(
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6b50453e-edc5-484b-9f80-fcf03cb60c02';
    $display->content['new-6b50453e-edc5-484b-9f80-fcf03cb60c02'] = $pane;
    $display->panels['sidebar_left'][4] = 'new-6b50453e-edc5-484b-9f80-fcf03cb60c02';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-76447b2e-881a-422f-857e-47ec2a08a22b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_search_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_directory';
  $page->task = 'page';
  $page->admin_title = 'Staff Directory';
  $page->admin_description = '';
  $page->path = 'staff';
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
  $handler->name = 'page_staff_directory_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'staff_directory';
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
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b6845ffe-955f-4c42-9a20-5cd2a00c4bd4';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-375bdd1d-729b-4a1c-b2bb-d25fb16bf155';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'views-b954de8eb7d4895146983e3ae88f258e';
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
    $pane->uuid = '375bdd1d-729b-4a1c-b2bb-d25fb16bf155';
    $display->content['new-375bdd1d-729b-4a1c-b2bb-d25fb16bf155'] = $pane;
    $display->panels['main'][0] = 'new-375bdd1d-729b-4a1c-b2bb-d25fb16bf155';
    $pane = new stdClass();
    $pane->pid = 'new-cf471339-4187-4349-83cc-f5c416d0a404';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-9k0PbQn7YbXameeSFmsep1kBuJNmwPBh';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf471339-4187-4349-83cc-f5c416d0a404';
    $display->content['new-cf471339-4187-4349-83cc-f5c416d0a404'] = $pane;
    $display->panels['main'][1] = 'new-cf471339-4187-4349-83cc-f5c416d0a404';
    $pane = new stdClass();
    $pane->pid = 'new-251d59ee-b320-47d9-b8d3-c7d5f7c27388';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'staff_directory-staff_directory_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '251d59ee-b320-47d9-b8d3-c7d5f7c27388';
    $display->content['new-251d59ee-b320-47d9-b8d3-c7d5f7c27388'] = $pane;
    $display->panels['main'][2] = 'new-251d59ee-b320-47d9-b8d3-c7d5f7c27388';
    $pane = new stdClass();
    $pane->pid = 'new-ab677b28-aa68-4f1a-9904-ebdaeb094ca0';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'views-b954de8eb7d4895146983e3ae88f258e';
    $pane->shown = FALSE;
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-search',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ab677b28-aa68-4f1a-9904-ebdaeb094ca0';
    $display->content['new-ab677b28-aa68-4f1a-9904-ebdaeb094ca0'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-ab677b28-aa68-4f1a-9904-ebdaeb094ca0';
    $pane = new stdClass();
    $pane->pid = 'new-7c8429c3-c5d5-4c8f-b303-6eb4028c03d7';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-eHmiAu6inS0J9BZInG6i7Jz491bUt5jF';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c8429c3-c5d5-4c8f-b303-6eb4028c03d7';
    $display->content['new-7c8429c3-c5d5-4c8f-b303-6eb4028c03d7'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-7c8429c3-c5d5-4c8f-b303-6eb4028c03d7';
    $pane = new stdClass();
    $pane->pid = 'new-613a98a0-0005-4f74-abc2-01eb91ecb5ce';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-etN9FMi71niirmBeUcao1phAvnBLjCQW';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Department',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_collapsed' => 1,
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
    $pane->uuid = '613a98a0-0005-4f74-abc2-01eb91ecb5ce';
    $display->content['new-613a98a0-0005-4f74-abc2-01eb91ecb5ce'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-613a98a0-0005-4f74-abc2-01eb91ecb5ce';
    $pane = new stdClass();
    $pane->pid = 'new-71193235-d727-44a3-aafe-464ac8eb7707';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Y1SOi2G1SWX1CoJJcGmI4kExO4iaw9cV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Subject Areas',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '71193235-d727-44a3-aafe-464ac8eb7707';
    $display->content['new-71193235-d727-44a3-aafe-464ac8eb7707'] = $pane;
    $display->panels['sidebar_left'][3] = 'new-71193235-d727-44a3-aafe-464ac8eb7707';
    $pane = new stdClass();
    $pane->pid = 'new-5eaadf49-3251-495b-824e-e0893a0fa2ea';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-K1N5DOgzt82fqucZ01oYceT169vcUjCE';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Area of Expertise',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5eaadf49-3251-495b-824e-e0893a0fa2ea';
    $display->content['new-5eaadf49-3251-495b-824e-e0893a0fa2ea'] = $pane;
    $display->panels['sidebar_left'][4] = 'new-5eaadf49-3251-495b-824e-e0893a0fa2ea';
    $pane = new stdClass();
    $pane->pid = 'new-6f73b118-a04a-4a98-b850-55b8223e2acf';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-0QT9szhBtDxA28U3xxye4AmGG1H0HU6Y';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Departmental Liaison',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_collapsed' => 1,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6f73b118-a04a-4a98-b850-55b8223e2acf';
    $display->content['new-6f73b118-a04a-4a98-b850-55b8223e2acf'] = $pane;
    $display->panels['sidebar_left'][5] = 'new-6f73b118-a04a-4a98-b850-55b8223e2acf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_directory'] = $page;

  return $pages;

}
