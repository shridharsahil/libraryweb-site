<?php
/**
 * @file
 * uclalib_libguides.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_libguides_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'libguides_api';
  $view->description = 'Filtered view of LibGuides API beans';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'LibGuides API';
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
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  /* Field: Block: Include description? */
  $handler->display->display_options['fields']['field_lg_api_v1_desc']['id'] = 'field_lg_api_v1_desc';
  $handler->display->display_options['fields']['field_lg_api_v1_desc']['table'] = 'field_data_field_lg_api_v1_desc';
  $handler->display->display_options['fields']['field_lg_api_v1_desc']['field'] = 'field_lg_api_v1_desc';
  /* Field: Block: Number of results */
  $handler->display->display_options['fields']['field_lg_api_v1_limit']['id'] = 'field_lg_api_v1_limit';
  $handler->display->display_options['fields']['field_lg_api_v1_limit']['table'] = 'field_data_field_lg_api_v1_limit';
  $handler->display->display_options['fields']['field_lg_api_v1_limit']['field'] = 'field_lg_api_v1_limit';
  $handler->display->display_options['fields']['field_lg_api_v1_limit']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_lg_api_v1_limit']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Block: Search term */
  $handler->display->display_options['fields']['field_lg_api_v1_search_term']['id'] = 'field_lg_api_v1_search_term';
  $handler->display->display_options['fields']['field_lg_api_v1_search_term']['table'] = 'field_data_field_lg_api_v1_search_term';
  $handler->display->display_options['fields']['field_lg_api_v1_search_term']['field'] = 'field_lg_api_v1_search_term';
  /* Field: Block: Search type */
  $handler->display->display_options['fields']['field_lg_api_v1_search_type']['id'] = 'field_lg_api_v1_search_type';
  $handler->display->display_options['fields']['field_lg_api_v1_search_type']['table'] = 'field_data_field_lg_api_v1_search_type';
  $handler->display->display_options['fields']['field_lg_api_v1_search_type']['field'] = 'field_lg_api_v1_search_type';
  $handler->display->display_options['fields']['field_lg_api_v1_search_type']['type'] = 'list_key';
  /* Field: Block: Show more results? */
  $handler->display->display_options['fields']['field_lg_api_v1_more']['id'] = 'field_lg_api_v1_more';
  $handler->display->display_options['fields']['field_lg_api_v1_more']['table'] = 'field_data_field_lg_api_v1_more';
  $handler->display->display_options['fields']['field_lg_api_v1_more']['field'] = 'field_lg_api_v1_more';
  /* Field: Block: Sort order */
  $handler->display->display_options['fields']['field_lg_api_v1_sortby']['id'] = 'field_lg_api_v1_sortby';
  $handler->display->display_options['fields']['field_lg_api_v1_sortby']['table'] = 'field_data_field_lg_api_v1_sortby';
  $handler->display->display_options['fields']['field_lg_api_v1_sortby']['field'] = 'field_lg_api_v1_sortby';
  $handler->display->display_options['fields']['field_lg_api_v1_sortby']['type'] = 'list_key';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'libguides_api_v1' => 'libguides_api_v1',
  );

  /* Display: LibGuides API pane */
  $handler = $view->new_display('panel_pane', 'LibGuides API pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'LibGuides API pane';
  $export['libguides_api'] = $view;

  return $export;
}
