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
  $handler->name = 'term_view__panelizer_node_8b5cec0f-44a9-43f1-abe7-b351a5ea81b9';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panelizer_node';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Blog',
    'contexts' => array(),
    'relationships' => array(),
    'context' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'blog_name' => 'blog_name',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
    'panels_everywhere_site_template' => 'site_template_panel_context',
  );
  $export['term_view__panelizer_node_8b5cec0f-44a9-43f1-abe7-b351a5ea81b9'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_archives';
  $page->task = 'page';
  $page->admin_title = 'Blog Archives';
  $page->admin_description = 'Displays a blog post via the panelized term entity.';
  $page->path = 'taxonomy/term/%blog_name/archives/%year/%month';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
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
          19 => 0,
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
      'identifier' => 'Year',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'month' => array(
      'id' => 2,
      'identifier' => 'Month',
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
  $handler->name = 'page_blog_archives__panelizer_node_96dff6b8-c6fc-4ee4-b6c2-00f52d5768bd';
  $handler->task = 'page';
  $handler->subtask = 'blog_archives';
  $handler->handler = 'panelizer_node';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panelizer',
    'contexts' => array(),
    'relationships' => array(),
    'context' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'blog_name' => 'blog_name',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog_archives'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_cattag';
  $page->task = 'page';
  $page->admin_title = 'Blog Categories and Tags';
  $page->admin_description = 'Displays a blog post via the panelized term entity.';
  $page->path = 'taxonomy/term/%blog_name/cattag/%term';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
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
          19 => 0,
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
    'term' => array(
      'id' => 2,
      'identifier' => 'Taxonomy term: ID 2',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          7 => '7',
          18 => '18',
          14 => 0,
          15 => 0,
          11 => 0,
          17 => 0,
          19 => 0,
          5 => 0,
          6 => 0,
          1 => 0,
          2 => 0,
          3 => 0,
          12 => 0,
          13 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          16 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
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
  $handler->name = 'page_blog_cattag__panelizer_node_e8c92a30-1a0d-4b55-8f4d-3954b9dbe788';
  $handler->task = 'page';
  $handler->subtask = 'blog_cattag';
  $handler->handler = 'panelizer_node';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panelizer',
    'contexts' => array(),
    'relationships' => array(),
    'context' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'blog_name' => 'blog_name',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_cattag__panelizer_node_060c547a-d6b6-4420-a6ce-76d38a7de2dd';
  $handler->task = 'page';
  $handler->subtask = 'blog_cattag';
  $handler->handler = 'panelizer_node';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Single Post',
    'contexts' => array(),
    'relationships' => array(),
    'context' => 'argument_term_1',
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'blog_name' => 'blog_name',
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
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog_cattag'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_post';
  $page->task = 'page';
  $page->admin_title = 'Blog Post';
  $page->admin_description = 'Displays a blog post via the panelized term entity.';
  $page->path = 'taxonomy/term/%taxonomy_term/node/%node';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'taxonomy_term' => array(
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
          19 => 0,
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
    'node' => array(
      'id' => 1,
      'identifier' => 'Content: ID (node)',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_post__panelizer';
  $handler->task = 'page';
  $handler->subtask = 'blog_post';
  $handler->handler = 'panelizer_node';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panelizer',
    'contexts' => array(),
    'relationships' => array(),
    'context' => array(),
    'name' => 'panelizer',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'blog_name' => 'blog_name',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_post__panelizer_node_d1d623b9-2e71-4662-af56-486731268464';
  $handler->task = 'page';
  $handler->subtask = 'blog_post';
  $handler->handler = 'panelizer_node';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Single Post',
    'contexts' => array(),
    'relationships' => array(),
    'context' => 'argument_term_1',
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'blog_name' => 'blog_name',
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
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog_post'] = $page;

  return $pages;

}
