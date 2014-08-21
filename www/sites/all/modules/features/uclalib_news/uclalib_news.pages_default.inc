<?php
/**
 * @file
 * uclalib_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function uclalib_news_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -97;
  $handler->conf = array(
    'title' => 'News',
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
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Node (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news' => 'news',
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
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
      'top_left_main' => NULL,
      'top_left_bottom_left' => NULL,
      'top_left_bottom_right' => NULL,
      'top_right_sidebar' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'UCLA Library News';
  $display->uuid = 'c51b826b-d14a-4999-be2f-00d34f3b8f68';
  $display->window_title = '%node:title | UCLA Library News';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a5c4445-a7a2-4c24-9f67-a636a6a03c92';
    $pane->panel = 'bottom_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'body_summary-pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:id',
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a5c4445-a7a2-4c24-9f67-a636a6a03c92';
    $display->content['new-0a5c4445-a7a2-4c24-9f67-a636a6a03c92'] = $pane;
    $display->panels['bottom_left'][0] = 'new-0a5c4445-a7a2-4c24-9f67-a636a6a03c92';
    $pane = new stdClass();
    $pane->pid = 'new-8e3cc30f-87a4-4a6d-8597-f5405053f8a3';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8e3cc30f-87a4-4a6d-8597-f5405053f8a3';
    $display->content['new-8e3cc30f-87a4-4a6d-8597-f5405053f8a3'] = $pane;
    $display->panels['bottom_left'][1] = 'new-8e3cc30f-87a4-4a6d-8597-f5405053f8a3';
    $pane = new stdClass();
    $pane->pid = 'new-fa020a41-7493-429a-9607-430881321556';
    $pane->panel = 'bottom_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_related_content';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fa020a41-7493-429a-9607-430881321556';
    $display->content['new-fa020a41-7493-429a-9607-430881321556'] = $pane;
    $display->panels['bottom_left'][2] = 'new-fa020a41-7493-429a-9607-430881321556';
    $pane = new stdClass();
    $pane->pid = 'new-4252a3fc-3dff-49b2-9bfe-922a161b012b';
    $pane->panel = 'bottom_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'recent_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->uuid = '4252a3fc-3dff-49b2-9bfe-922a161b012b';
    $display->content['new-4252a3fc-3dff-49b2-9bfe-922a161b012b'] = $pane;
    $display->panels['bottom_right'][0] = 'new-4252a3fc-3dff-49b2-9bfe-922a161b012b';
    $pane = new stdClass();
    $pane->pid = 'new-a96600e2-46cf-4d22-beb6-af371cb3e3d2';
    $pane->panel = 'bottom_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a96600e2-46cf-4d22-beb6-af371cb3e3d2';
    $display->content['new-a96600e2-46cf-4d22-beb6-af371cb3e3d2'] = $pane;
    $display->panels['bottom_right'][1] = 'new-a96600e2-46cf-4d22-beb6-af371cb3e3d2';
    $pane = new stdClass();
    $pane->pid = 'new-2edbe844-4a5a-4eac-aa27-726410f754f6';
    $pane->panel = 'bottom_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Location',
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
    $pane->uuid = '2edbe844-4a5a-4eac-aa27-726410f754f6';
    $display->content['new-2edbe844-4a5a-4eac-aa27-726410f754f6'] = $pane;
    $display->panels['bottom_right'][2] = 'new-2edbe844-4a5a-4eac-aa27-726410f754f6';
    $pane = new stdClass();
    $pane->pid = 'new-44e119af-e30a-41f2-b86e-0fbfee882be1';
    $pane->panel = 'bottom_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_category_links-category_search_links';
    $pane->shown = FALSE;
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '44e119af-e30a-41f2-b86e-0fbfee882be1';
    $display->content['new-44e119af-e30a-41f2-b86e-0fbfee882be1'] = $pane;
    $display->panels['bottom_right'][3] = 'new-44e119af-e30a-41f2-b86e-0fbfee882be1';
    $pane = new stdClass();
    $pane->pid = 'new-344f81d1-77f5-47ef-810a-90ff2c71a95c';
    $pane->panel = 'bottom_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_category_links-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->uuid = '344f81d1-77f5-47ef-810a-90ff2c71a95c';
    $display->content['new-344f81d1-77f5-47ef-810a-90ff2c71a95c'] = $pane;
    $display->panels['bottom_right'][4] = 'new-344f81d1-77f5-47ef-810a-90ff2c71a95c';
    $pane = new stdClass();
    $pane->pid = 'new-438c96d5-10c3-4e6d-98ef-dae03a33a074';
    $pane->panel = 'top_left_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Back to News Breadcrumb',
      'title' => '',
      'body' => '<p><a href="/news-events">&lt; News & Events</a></p>',
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
    $pane->uuid = '438c96d5-10c3-4e6d-98ef-dae03a33a074';
    $display->content['new-438c96d5-10c3-4e6d-98ef-dae03a33a074'] = $pane;
    $display->panels['top_left_main'][0] = 'new-438c96d5-10c3-4e6d-98ef-dae03a33a074';
    $pane = new stdClass();
    $pane->pid = 'new-7dc8de8a-1e25-43bf-896c-5e0630dad6ef';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7dc8de8a-1e25-43bf-896c-5e0630dad6ef';
    $display->content['new-7dc8de8a-1e25-43bf-896c-5e0630dad6ef'] = $pane;
    $display->panels['top_left_main'][1] = 'new-7dc8de8a-1e25-43bf-896c-5e0630dad6ef';
    $pane = new stdClass();
    $pane->pid = 'new-360ff274-75cf-4dfc-b422-a1218e8639ee';
    $pane->panel = 'top_left_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'News Byline',
      'title' => '',
      'body' => '<p>By %user:field_first_name %user:field_last_name on %node:created:month %node:created:day, %node:created:year</p>
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
      'css_class' => 'pane-news-byline',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '360ff274-75cf-4dfc-b422-a1218e8639ee';
    $display->content['new-360ff274-75cf-4dfc-b422-a1218e8639ee'] = $pane;
    $display->panels['top_left_main'][2] = 'new-360ff274-75cf-4dfc-b422-a1218e8639ee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  return $export;
}
