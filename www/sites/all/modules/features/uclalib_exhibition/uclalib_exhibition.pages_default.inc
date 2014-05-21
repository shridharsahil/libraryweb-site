<?php
/**
 * @file
 * uclalib_exhibition.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function uclalib_exhibition_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Exhibition',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Global',
        'keyword' => 'global',
        'name' => 'token',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'exhibition' => 'exhibition',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'homepage';
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
      'top_left_main' => NULL,
      'top_left_bottom_left' => NULL,
      'top_left_bottom_right' => NULL,
      'top_right_sidebar' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'UCLA Library Exhibitions';
  $display->uuid = 'a3deb7d5-075d-4c7d-adba-059eef82040e';
  $display->window_title = '%node:title | UCLA Library Exhibitions';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-95c99d67-1713-4e98-a679-52bae9f0123e';
    $pane->panel = 'top_left_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Back to Exhibitions Breadcrumb',
      'title' => '',
      'body' => '<p><a href="/news-events/exhibitions">&lt; Exhibitions</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-exhibition-breadcrumb',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95c99d67-1713-4e98-a679-52bae9f0123e';
    $display->content['new-95c99d67-1713-4e98-a679-52bae9f0123e'] = $pane;
    $display->panels['top_left_main'][0] = 'new-95c99d67-1713-4e98-a679-52bae9f0123e';
    $pane = new stdClass();
    $pane->pid = 'new-f71130fc-afb0-4f1d-a0f4-440898ec6801';
    $pane->panel = 'top_left_main';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'f71130fc-afb0-4f1d-a0f4-440898ec6801';
    $display->content['new-f71130fc-afb0-4f1d-a0f4-440898ec6801'] = $pane;
    $display->panels['top_left_main'][1] = 'new-f71130fc-afb0-4f1d-a0f4-440898ec6801';
    $pane = new stdClass();
    $pane->pid = 'new-65877dc3-10c5-45de-918f-29de7b38991b';
    $pane->panel = 'top_left_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibition_subtitle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '65877dc3-10c5-45de-918f-29de7b38991b';
    $display->content['new-65877dc3-10c5-45de-918f-29de7b38991b'] = $pane;
    $display->panels['top_left_main'][2] = 'new-65877dc3-10c5-45de-918f-29de7b38991b';
    $pane = new stdClass();
    $pane->pid = 'new-5841e3fa-8f31-4f44-86c9-86e3063f272d';
    $pane->panel = 'top_left_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Exhibition Date Range',
      'title' => '',
      'body' => '<p>%node:field_exhibition_start to %node:field_exhibition_end</p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-exhibition-date-range',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5841e3fa-8f31-4f44-86c9-86e3063f272d';
    $display->content['new-5841e3fa-8f31-4f44-86c9-86e3063f272d'] = $pane;
    $display->panels['top_left_main'][3] = 'new-5841e3fa-8f31-4f44-86c9-86e3063f272d';
    $pane = new stdClass();
    $pane->pid = 'new-22a3203e-e593-43b1-9ab6-f2bf5bcadab3';
    $pane->panel = 'top_left_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibition_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'default',
        'links' => 1,
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '22a3203e-e593-43b1-9ab6-f2bf5bcadab3';
    $display->content['new-22a3203e-e593-43b1-9ab6-f2bf5bcadab3'] = $pane;
    $display->panels['top_left_main'][4] = 'new-22a3203e-e593-43b1-9ab6-f2bf5bcadab3';
    $pane = new stdClass();
    $pane->pid = 'new-a851ccab-7a63-4268-9f1a-d04e722b3f6b';
    $pane->panel = 'top_left_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibition_image_thumbnail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'thumbnail_large',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a851ccab-7a63-4268-9f1a-d04e722b3f6b';
    $display->content['new-a851ccab-7a63-4268-9f1a-d04e722b3f6b'] = $pane;
    $display->panels['top_left_main'][5] = 'new-a851ccab-7a63-4268-9f1a-d04e722b3f6b';
    $pane = new stdClass();
    $pane->pid = 'new-6d93ebb6-a06e-4588-8b86-e395bd763dc5';
    $pane->panel = 'top_left_main';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '6d93ebb6-a06e-4588-8b86-e395bd763dc5';
    $display->content['new-6d93ebb6-a06e-4588-8b86-e395bd763dc5'] = $pane;
    $display->panels['top_left_main'][6] = 'new-6d93ebb6-a06e-4588-8b86-e395bd763dc5';
    $pane = new stdClass();
    $pane->pid = 'new-205d2be7-faf1-470f-9216-297ebb956f26';
    $pane->panel = 'top_left_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '205d2be7-faf1-470f-9216-297ebb956f26';
    $display->content['new-205d2be7-faf1-470f-9216-297ebb956f26'] = $pane;
    $display->panels['top_left_main'][7] = 'new-205d2be7-faf1-470f-9216-297ebb956f26';
    $pane = new stdClass();
    $pane->pid = 'new-1e30ec1b-9c91-4edc-bc6f-10858150d48e';
    $pane->panel = 'top_left_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibition_related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Related Pages',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '1e30ec1b-9c91-4edc-bc6f-10858150d48e';
    $display->content['new-1e30ec1b-9c91-4edc-bc6f-10858150d48e'] = $pane;
    $display->panels['top_left_main'][8] = 'new-1e30ec1b-9c91-4edc-bc6f-10858150d48e';
    $pane = new stdClass();
    $pane->pid = 'new-7ca74cc1-ce48-4ae7-a16a-ae13f5486d2b';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibition_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-links',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7ca74cc1-ce48-4ae7-a16a-ae13f5486d2b';
    $display->content['new-7ca74cc1-ce48-4ae7-a16a-ae13f5486d2b'] = $pane;
    $display->panels['top_right_sidebar'][0] = 'new-7ca74cc1-ce48-4ae7-a16a-ae13f5486d2b';
    $pane = new stdClass();
    $pane->pid = 'new-2e0b34a2-f489-4a5e-ab1f-4fe2013cdc08';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibition_series';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Series',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-links',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2e0b34a2-f489-4a5e-ab1f-4fe2013cdc08';
    $display->content['new-2e0b34a2-f489-4a5e-ab1f-4fe2013cdc08'] = $pane;
    $display->panels['top_right_sidebar'][1] = 'new-2e0b34a2-f489-4a5e-ab1f-4fe2013cdc08';
    $pane = new stdClass();
    $pane->pid = 'new-04e42d17-d152-4a5f-a2a7-bd971dcc7c2c';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'views';
    $pane->subtype = 'other_exhibitions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-links',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '04e42d17-d152-4a5f-a2a7-bd971dcc7c2c';
    $display->content['new-04e42d17-d152-4a5f-a2a7-bd971dcc7c2c'] = $pane;
    $display->panels['top_right_sidebar'][2] = 'new-04e42d17-d152-4a5f-a2a7-bd971dcc7c2c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_exhibition_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'exhibitions_main_page';
  $page->task = 'page';
  $page->admin_title = 'Exhibitions Main Page';
  $page->admin_description = 'Events Agenda landing page';
  $page->path = 'news-events/exhibitions';
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
  $handler->name = 'page_exhibitions_main_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'exhibitions_main_page';
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
      'sidebar_right' => NULL,
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '52bc2351-3a8b-43da-8241-295472c5fa2d';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a12c002e-8096-4bf4-a04d-18b37b81b680';
    $pane->panel = 'main';
    $pane->type = 'daterangepicker';
    $pane->subtype = 'daterangepicker';
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
    $pane->uuid = 'a12c002e-8096-4bf4-a04d-18b37b81b680';
    $display->content['new-a12c002e-8096-4bf4-a04d-18b37b81b680'] = $pane;
    $display->panels['main'][0] = 'new-a12c002e-8096-4bf4-a04d-18b37b81b680';
    $pane = new stdClass();
    $pane->pid = 'new-09990d34-d987-454c-ae33-a6185b7448f3';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibitions_main_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-daterangepicker-results',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '09990d34-d987-454c-ae33-a6185b7448f3';
    $display->content['new-09990d34-d987-454c-ae33-a6185b7448f3'] = $pane;
    $display->panels['main'][1] = 'new-09990d34-d987-454c-ae33-a6185b7448f3';
    $pane = new stdClass();
    $pane->pid = 'new-9f7b5a6c-2243-4569-aa1e-f1b41887b841';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-kMqWyKrKuWzTo16rRLs1Z4nGrEbOYzCa';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9f7b5a6c-2243-4569-aa1e-f1b41887b841';
    $display->content['new-9f7b5a6c-2243-4569-aa1e-f1b41887b841'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-9f7b5a6c-2243-4569-aa1e-f1b41887b841';
    $pane = new stdClass();
    $pane->pid = 'new-4df032b6-7ea6-4c7a-85db-91d2077f82bf';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-1q9bDWYoegoCEqbaLauoGm0YBkHSpKKf';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4df032b6-7ea6-4c7a-85db-91d2077f82bf';
    $display->content['new-4df032b6-7ea6-4c7a-85db-91d2077f82bf'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-4df032b6-7ea6-4c7a-85db-91d2077f82bf';
    $pane = new stdClass();
    $pane->pid = 'new-2532ccef-31b2-49dd-a621-8ca35b10dd3c';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ly1J8SSCdGwj0cMhWyVBGEdkbbXCocxH';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2532ccef-31b2-49dd-a621-8ca35b10dd3c';
    $display->content['new-2532ccef-31b2-49dd-a621-8ca35b10dd3c'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-2532ccef-31b2-49dd-a621-8ca35b10dd3c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitions_main_page'] = $page;

  return $pages;

}
