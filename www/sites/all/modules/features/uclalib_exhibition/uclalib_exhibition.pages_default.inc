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
    'title' => 'Exhibition node view variant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
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
  $display->title = '';
  $display->uuid = 'a3deb7d5-075d-4c7d-adba-059eef82040e';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16920224-2b5e-4665-bf45-af2b5018e6a0';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibition_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16920224-2b5e-4665-bf45-af2b5018e6a0';
    $display->content['new-16920224-2b5e-4665-bf45-af2b5018e6a0'] = $pane;
    $display->panels['main'][0] = 'new-16920224-2b5e-4665-bf45-af2b5018e6a0';
    $pane = new stdClass();
    $pane->pid = 'new-22a3203e-e593-43b1-9ab6-f2bf5bcadab3';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exhibition_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'default',
        'links' => 1,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '22a3203e-e593-43b1-9ab6-f2bf5bcadab3';
    $display->content['new-22a3203e-e593-43b1-9ab6-f2bf5bcadab3'] = $pane;
    $display->panels['main'][1] = 'new-22a3203e-e593-43b1-9ab6-f2bf5bcadab3';
    $pane = new stdClass();
    $pane->pid = 'new-a851ccab-7a63-4268-9f1a-d04e722b3f6b';
    $pane->panel = 'main';
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
        'image_style' => 'thumbnail',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a851ccab-7a63-4268-9f1a-d04e722b3f6b';
    $display->content['new-a851ccab-7a63-4268-9f1a-d04e722b3f6b'] = $pane;
    $display->panels['main'][2] = 'new-a851ccab-7a63-4268-9f1a-d04e722b3f6b';
    $pane = new stdClass();
    $pane->pid = 'new-65877dc3-10c5-45de-918f-29de7b38991b';
    $pane->panel = 'main';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '65877dc3-10c5-45de-918f-29de7b38991b';
    $display->content['new-65877dc3-10c5-45de-918f-29de7b38991b'] = $pane;
    $display->panels['main'][3] = 'new-65877dc3-10c5-45de-918f-29de7b38991b';
    $pane = new stdClass();
    $pane->pid = 'new-205d2be7-faf1-470f-9216-297ebb956f26';
    $pane->panel = 'main';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '205d2be7-faf1-470f-9216-297ebb956f26';
    $display->content['new-205d2be7-faf1-470f-9216-297ebb956f26'] = $pane;
    $display->panels['main'][4] = 'new-205d2be7-faf1-470f-9216-297ebb956f26';
    $pane = new stdClass();
    $pane->pid = 'new-1e30ec1b-9c91-4edc-bc6f-10858150d48e';
    $pane->panel = 'main';
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
        'link' => 0,
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
    $pane->uuid = '1e30ec1b-9c91-4edc-bc6f-10858150d48e';
    $display->content['new-1e30ec1b-9c91-4edc-bc6f-10858150d48e'] = $pane;
    $display->panels['main'][5] = 'new-1e30ec1b-9c91-4edc-bc6f-10858150d48e';
    $pane = new stdClass();
    $pane->pid = 'new-7ca74cc1-ce48-4ae7-a16a-ae13f5486d2b';
    $pane->panel = 'sidebar_right';
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
    $pane->uuid = '7ca74cc1-ce48-4ae7-a16a-ae13f5486d2b';
    $display->content['new-7ca74cc1-ce48-4ae7-a16a-ae13f5486d2b'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-7ca74cc1-ce48-4ae7-a16a-ae13f5486d2b';
    $pane = new stdClass();
    $pane->pid = 'new-2e0b34a2-f489-4a5e-ab1f-4fe2013cdc08';
    $pane->panel = 'sidebar_right';
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
    $pane->uuid = '2e0b34a2-f489-4a5e-ab1f-4fe2013cdc08';
    $display->content['new-2e0b34a2-f489-4a5e-ab1f-4fe2013cdc08'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-2e0b34a2-f489-4a5e-ab1f-4fe2013cdc08';
    $pane = new stdClass();
    $pane->pid = 'new-04e42d17-d152-4a5f-a2a7-bd971dcc7c2c';
    $pane->panel = 'sidebar_right';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '04e42d17-d152-4a5f-a2a7-bd971dcc7c2c';
    $display->content['new-04e42d17-d152-4a5f-a2a7-bd971dcc7c2c'] = $pane;
    $display->panels['sidebar_right'][2] = 'new-04e42d17-d152-4a5f-a2a7-bd971dcc7c2c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-16920224-2b5e-4665-bf45-af2b5018e6a0';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '09990d34-d987-454c-ae33-a6185b7448f3';
    $display->content['new-09990d34-d987-454c-ae33-a6185b7448f3'] = $pane;
    $display->panels['main'][1] = 'new-09990d34-d987-454c-ae33-a6185b7448f3';
    $pane = new stdClass();
    $pane->pid = 'new-5c39908a-148d-4888-9f36-7a9e41e948bc';
    $pane->panel = 'sidebar_left_golden';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5c39908a-148d-4888-9f36-7a9e41e948bc';
    $display->content['new-5c39908a-148d-4888-9f36-7a9e41e948bc'] = $pane;
    $display->panels['sidebar_left_golden'][0] = 'new-5c39908a-148d-4888-9f36-7a9e41e948bc';
    $pane = new stdClass();
    $pane->pid = 'new-534a3459-bbd1-42de-ba05-fa17a21c43ff';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-3R2fSstWpR0eqQuINJg1HUmpaYIWrcVZ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Audience',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '534a3459-bbd1-42de-ba05-fa17a21c43ff';
    $display->content['new-534a3459-bbd1-42de-ba05-fa17a21c43ff'] = $pane;
    $display->panels['sidebar_left_golden'][1] = 'new-534a3459-bbd1-42de-ba05-fa17a21c43ff';
    $pane = new stdClass();
    $pane->pid = 'new-2f874dd9-8ba2-4be0-860e-c98dd2af561d';
    $pane->panel = 'sidebar_left_golden';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2f874dd9-8ba2-4be0-860e-c98dd2af561d';
    $display->content['new-2f874dd9-8ba2-4be0-860e-c98dd2af561d'] = $pane;
    $display->panels['sidebar_left_golden'][2] = 'new-2f874dd9-8ba2-4be0-860e-c98dd2af561d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['exhibitions_main_page'] = $page;

  return $pages;

}
