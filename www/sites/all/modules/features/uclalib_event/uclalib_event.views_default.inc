<?php
/**
 * @file
 * uclalib_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events_agenda';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_site_general_search';
  $view->human_name = 'Events Agenda';
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
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Exhibition Start Date */
  $handler->display->display_options['fields']['field_exhibition_start']['id'] = 'field_exhibition_start';
  $handler->display->display_options['fields']['field_exhibition_start']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_exhibition_start']['field'] = 'field_exhibition_start';
  $handler->display->display_options['fields']['field_exhibition_start']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_start']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_start']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_start']['settings'] = array(
    'format_type' => 'month_with_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Exhibition End Date */
  $handler->display->display_options['fields']['field_exhibition_end']['id'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_exhibition_end']['field'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_end']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['text'] = '[field_exhibition_start] to [field_exhibition_end]';
  $handler->display->display_options['fields']['field_exhibition_end']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_end']['settings'] = array(
    'format_type' => 'month_with_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Event Date */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['empty'] = '[field_exhibition_end]';
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'format_type' => 'month_with_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '125',
  );
  /* Sort criterion: Indexed Node: Event Date */
  $handler->display->display_options['sorts']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['sorts']['field_event_date']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['sorts']['field_event_date']['field'] = 'field_event_date';
  /* Sort criterion: Indexed Node: Exhibition Start Date */
  $handler->display->display_options['sorts']['field_exhibition_start']['id'] = 'field_exhibition_start';
  $handler->display->display_options['sorts']['field_exhibition_start']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['sorts']['field_exhibition_start']['field'] = 'field_exhibition_start';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Indexed Node: Event Date */
  $handler->display->display_options['filters']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['filters']['field_event_date']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['filters']['field_event_date']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date']['value'] = '2014-01-01';
  $handler->display->display_options['filters']['field_event_date']['group'] = 1;
  /* Filter criterion: Indexed Node: Event Date */
  $handler->display->display_options['filters']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['filters']['field_event_date_1']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['filters']['field_event_date_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_date_1']['value'] = '2015-01-01';
  $handler->display->display_options['filters']['field_event_date_1']['group'] = 1;
  /* Filter criterion: Indexed Node: Exhibition Start Date */
  $handler->display->display_options['filters']['field_exhibition_start']['id'] = 'field_exhibition_start';
  $handler->display->display_options['filters']['field_exhibition_start']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['field_exhibition_start']['field'] = 'field_exhibition_start';
  $handler->display->display_options['filters']['field_exhibition_start']['operator'] = '>=';
  $handler->display->display_options['filters']['field_exhibition_start']['value'] = '2014-01-01';
  $handler->display->display_options['filters']['field_exhibition_start']['group'] = 2;
  /* Filter criterion: Indexed Node: Exhibition End Date */
  $handler->display->display_options['filters']['field_exhibition_end']['id'] = 'field_exhibition_end';
  $handler->display->display_options['filters']['field_exhibition_end']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['field_exhibition_end']['field'] = 'field_exhibition_end';
  $handler->display->display_options['filters']['field_exhibition_end']['operator'] = '<=';
  $handler->display->display_options['filters']['field_exhibition_end']['value'] = '2015-01-01';
  $handler->display->display_options['filters']['field_exhibition_end']['group'] = 2;
  $handler->display->display_options['filters']['field_exhibition_end']['expose']['operator_id'] = 'field_exhibition_end_op';
  $handler->display->display_options['filters']['field_exhibition_end']['expose']['label'] = 'Exhibition End Date';
  $handler->display->display_options['filters']['field_exhibition_end']['expose']['operator'] = 'field_exhibition_end_op';
  $handler->display->display_options['filters']['field_exhibition_end']['expose']['identifier'] = 'field_exhibition_end';
  $handler->display->display_options['filters']['field_exhibition_end']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_event_date' => array(
      'type' => 'panel',
      'context' => 'entity:node.field_event_date',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indexed Node: Event Date',
    ),
    'field_event_date_1' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Indexed Node: Event Date',
    ),
    'field_exhibition_end' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indexed Node: Exhibition End Date',
    ),
    'field_exhibition_end_1' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Indexed Node: Exhibition End Date',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['events_agenda'] = $view;

  $view = new view();
  $view->name = 'exhibitions_highlight';
  $view->description = 'Exhibitions view for Events Agenda';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Exhibitions Highlight';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exhibitions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Exhibition End Date */
  $handler->display->display_options['fields']['field_exhibition_end']['id'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['table'] = 'field_data_field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['field'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['text'] = 'through [field_exhibition_end]';
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

  /* Display: Exhibitions Highlight */
  $handler = $view->new_display('panel_pane', 'Exhibitions Highlight', 'exhibition_highlight_pane');
  $export['exhibitions_highlight'] = $view;

  $view = new view();
  $view->name = 'other_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['type'] = 'uclablib_event_date_block';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
    'uclalib_event' => 'uclalib_event',
  );
  /* Filter criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = '12AM today';
  $handler->display->display_options['filters']['field_event_date_value']['default_to_date'] = '12AM tomorrow';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['other_events'] = $view;

  $view = new view();
  $view->name = 'related_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['type'] = 'uclablib_event_date_block';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'events_and_exhibitions_series' => 'events_and_exhibitions_series',
    'events_categories' => 'events_categories',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'uclalib_event' => 'uclalib_event',
  );
  /* Filter criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['related_events'] = $view;

  return $export;
}
