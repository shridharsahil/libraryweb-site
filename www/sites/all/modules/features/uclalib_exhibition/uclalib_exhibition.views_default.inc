<?php
/**
 * @file
 * uclalib_exhibition.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_exhibition_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exhibitions_main_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_site_general_search';
  $view->human_name = 'Exhibitions Main Page';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Start Month */
  $handler->display->display_options['fields']['field_exhibition_start']['id'] = 'field_exhibition_start';
  $handler->display->display_options['fields']['field_exhibition_start']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_exhibition_start']['field'] = 'field_exhibition_start';
  $handler->display->display_options['fields']['field_exhibition_start']['ui_name'] = 'Start Month';
  $handler->display->display_options['fields']['field_exhibition_start']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_start']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_start']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_start']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Start Day */
  $handler->display->display_options['fields']['field_exhibition_start_1']['id'] = 'field_exhibition_start_1';
  $handler->display->display_options['fields']['field_exhibition_start_1']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_exhibition_start_1']['field'] = 'field_exhibition_start';
  $handler->display->display_options['fields']['field_exhibition_start_1']['ui_name'] = 'Start Day';
  $handler->display->display_options['fields']['field_exhibition_start_1']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_start_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_start_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_start_1']['settings'] = array(
    'format_type' => 'day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: End Month */
  $handler->display->display_options['fields']['field_exhibition_end_1']['id'] = 'field_exhibition_end_1';
  $handler->display->display_options['fields']['field_exhibition_end_1']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_exhibition_end_1']['field'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end_1']['ui_name'] = 'End Month';
  $handler->display->display_options['fields']['field_exhibition_end_1']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_end_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_end_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: End Day */
  $handler->display->display_options['fields']['field_exhibition_end_2']['id'] = 'field_exhibition_end_2';
  $handler->display->display_options['fields']['field_exhibition_end_2']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_exhibition_end_2']['field'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end_2']['ui_name'] = 'End Day';
  $handler->display->display_options['fields']['field_exhibition_end_2']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_end_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_end_2']['settings'] = array(
    'format_type' => 'day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Exhibition End Date */
  $handler->display->display_options['fields']['field_exhibition_end']['id'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_exhibition_end']['field'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['text'] = '<div class="cal-exhibition-date cal-date-range"><div class="cal-date"><div class="cal-month">[field_exhibition_start]</div><div class="cal-day">[field_exhibition_start_1]</div></div> <span class="date-range-separator">to</span> <div class="cal-date"><div class="cal-month">[field_exhibition_end_1]</div><div class="cal-day">[field_exhibition_end_2]</div></div></div>';
  $handler->display->display_options['fields']['field_exhibition_end']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_end']['settings'] = array(
    'format_type' => 'month_with_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '125',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>[title]</div>
<div><p>[body]</p></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Content: Exhibition End Date */
  $handler->display->display_options['sorts']['field_exhibition_end']['id'] = 'field_exhibition_end';
  $handler->display->display_options['sorts']['field_exhibition_end']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['sorts']['field_exhibition_end']['field'] = 'field_exhibition_end';
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exhibition' => 'exhibition',
  );
  /* Filter criterion: Indexed Content: Exhibition Start Date */
  $handler->display->display_options['filters']['field_exhibition_start']['id'] = 'field_exhibition_start';
  $handler->display->display_options['filters']['field_exhibition_start']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['field_exhibition_start']['field'] = 'field_exhibition_start';
  $handler->display->display_options['filters']['field_exhibition_start']['operator'] = '<=';
  $handler->display->display_options['filters']['field_exhibition_start']['value'] = 'now + 14 days';
  $handler->display->display_options['filters']['field_exhibition_start']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_exhibition_start']['expose']['operator_id'] = 'field_exhibition_start_op';
  $handler->display->display_options['filters']['field_exhibition_start']['expose']['label'] = 'Exhibition Start Date';
  $handler->display->display_options['filters']['field_exhibition_start']['expose']['operator'] = 'field_exhibition_start_op';
  $handler->display->display_options['filters']['field_exhibition_start']['expose']['identifier'] = 'field_exhibition_start';
  $handler->display->display_options['filters']['field_exhibition_start']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Indexed Content: Exhibition End Date */
  $handler->display->display_options['filters']['field_exhibition_end']['id'] = 'field_exhibition_end';
  $handler->display->display_options['filters']['field_exhibition_end']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['field_exhibition_end']['field'] = 'field_exhibition_end';
  $handler->display->display_options['filters']['field_exhibition_end']['operator'] = '>=';
  $handler->display->display_options['filters']['field_exhibition_end']['value'] = 'now';

  /* Display: Exhibitions Main Page View */
  $handler = $view->new_display('panel_pane', 'Exhibitions Main Page View', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_exhibition_dates' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indexed Node: Exhibition Dates',
    ),
  );
  $export['exhibitions_main_view'] = $view;

  $view = new view();
  $view->name = 'other_exhibitions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other Exhibitions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all exhibitions >';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Exhibition End Date */
  $handler->display->display_options['fields']['field_exhibition_end']['id'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['table'] = 'field_data_field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['field'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['text'] = 'Through [field_exhibition_end]';
  $handler->display->display_options['fields']['field_exhibition_end']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_end']['settings'] = array(
    'format_type' => 'month_with_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exhibition' => 'exhibition',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'other_exhibitions_pane');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news-events/exhibitions';
  $export['other_exhibitions'] = $view;

  return $export;
}
