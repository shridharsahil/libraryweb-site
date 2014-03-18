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
  $view->name = 'other_exhibitions';
  $view->description = 'Next exhibitions with an end date of today or later';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other Exhibitions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other Exhibitions';
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
  /* Filter criterion: Content: Exhibition Date - end date (field_exhibition_date:value2) */
  $handler->display->display_options['filters']['field_exhibition_date_value2']['id'] = 'field_exhibition_date_value2';
  $handler->display->display_options['filters']['field_exhibition_date_value2']['table'] = 'field_data_field_exhibition_date';
  $handler->display->display_options['filters']['field_exhibition_date_value2']['field'] = 'field_exhibition_date_value2';
  $handler->display->display_options['filters']['field_exhibition_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_exhibition_date_value2']['expose']['operator_id'] = 'field_exhibition_date_value2_op';
  $handler->display->display_options['filters']['field_exhibition_date_value2']['expose']['label'] = 'Exhibition Date - end date (field_exhibition_date:value2)';
  $handler->display->display_options['filters']['field_exhibition_date_value2']['expose']['operator'] = 'field_exhibition_date_value2_op';
  $handler->display->display_options['filters']['field_exhibition_date_value2']['expose']['identifier'] = 'field_exhibition_date_value2';
  $handler->display->display_options['filters']['field_exhibition_date_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exhibition_date_value2']['default_date'] = '12AM today';
  $handler->display->display_options['filters']['field_exhibition_date_value2']['year_range'] = '-0:+10';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'other-exhibitions';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['other_exhibitions'] = $view;

  return $export;
}
