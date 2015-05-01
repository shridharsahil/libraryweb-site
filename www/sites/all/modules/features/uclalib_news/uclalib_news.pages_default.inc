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
  $handler->name = 'node_view__panel_context_c347b756-23bd-4fbb-b0bc-3c8e9b87da9a';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Blog',
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
      1 => array(
        'identifier' => 'Taxonomy vocabulary',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity:taxonomy_vocabulary',
        'entity_id' => '17',
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
        2 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'check if node has \'Blog Name\' term field value',
            'php' => 'if ($contexts[\'argument_entity_id:node_1\']->data->field_news_blog_name) {
  return TRUE;
}',
          ),
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
  $display->title = '';
  $display->uuid = 'c51b826b-d14a-4999-be2f-00d34f3b8f68';
  $display->window_title = '%node:title | UCLA Library News';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7dc8de8a-1e25-43bf-896c-5e0630dad6ef';
    $pane->panel = 'main';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = FALSE;
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7dc8de8a-1e25-43bf-896c-5e0630dad6ef';
    $display->content['new-7dc8de8a-1e25-43bf-896c-5e0630dad6ef'] = $pane;
    $display->panels['main'][0] = 'new-7dc8de8a-1e25-43bf-896c-5e0630dad6ef';
    $pane = new stdClass();
    $pane->pid = 'new-360ff274-75cf-4dfc-b422-a1218e8639ee';
    $pane->panel = 'main';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '360ff274-75cf-4dfc-b422-a1218e8639ee';
    $display->content['new-360ff274-75cf-4dfc-b422-a1218e8639ee'] = $pane;
    $display->panels['main'][1] = 'new-360ff274-75cf-4dfc-b422-a1218e8639ee';
    $pane = new stdClass();
    $pane->pid = 'new-8e3cc30f-87a4-4a6d-8597-f5405053f8a3';
    $pane->panel = 'main';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8e3cc30f-87a4-4a6d-8597-f5405053f8a3';
    $display->content['new-8e3cc30f-87a4-4a6d-8597-f5405053f8a3'] = $pane;
    $display->panels['main'][2] = 'new-8e3cc30f-87a4-4a6d-8597-f5405053f8a3';
    $pane = new stdClass();
    $pane->pid = 'new-2ece366f-1a74-48e6-91d1-4eb77ffe3ad5';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_terms-blog_terms_cats_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_news_blog_name_tid' => '%node:field_news_blog_name',
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
    $pane->uuid = '2ece366f-1a74-48e6-91d1-4eb77ffe3ad5';
    $display->content['new-2ece366f-1a74-48e6-91d1-4eb77ffe3ad5'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-2ece366f-1a74-48e6-91d1-4eb77ffe3ad5';
    $pane = new stdClass();
    $pane->pid = 'new-bc59369b-9bcd-47e8-a653-63b3d83b1bbf';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bc59369b-9bcd-47e8-a653-63b3d83b1bbf';
    $display->content['new-bc59369b-9bcd-47e8-a653-63b3d83b1bbf'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-bc59369b-9bcd-47e8-a653-63b3d83b1bbf';
    $pane = new stdClass();
    $pane->pid = 'new-9d854730-3172-4ddd-83b8-ee8bd7e20071';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_terms-blog_terms_tags_pane';
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
    $pane->uuid = '9d854730-3172-4ddd-83b8-ee8bd7e20071';
    $display->content['new-9d854730-3172-4ddd-83b8-ee8bd7e20071'] = $pane;
    $display->panels['sidebar_right'][2] = 'new-9d854730-3172-4ddd-83b8-ee8bd7e20071';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_c347b756-23bd-4fbb-b0bc-3c8e9b87da9a'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
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

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'blog';
  $page->admin_description = 'This is a (panel) page that holds a list of blog teasers for a blog with a sidebar that contains meta data, categories and archive links.';
  $page->path = 'blog/!blog_name/!year/!month';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'blog_name' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          17 => '17',
          14 => 0,
          15 => 0,
          11 => 0,
          5 => 0,
          6 => 0,
          1 => 0,
          2 => 0,
          3 => 0,
          12 => 0,
          13 => 0,
          7 => 0,
          18 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          16 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
      ),
    ),
    'year' => array(
      'id' => 1,
      'identifier' => 'Year (String)',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'month' => array(
      'id' => 2,
      'identifier' => 'month (String)',
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
  $handler->name = 'page_blog__panel';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog Panel',
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
      'plugins' => array(
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'or',
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
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '88ace288-0cdf-4ec3-b3e3-d38c05c219d4';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-649fa662-ccb1-4951-adcf-6b0dd8018514';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_content-blog_content_pane';
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
    $pane->uuid = '649fa662-ccb1-4951-adcf-6b0dd8018514';
    $display->content['new-649fa662-ccb1-4951-adcf-6b0dd8018514'] = $pane;
    $display->panels['main'][0] = 'new-649fa662-ccb1-4951-adcf-6b0dd8018514';
    $pane = new stdClass();
    $pane->pid = 'new-d1141089-65ff-4115-8450-b21018a7d445';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_terms-blog_terms_cats_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_news_blog_name_tid' => '%blog_name',
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
    $pane->uuid = 'd1141089-65ff-4115-8450-b21018a7d445';
    $display->content['new-d1141089-65ff-4115-8450-b21018a7d445'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-d1141089-65ff-4115-8450-b21018a7d445';
    $pane = new stdClass();
    $pane->pid = 'new-1c7ac53b-7b5d-47cc-a49a-61910a4c9dba';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1c7ac53b-7b5d-47cc-a49a-61910a4c9dba';
    $display->content['new-1c7ac53b-7b5d-47cc-a49a-61910a4c9dba'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-1c7ac53b-7b5d-47cc-a49a-61910a4c9dba';
    $pane = new stdClass();
    $pane->pid = 'new-78aaca87-bd2a-409c-81db-e8b500a75e80';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_terms-blog_terms_tags_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_news_blog_name_tid' => '%blog_name',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '78aaca87-bd2a-409c-81db-e8b500a75e80';
    $display->content['new-78aaca87-bd2a-409c-81db-e8b500a75e80'] = $pane;
    $display->panels['sidebar_right'][2] = 'new-78aaca87-bd2a-409c-81db-e8b500a75e80';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1c7ac53b-7b5d-47cc-a49a-61910a4c9dba';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog__panelizer_node_619bbe79-7aa2-4a04-9159-e362ff6e22d7';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panelizer_node';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panelizer',
    'contexts' => array(),
    'relationships' => array(),
    'context' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'blog
blog/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  return $pages;

}
