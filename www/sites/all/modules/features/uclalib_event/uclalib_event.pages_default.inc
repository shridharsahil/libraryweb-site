<?php
/**
 * @file
 * uclalib_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function uclalib_event_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Event node view variant',
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
              'uclalib_event' => 'uclalib_event',
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
  $display->title = 'UCLA Library Events';
  $display->uuid = '8e3b261e-72ce-466d-9fec-f5581bc1b678';
  $display->window_title = '%node:title | UCLA Library Events';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dbce85b6-706a-4068-85d8-a7fbf9e9ceba';
    $pane->panel = 'top_left_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Back to Events Breadcrumb',
      'title' => '',
      'body' => '<p><a href="/news-events">&lt; Events</a></p>
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
      'css_class' => 'pane-events-breadcrumb',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dbce85b6-706a-4068-85d8-a7fbf9e9ceba';
    $display->content['new-dbce85b6-706a-4068-85d8-a7fbf9e9ceba'] = $pane;
    $display->panels['top_left_main'][0] = 'new-dbce85b6-706a-4068-85d8-a7fbf9e9ceba';
    $pane = new stdClass();
    $pane->pid = 'new-8a8f197c-f09b-4ca9-8c8a-5ec0639c74f7';
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
    $pane->uuid = '8a8f197c-f09b-4ca9-8c8a-5ec0639c74f7';
    $display->content['new-8a8f197c-f09b-4ca9-8c8a-5ec0639c74f7'] = $pane;
    $display->panels['top_left_main'][1] = 'new-8a8f197c-f09b-4ca9-8c8a-5ec0639c74f7';
    $pane = new stdClass();
    $pane->pid = 'new-6d036f90-9c87-43c0-a4a6-a3c93b58bace';
    $pane->panel = 'top_left_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_subtitle';
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
    $pane->uuid = '6d036f90-9c87-43c0-a4a6-a3c93b58bace';
    $display->content['new-6d036f90-9c87-43c0-a4a6-a3c93b58bace'] = $pane;
    $display->panels['top_left_main'][2] = 'new-6d036f90-9c87-43c0-a4a6-a3c93b58bace';
    $pane = new stdClass();
    $pane->pid = 'new-26ca4a50-9e98-4f7f-b01d-8576484e0f15';
    $pane->panel = 'top_left_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_date';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '26ca4a50-9e98-4f7f-b01d-8576484e0f15';
    $display->content['new-26ca4a50-9e98-4f7f-b01d-8576484e0f15'] = $pane;
    $display->panels['top_left_main'][3] = 'new-26ca4a50-9e98-4f7f-b01d-8576484e0f15';
    $pane = new stdClass();
    $pane->pid = 'new-b657dd2d-a3d7-4d36-bbf5-cf8650b37bf9';
    $pane->panel = 'top_left_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
    $pane->uuid = 'b657dd2d-a3d7-4d36-bbf5-cf8650b37bf9';
    $display->content['new-b657dd2d-a3d7-4d36-bbf5-cf8650b37bf9'] = $pane;
    $display->panels['top_left_main'][4] = 'new-b657dd2d-a3d7-4d36-bbf5-cf8650b37bf9';
    $pane = new stdClass();
    $pane->pid = 'new-283bb3a6-0b3f-4a5e-87f1-794d929eca64';
    $pane->panel = 'top_left_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_image';
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
      'override_title' => 1,
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
    $pane->uuid = '283bb3a6-0b3f-4a5e-87f1-794d929eca64';
    $display->content['new-283bb3a6-0b3f-4a5e-87f1-794d929eca64'] = $pane;
    $display->panels['top_left_main'][5] = 'new-283bb3a6-0b3f-4a5e-87f1-794d929eca64';
    $pane = new stdClass();
    $pane->pid = 'new-0eea4122-8f5c-472e-a1c2-7ccc7e7ae8ce';
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
    $pane->uuid = '0eea4122-8f5c-472e-a1c2-7ccc7e7ae8ce';
    $display->content['new-0eea4122-8f5c-472e-a1c2-7ccc7e7ae8ce'] = $pane;
    $display->panels['top_left_main'][6] = 'new-0eea4122-8f5c-472e-a1c2-7ccc7e7ae8ce';
    $pane = new stdClass();
    $pane->pid = 'new-947d9c1b-c183-4365-a9c7-04b5887d12c1';
    $pane->panel = 'top_left_main';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '947d9c1b-c183-4365-a9c7-04b5887d12c1';
    $display->content['new-947d9c1b-c183-4365-a9c7-04b5887d12c1'] = $pane;
    $display->panels['top_left_main'][7] = 'new-947d9c1b-c183-4365-a9c7-04b5887d12c1';
    $pane = new stdClass();
    $pane->pid = 'new-3e389010-3edd-40d3-9206-95d04b9e15c2';
    $pane->panel = 'top_left_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '3e389010-3edd-40d3-9206-95d04b9e15c2';
    $display->content['new-3e389010-3edd-40d3-9206-95d04b9e15c2'] = $pane;
    $display->panels['top_left_main'][8] = 'new-3e389010-3edd-40d3-9206-95d04b9e15c2';
    $pane = new stdClass();
    $pane->pid = 'new-a2113e1b-6210-476d-b671-c4fea1780d48';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->uuid = 'a2113e1b-6210-476d-b671-c4fea1780d48';
    $display->content['new-a2113e1b-6210-476d-b671-c4fea1780d48'] = $pane;
    $display->panels['top_right_sidebar'][0] = 'new-a2113e1b-6210-476d-b671-c4fea1780d48';
    $pane = new stdClass();
    $pane->pid = 'new-8e103b62-af70-4793-8734-5b73945a0a4e';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_series';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8e103b62-af70-4793-8734-5b73945a0a4e';
    $display->content['new-8e103b62-af70-4793-8734-5b73945a0a4e'] = $pane;
    $display->panels['top_right_sidebar'][1] = 'new-8e103b62-af70-4793-8734-5b73945a0a4e';
    $pane = new stdClass();
    $pane->pid = 'new-82b56761-e3c4-402b-a2b5-010e1f8036bc';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_audience';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '82b56761-e3c4-402b-a2b5-010e1f8036bc';
    $display->content['new-82b56761-e3c4-402b-a2b5-010e1f8036bc'] = $pane;
    $display->panels['top_right_sidebar'][2] = 'new-82b56761-e3c4-402b-a2b5-010e1f8036bc';
    $pane = new stdClass();
    $pane->pid = 'new-93073ac0-609c-49c8-967b-f9e6eee6e864';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'other_events-panel_pane_1';
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
    $pane->uuid = '93073ac0-609c-49c8-967b-f9e6eee6e864';
    $display->content['new-93073ac0-609c-49c8-967b-f9e6eee6e864'] = $pane;
    $display->panels['top_right_sidebar'][3] = 'new-93073ac0-609c-49c8-967b-f9e6eee6e864';
    $pane = new stdClass();
    $pane->pid = 'new-2e789615-31c1-4df9-8ffd-99ef84af7210';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2e789615-31c1-4df9-8ffd-99ef84af7210';
    $display->content['new-2e789615-31c1-4df9-8ffd-99ef84af7210'] = $pane;
    $display->panels['top_right_sidebar'][4] = 'new-2e789615-31c1-4df9-8ffd-99ef84af7210';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8a8f197c-f09b-4ca9-8c8a-5ec0639c74f7';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_event_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events_agenda';
  $page->task = 'page';
  $page->admin_title = 'Events Agenda';
  $page->admin_description = 'Events Agenda landing page';
  $page->path = 'news-events/events-agenda/!start/!end';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'start' => array(
      'id' => 1,
      'identifier' => 'Start Date',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'end' => array(
      'id' => 2,
      'identifier' => 'End Date',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_agenda_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_agenda';
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
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5aa2c6a2-4403-4d34-b5cf-161696c805ce';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ee767e5d-3681-4dbc-a09d-7216581ff40d';
    $pane->panel = 'main';
    $pane->type = 'daterangepicker';
    $pane->subtype = 'daterangepicker';
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
    $pane->uuid = 'ee767e5d-3681-4dbc-a09d-7216581ff40d';
    $display->content['new-ee767e5d-3681-4dbc-a09d-7216581ff40d'] = $pane;
    $display->panels['main'][0] = 'new-ee767e5d-3681-4dbc-a09d-7216581ff40d';
    $pane = new stdClass();
    $pane->pid = 'new-311fc15a-9115-4f38-abe0-da196c05981d';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_agenda-panel_pane_1';
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
    $pane->uuid = '311fc15a-9115-4f38-abe0-da196c05981d';
    $display->content['new-311fc15a-9115-4f38-abe0-da196c05981d'] = $pane;
    $display->panels['main'][1] = 'new-311fc15a-9115-4f38-abe0-da196c05981d';
    $pane = new stdClass();
    $pane->pid = 'new-a2f44174-b3ae-425b-a72c-5e9afc7f3f6a';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-zItRqA5RFuDfSs4G2t7RRpoLl2i48MIl';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a2f44174-b3ae-425b-a72c-5e9afc7f3f6a';
    $display->content['new-a2f44174-b3ae-425b-a72c-5e9afc7f3f6a'] = $pane;
    $display->panels['sidebar_left_golden'][0] = 'new-a2f44174-b3ae-425b-a72c-5e9afc7f3f6a';
    $pane = new stdClass();
    $pane->pid = 'new-2581b8d3-5dc1-4710-9673-e1fc4d582c52';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-K8oMPaSbIBACYBFBfyeXeWjlcnpbOesE';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Series',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2581b8d3-5dc1-4710-9673-e1fc4d582c52';
    $display->content['new-2581b8d3-5dc1-4710-9673-e1fc4d582c52'] = $pane;
    $display->panels['sidebar_left_golden'][1] = 'new-2581b8d3-5dc1-4710-9673-e1fc4d582c52';
    $pane = new stdClass();
    $pane->pid = 'new-1288fd4e-5b89-4ec8-9f90-0771c8a67877';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-dPTRrvJVywvmbk8IrApIgbk8EveZIybL';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1288fd4e-5b89-4ec8-9f90-0771c8a67877';
    $display->content['new-1288fd4e-5b89-4ec8-9f90-0771c8a67877'] = $pane;
    $display->panels['sidebar_left_golden'][2] = 'new-1288fd4e-5b89-4ec8-9f90-0771c8a67877';
    $pane = new stdClass();
    $pane->pid = 'new-02678db3-c9a7-44c0-a281-62ca25a80efd';
    $pane->panel = 'sidebar_left_golden';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-dS9NrtY8lix1Z1JilcWmN5XY52FtPcSK';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '02678db3-c9a7-44c0-a281-62ca25a80efd';
    $display->content['new-02678db3-c9a7-44c0-a281-62ca25a80efd'] = $pane;
    $display->panels['sidebar_left_golden'][3] = 'new-02678db3-c9a7-44c0-a281-62ca25a80efd';
    $pane = new stdClass();
    $pane->pid = 'new-a4399752-ad49-43ab-9991-5de9887e7083';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'exhibitions_highlight-exhibition_highlight_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4399752-ad49-43ab-9991-5de9887e7083';
    $display->content['new-a4399752-ad49-43ab-9991-5de9887e7083'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-a4399752-ad49-43ab-9991-5de9887e7083';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_agenda'] = $page;

  return $pages;

}
