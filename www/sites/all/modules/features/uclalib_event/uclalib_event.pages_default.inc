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
    'title' => 'Event',
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
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'UCLA Library Events';
  $display->uuid = '8e3b261e-72ce-466d-9fec-f5581bc1b678';
  $display->window_title = '%node:title | UCLA Library Events';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-26ca4a50-9e98-4f7f-b01d-8576484e0f15';
    $pane->panel = 'bottom_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_date';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'uclalib_event_date_time',
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
    $pane->uuid = '26ca4a50-9e98-4f7f-b01d-8576484e0f15';
    $display->content['new-26ca4a50-9e98-4f7f-b01d-8576484e0f15'] = $pane;
    $display->panels['bottom_left'][0] = 'new-26ca4a50-9e98-4f7f-b01d-8576484e0f15';
    $pane = new stdClass();
    $pane->pid = 'new-84bf8de0-eb82-4707-ae2a-9ec0753386ef';
    $pane->panel = 'bottom_left';
    $pane->type = 'event_dates';
    $pane->subtype = 'event_dates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '84bf8de0-eb82-4707-ae2a-9ec0753386ef';
    $display->content['new-84bf8de0-eb82-4707-ae2a-9ec0753386ef'] = $pane;
    $display->panels['bottom_left'][1] = 'new-84bf8de0-eb82-4707-ae2a-9ec0753386ef';
    $pane = new stdClass();
    $pane->pid = 'new-b657dd2d-a3d7-4d36-bbf5-cf8650b37bf9';
    $pane->panel = 'bottom_left';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b657dd2d-a3d7-4d36-bbf5-cf8650b37bf9';
    $display->content['new-b657dd2d-a3d7-4d36-bbf5-cf8650b37bf9'] = $pane;
    $display->panels['bottom_left'][2] = 'new-b657dd2d-a3d7-4d36-bbf5-cf8650b37bf9';
    $pane = new stdClass();
    $pane->pid = 'new-283bb3a6-0b3f-4a5e-87f1-794d929eca64';
    $pane->panel = 'bottom_left';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '283bb3a6-0b3f-4a5e-87f1-794d929eca64';
    $display->content['new-283bb3a6-0b3f-4a5e-87f1-794d929eca64'] = $pane;
    $display->panels['bottom_left'][3] = 'new-283bb3a6-0b3f-4a5e-87f1-794d929eca64';
    $pane = new stdClass();
    $pane->pid = 'new-95b08749-128c-478c-8ec1-0edd7ee4caef';
    $pane->panel = 'bottom_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'body_summary-pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '95b08749-128c-478c-8ec1-0edd7ee4caef';
    $display->content['new-95b08749-128c-478c-8ec1-0edd7ee4caef'] = $pane;
    $display->panels['bottom_left'][4] = 'new-95b08749-128c-478c-8ec1-0edd7ee4caef';
    $pane = new stdClass();
    $pane->pid = 'new-947d9c1b-c183-4365-a9c7-04b5887d12c1';
    $pane->panel = 'bottom_left';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '947d9c1b-c183-4365-a9c7-04b5887d12c1';
    $display->content['new-947d9c1b-c183-4365-a9c7-04b5887d12c1'] = $pane;
    $display->panels['bottom_left'][5] = 'new-947d9c1b-c183-4365-a9c7-04b5887d12c1';
    $pane = new stdClass();
    $pane->pid = 'new-31c60aaf-1125-4ad3-810b-fbb8a97913d5';
    $pane->panel = 'bottom_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_room_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Important Room Information',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '31c60aaf-1125-4ad3-810b-fbb8a97913d5';
    $display->content['new-31c60aaf-1125-4ad3-810b-fbb8a97913d5'] = $pane;
    $display->panels['bottom_left'][6] = 'new-31c60aaf-1125-4ad3-810b-fbb8a97913d5';
    $pane = new stdClass();
    $pane->pid = 'new-0b464923-b971-4c1e-b8ee-17895523fe23';
    $pane->panel = 'bottom_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_rsvp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
      'style' => 'important-column-heading',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '0b464923-b971-4c1e-b8ee-17895523fe23';
    $display->content['new-0b464923-b971-4c1e-b8ee-17895523fe23'] = $pane;
    $display->panels['bottom_left'][7] = 'new-0b464923-b971-4c1e-b8ee-17895523fe23';
    $pane = new stdClass();
    $pane->pid = 'new-d44eced0-6546-47a9-880c-d7eadb345a10';
    $pane->panel = 'bottom_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'd44eced0-6546-47a9-880c-d7eadb345a10';
    $display->content['new-d44eced0-6546-47a9-880c-d7eadb345a10'] = $pane;
    $display->panels['bottom_left'][8] = 'new-d44eced0-6546-47a9-880c-d7eadb345a10';
    $pane = new stdClass();
    $pane->pid = 'new-3e389010-3edd-40d3-9206-95d04b9e15c2';
    $pane->panel = 'bottom_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
      'override_title' => 1,
      'override_title_text' => 'Related Pages',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '3e389010-3edd-40d3-9206-95d04b9e15c2';
    $display->content['new-3e389010-3edd-40d3-9206-95d04b9e15c2'] = $pane;
    $display->panels['bottom_left'][9] = 'new-3e389010-3edd-40d3-9206-95d04b9e15c2';
    $pane = new stdClass();
    $pane->pid = 'new-161d4ad9-b077-4e6f-a107-a12050f3e102';
    $pane->panel = 'bottom_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_related_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
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
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '161d4ad9-b077-4e6f-a107-a12050f3e102';
    $display->content['new-161d4ad9-b077-4e6f-a107-a12050f3e102'] = $pane;
    $display->panels['bottom_left'][10] = 'new-161d4ad9-b077-4e6f-a107-a12050f3e102';
    $pane = new stdClass();
    $pane->pid = 'new-53da1621-557b-4378-bb09-c44d0d8fad19';
    $pane->panel = 'bottom_right';
    $pane->type = 'term_listing';
    $pane->subtype = 'term_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Category',
      'field' => 'field_event_category',
      'view_path' => 'news-events/events-agenda',
      'form_build_id' => 'form-mkrH3hPbtOI34Lp7mXweme3hy7fpPEsfJ-H2OimjVBE',
      'form_token' => 'H2rMGKRm4KkmnhSElCBrgP6wycwz9NfYQlpnd0pPf2w',
      'form_id' => 'uclalib_term_listing_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '53da1621-557b-4378-bb09-c44d0d8fad19';
    $display->content['new-53da1621-557b-4378-bb09-c44d0d8fad19'] = $pane;
    $display->panels['bottom_right'][0] = 'new-53da1621-557b-4378-bb09-c44d0d8fad19';
    $pane = new stdClass();
    $pane->pid = 'new-11cffef0-f174-46e8-a80a-bed23ae9948a';
    $pane->panel = 'bottom_right';
    $pane->type = 'term_listing';
    $pane->subtype = 'term_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Series',
      'field' => 'field_event_series',
      'view_path' => 'news-events/events-agenda',
      'form_build_id' => 'form-IqawRrqB3EV1D96LLMdEIjDyB_V_Jl43xEF9DBI2lDo',
      'form_token' => 'H2rMGKRm4KkmnhSElCBrgP6wycwz9NfYQlpnd0pPf2w',
      'form_id' => 'uclalib_term_listing_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '11cffef0-f174-46e8-a80a-bed23ae9948a';
    $display->content['new-11cffef0-f174-46e8-a80a-bed23ae9948a'] = $pane;
    $display->panels['bottom_right'][1] = 'new-11cffef0-f174-46e8-a80a-bed23ae9948a';
    $pane = new stdClass();
    $pane->pid = 'new-086753f4-aaef-4e8a-93f4-04e4aac6c348';
    $pane->panel = 'bottom_right';
    $pane->type = 'term_listing';
    $pane->subtype = 'term_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'field' => 'field_event_audience',
      'view_path' => 'news-events/events-agenda',
      'form_build_id' => 'form-Tf8cxKadMGHA3DewOSO9Krq1hFi11q7pYdgjiO32f1w',
      'form_token' => 'H2rMGKRm4KkmnhSElCBrgP6wycwz9NfYQlpnd0pPf2w',
      'form_id' => 'uclalib_term_listing_edit_form',
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
    $pane->uuid = '086753f4-aaef-4e8a-93f4-04e4aac6c348';
    $display->content['new-086753f4-aaef-4e8a-93f4-04e4aac6c348'] = $pane;
    $display->panels['bottom_right'][2] = 'new-086753f4-aaef-4e8a-93f4-04e4aac6c348';
    $pane = new stdClass();
    $pane->pid = 'new-93073ac0-609c-49c8-967b-f9e6eee6e864';
    $pane->panel = 'bottom_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'other_events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
        'date_argument' => '%node:field_event_date',
      ),
    );
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
    $display->panels['bottom_right'][3] = 'new-93073ac0-609c-49c8-967b-f9e6eee6e864';
    $pane = new stdClass();
    $pane->pid = 'new-2e789615-31c1-4df9-8ffd-99ef84af7210';
    $pane->panel = 'bottom_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'related_events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
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
    $display->panels['bottom_right'][4] = 'new-2e789615-31c1-4df9-8ffd-99ef84af7210';
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
      'css_class' => 'pane-custom-breadcrumb',
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
    $pane->pid = 'new-37b48279-dbbf-4550-9757-41088bed7f64';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'meta_social';
    $pane->subtype = 'meta_social';
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
    $pane->uuid = '37b48279-dbbf-4550-9757-41088bed7f64';
    $display->content['new-37b48279-dbbf-4550-9757-41088bed7f64'] = $pane;
    $display->panels['top_right_sidebar'][0] = 'new-37b48279-dbbf-4550-9757-41088bed7f64';
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
  $page->path = 'news-events/events-agenda/!date';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'date' => array(
      'id' => 1,
      'identifier' => 'String',
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
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'UCLA Library Events';
  $display->uuid = '5aa2c6a2-4403-4d34-b5cf-161696c805ce';
  $display->window_title = 'Search for UCLA Library Events & Exhibitions';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-daterangepicker-results',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '311fc15a-9115-4f38-abe0-da196c05981d';
    $display->content['new-311fc15a-9115-4f38-abe0-da196c05981d'] = $pane;
    $display->panels['main'][1] = 'new-311fc15a-9115-4f38-abe0-da196c05981d';
    $pane = new stdClass();
    $pane->pid = 'new-8a31bbbe-5bf1-4ac8-aba2-645033fc1357';
    $pane->panel = 'sidebar_left';
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
    $pane->uuid = '8a31bbbe-5bf1-4ac8-aba2-645033fc1357';
    $display->content['new-8a31bbbe-5bf1-4ac8-aba2-645033fc1357'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-8a31bbbe-5bf1-4ac8-aba2-645033fc1357';
    $pane = new stdClass();
    $pane->pid = 'new-0ab86fd1-08ad-48c7-9cc2-de539527c9b9';
    $pane->panel = 'sidebar_left';
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
    $pane->uuid = '0ab86fd1-08ad-48c7-9cc2-de539527c9b9';
    $display->content['new-0ab86fd1-08ad-48c7-9cc2-de539527c9b9'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-0ab86fd1-08ad-48c7-9cc2-de539527c9b9';
    $pane = new stdClass();
    $pane->pid = 'new-d642e0ae-b2ec-4b35-98b1-3046e261f25e';
    $pane->panel = 'sidebar_left';
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
    $pane->uuid = 'd642e0ae-b2ec-4b35-98b1-3046e261f25e';
    $display->content['new-d642e0ae-b2ec-4b35-98b1-3046e261f25e'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-d642e0ae-b2ec-4b35-98b1-3046e261f25e';
    $pane = new stdClass();
    $pane->pid = 'new-aa0b5038-869a-4c78-ba1b-12b3d9b7ce06';
    $pane->panel = 'sidebar_left';
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
    $pane->uuid = 'aa0b5038-869a-4c78-ba1b-12b3d9b7ce06';
    $display->content['new-aa0b5038-869a-4c78-ba1b-12b3d9b7ce06'] = $pane;
    $display->panels['sidebar_left'][3] = 'new-aa0b5038-869a-4c78-ba1b-12b3d9b7ce06';
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
