<?php
/**
 * @file
 * uclalib_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function uclalib_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:blog_name:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'blog_name';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '';
  $display->uuid = 'ab53f054-e55d-47f8-8d6f-91b80b6f5fef';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-980d3273-bf58-4bb0-b939-630d8a172feb';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'blog_content';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'taxonomy/term/*/node/*
taxonomy/term/*/cattag/*',
          ),
          'context' => 'empty',
          'not' => TRUE,
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
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'panelizer.tid',
        1 => '',
        2 => '',
      ),
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
    $pane->uuid = '980d3273-bf58-4bb0-b939-630d8a172feb';
    $display->content['new-980d3273-bf58-4bb0-b939-630d8a172feb'] = $pane;
    $display->panels['main'][0] = 'new-980d3273-bf58-4bb0-b939-630d8a172feb';
    $pane = new stdClass();
    $pane->pid = 'new-385f69a4-1af7-416e-a53a-a07951eb94a9';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'taxonomy/term/*/node/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '',
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
    $pane->uuid = '385f69a4-1af7-416e-a53a-a07951eb94a9';
    $display->content['new-385f69a4-1af7-416e-a53a-a07951eb94a9'] = $pane;
    $display->panels['main'][1] = 'new-385f69a4-1af7-416e-a53a-a07951eb94a9';
    $pane = new stdClass();
    $pane->pid = 'new-47cceb89-dd10-401b-9320-49b8bae338a0';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_content-blog_content_pane_cat';
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
    $pane->uuid = '47cceb89-dd10-401b-9320-49b8bae338a0';
    $display->content['new-47cceb89-dd10-401b-9320-49b8bae338a0'] = $pane;
    $display->panels['main'][2] = 'new-47cceb89-dd10-401b-9320-49b8bae338a0';
    $pane = new stdClass();
    $pane->pid = 'new-f7ae1974-5ede-4d1f-9fac-c8768feb600a';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_content-blog_content_pane_tag';
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
    $pane->uuid = 'f7ae1974-5ede-4d1f-9fac-c8768feb600a';
    $display->content['new-f7ae1974-5ede-4d1f-9fac-c8768feb600a'] = $pane;
    $display->panels['main'][3] = 'new-f7ae1974-5ede-4d1f-9fac-c8768feb600a';
    $pane = new stdClass();
    $pane->pid = 'new-d53e8c30-5d56-4031-8acf-f675dac11171';
    $pane->panel = 'sidebar_right';
    $pane->type = 'entity_view';
    $pane->subtype = 'taxonomy_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
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
    $pane->uuid = 'd53e8c30-5d56-4031-8acf-f675dac11171';
    $display->content['new-d53e8c30-5d56-4031-8acf-f675dac11171'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-d53e8c30-5d56-4031-8acf-f675dac11171';
    $pane = new stdClass();
    $pane->pid = 'new-3f14fef5-60a3-446d-a7df-ac89accb29f3';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_terms-blog_terms_cats_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_news_blog_name_tid' => '%taxonomy_term:tid',
      ),
      'context' => array(
        0 => 'panelizer',
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
    $pane->uuid = '3f14fef5-60a3-446d-a7df-ac89accb29f3';
    $display->content['new-3f14fef5-60a3-446d-a7df-ac89accb29f3'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-3f14fef5-60a3-446d-a7df-ac89accb29f3';
    $pane = new stdClass();
    $pane->pid = 'new-2d9b8297-6921-4d40-b728-f485aac7de54';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_archives-panel_pane_1';
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
    $pane->uuid = '2d9b8297-6921-4d40-b728-f485aac7de54';
    $display->content['new-2d9b8297-6921-4d40-b728-f485aac7de54'] = $pane;
    $display->panels['sidebar_right'][2] = 'new-2d9b8297-6921-4d40-b728-f485aac7de54';
    $pane = new stdClass();
    $pane->pid = 'new-bda5a4d0-4eb8-404c-9b81-5382df9ec301';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_terms-blog_terms_tags_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_news_blog_name_tid' => '%taxonomy_term:tid',
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
    $pane->uuid = 'bda5a4d0-4eb8-404c-9b81-5382df9ec301';
    $display->content['new-bda5a4d0-4eb8-404c-9b81-5382df9ec301'] = $pane;
    $display->panels['sidebar_right'][3] = 'new-bda5a4d0-4eb8-404c-9b81-5382df9ec301';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:blog_name:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:blog_name:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'blog_name';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = '53d46b0e-7bc7-475a-9525-dd3b7d564923';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:blog_name:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'taxonomy_term:blog_name:post';
  $panelizer->title = 'Post';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'blog_name';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
  $display->title = '';
  $display->uuid = '84434948-b25b-430d-a9da-d3adab6139e5';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-32ec162e-c2ea-421b-b009-2e7154a64fc0';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'blog_content';
    $pane->shown = TRUE;
    $pane->access = array();
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
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'panelizer.tid',
        1 => '',
        2 => '',
      ),
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
    $pane->uuid = '32ec162e-c2ea-421b-b009-2e7154a64fc0';
    $display->content['new-32ec162e-c2ea-421b-b009-2e7154a64fc0'] = $pane;
    $display->panels['main'][0] = 'new-32ec162e-c2ea-421b-b009-2e7154a64fc0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:blog_name:post'] = $panelizer;

  return $export;
}
