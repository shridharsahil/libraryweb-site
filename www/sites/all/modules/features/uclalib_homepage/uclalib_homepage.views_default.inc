<?php
/**
 * @file
 * uclalib_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_equipment_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Homepage Equipment Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Find Printers, Copiers, and Other Library Equipment';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Block: Links */
  $handler->display->display_options['fields']['field_linklist_links']['id'] = 'field_linklist_links';
  $handler->display->display_options['fields']['field_linklist_links']['table'] = 'field_data_field_linklist_links';
  $handler->display->display_options['fields']['field_linklist_links']['field'] = 'field_linklist_links';
  $handler->display->display_options['fields']['field_linklist_links']['label'] = '';
  $handler->display->display_options['fields']['field_linklist_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linklist_links']['click_sort_column'] = 'field_icon_bundle';
  $handler->display->display_options['fields']['field_linklist_links']['settings'] = array(
    'view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_linklist_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_linklist_links']['multi_type'] = 'ul';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'link_list' => 'link_list',
  );
  /* Filter criterion: Block: Homepage Check (field_homepage_check) */
  $handler->display->display_options['filters']['field_homepage_check_value']['id'] = 'field_homepage_check_value';
  $handler->display->display_options['filters']['field_homepage_check_value']['table'] = 'field_data_field_homepage_check';
  $handler->display->display_options['filters']['field_homepage_check_value']['field'] = 'field_homepage_check_value';
  $handler->display->display_options['filters']['field_homepage_check_value']['value'] = array(
    1 => '1',
  );

  /* Display: Homepage Equipment Block */
  $handler = $view->new_display('block', 'Homepage Equipment Block', 'block');
  $export['homepage_equipment_block'] = $view;

  return $export;
}
