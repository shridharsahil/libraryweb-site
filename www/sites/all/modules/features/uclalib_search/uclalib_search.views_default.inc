<?php
/**
 * @file
 * uclalib_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_site_general_search';
  $view->human_name = 'Content Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_query';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search';
  $export['content_search'] = $view;

  $view = new view();
  $view->name = 'location_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_location_search';
  $view->human_name = 'Location Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found for this search.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_location_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_location_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sort criterion: Indexed Node: Queue position */
  $handler->display->display_options['sorts']['queue_position']['id'] = 'queue_position';
  $handler->display->display_options['sorts']['queue_position']['table'] = 'search_api_index_location_search';
  $handler->display->display_options['sorts']['queue_position']['field'] = 'queue_position';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_location_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_location_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
    'field_location_nickname' => 'field_location_nickname',
    'field_location_alt_names' => 'field_location_alt_names',
  );
  /* Filter criterion: Opening hours: Open Now */
  $handler->display->display_options['filters']['open_now']['id'] = 'open_now';
  $handler->display->display_options['filters']['open_now']['table'] = 'search_api_index_location_search';
  $handler->display->display_options['filters']['open_now']['field'] = 'open_now';
  $handler->display->display_options['filters']['open_now']['value'] = 0;
  $handler->display->display_options['filters']['open_now']['exposed'] = TRUE;
  $handler->display->display_options['filters']['open_now']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['open_now']['expose']['label'] = 'Open Now';
  $handler->display->display_options['filters']['open_now']['expose']['operator'] = 'open_now_op';
  $handler->display->display_options['filters']['open_now']['expose']['identifier'] = 'open_now';
  $handler->display->display_options['filters']['open_now']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Open Now */
  $handler = $view->new_display('page', 'Open Now', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<span class="location-closed">Closed</span>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_location_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="location-open-now">Open Now</span>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Node ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_api_index_location_search';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Opening hours: Open Now */
  $handler->display->display_options['filters']['open_now']['id'] = 'open_now';
  $handler->display->display_options['filters']['open_now']['table'] = 'search_api_index_location_search';
  $handler->display->display_options['filters']['open_now']['field'] = 'open_now';
  $handler->display->display_options['filters']['open_now']['value'] = 1;
  $handler->display->display_options['filters']['open_now']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['open_now']['expose']['label'] = 'Open Now';
  $handler->display->display_options['filters']['open_now']['expose']['operator'] = 'open_now_op';
  $handler->display->display_options['filters']['open_now']['expose']['identifier'] = 'open_now';
  $handler->display->display_options['filters']['open_now']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'ajax/open_now/%';
  $export['location_search'] = $view;

  $view = new view();
  $view->name = 'news_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_site_general_search';
  $view->human_name = 'News Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found for this search.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: News Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: The main body text: Summary (indexed) */
  $handler->display->display_options['fields']['body_summary']['id'] = 'body_summary';
  $handler->display->display_options['fields']['body_summary']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['body_summary']['field'] = 'body_summary';
  $handler->display->display_options['fields']['body_summary']['label'] = '';
  $handler->display->display_options['fields']['body_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_summary']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: News Search */
  $handler = $view->new_display('panel_pane', 'News Search', 'news_search');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['news_search'] = $view;

  $view = new view();
  $view->name = 'staff_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_site_general_search';
  $view->human_name = 'Staff Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Submit';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'All Staff';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Staff Image Thumbnail */
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['id'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['field'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Staff First Name */
  $handler->display->display_options['fields']['field_staff_first_name']['id'] = 'field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_first_name']['field'] = 'field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_staff_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_first_name']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Staff Last Name */
  $handler->display->display_options['fields']['field_staff_last_name']['id'] = 'field_staff_last_name';
  $handler->display->display_options['fields']['field_staff_last_name']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_last_name']['field'] = 'field_staff_last_name';
  $handler->display->display_options['fields']['field_staff_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_staff_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_staff_last_name']['alter']['text'] = '<a href="node/[nid]">[field_staff_first_name] [field_staff_last_name]</a>';
  $handler->display->display_options['fields']['field_staff_last_name']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Staff Job Title */
  $handler->display->display_options['fields']['field_staff_job_title']['id'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_job_title']['field'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_job_title']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Staff Subject Areas */
  $handler->display->display_options['fields']['field_staff_subject_areas']['id'] = 'field_staff_subject_areas';
  $handler->display->display_options['fields']['field_staff_subject_areas']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_subject_areas']['field'] = 'field_staff_subject_areas';
  $handler->display->display_options['fields']['field_staff_subject_areas']['label'] = '';
  $handler->display->display_options['fields']['field_staff_subject_areas']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_staff_subject_areas']['alter']['text'] = '<strong>I can help with </strong>[field_staff_subject_areas]';
  $handler->display->display_options['fields']['field_staff_subject_areas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_subject_areas']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_staff_subject_areas']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_staff_subject_areas']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_staff_subject_areas']['bypass_access'] = 0;
  /* Field: Indexed Node: Staff Email */
  $handler->display->display_options['fields']['field_staff_email']['id'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_email']['field'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_email']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Staff Phone */
  $handler->display->display_options['fields']['field_staff_phone']['id'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_phone']['field'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_staff_phone']['alter']['text'] = '[field_staff_email] | [field_staff_phone] ';
  $handler->display->display_options['fields']['field_staff_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_phone']['empty'] = '[field_staff_email]';
  $handler->display->display_options['fields']['field_staff_phone']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Indexed Node: Staff Alpha */
  $handler->display->display_options['sorts']['field_staff_glossary_index']['id'] = 'field_staff_glossary_index';
  $handler->display->display_options['sorts']['field_staff_glossary_index']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['sorts']['field_staff_glossary_index']['field'] = 'field_staff_glossary_index';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff_profile' => 'staff_profile',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Indexed Node: Staff Subject Librarian */
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['id'] = 'field_staff_is_subject_librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['field'] = 'field_staff_is_subject_librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['expose']['operator_id'] = 'field_staff_is_subject_librarian_op';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['expose']['label'] = 'Staff Subject Librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['expose']['operator'] = 'field_staff_is_subject_librarian_op';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['expose']['identifier'] = 'field_staff_is_subject_librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['group_info']['label'] = 'Staff Subject Librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['group_info']['identifier'] = 'field_staff_is_subject_librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['group_info']['remember'] = FALSE;

  /* Display: Staff DIrectory */
  $handler = $view->new_display('panel_pane', 'Staff DIrectory', 'staff_directory_pane');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff_profile' => 'staff_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Node: Staff Subject Librarian */
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['id'] = 'field_staff_is_subject_librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['field'] = 'field_staff_is_subject_librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['value'] = array();
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['group'] = 1;
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['expose']['operator_id'] = 'field_staff_is_subject_librarian_op';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['expose']['label'] = 'Staff Subject Librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['expose']['operator'] = 'field_staff_is_subject_librarian_op';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['expose']['identifier'] = 'field_staff_is_subject_librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['group_info']['label'] = 'Show';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['group_info']['identifier'] = 'field_staff_is_subject_librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'All Staff',
      'operator' => '=',
      'value' => array(
        0 => '0',
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'Subject Librarians only',
      'operator' => '=',
      'value' => array(
        0 => 0,
      ),
    ),
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['staff_directory'] = $view;

  return $export;
}
