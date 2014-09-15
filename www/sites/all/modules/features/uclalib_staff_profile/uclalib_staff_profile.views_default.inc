<?php
/**
 * @file
 * uclalib_staff_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_staff_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff_profiles';
  $view->description = 'View(s) of staff profiles';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Staff Profiles';
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Staff First Name */
  $handler->display->display_options['fields']['field_staff_first_name']['id'] = 'field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['table'] = 'field_data_field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['field'] = 'field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_staff_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Last Name */
  $handler->display->display_options['fields']['field_staff_last_name']['id'] = 'field_staff_last_name';
  $handler->display->display_options['fields']['field_staff_last_name']['table'] = 'field_data_field_staff_last_name';
  $handler->display->display_options['fields']['field_staff_last_name']['field'] = 'field_staff_last_name';
  $handler->display->display_options['fields']['field_staff_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_staff_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Image Thumbnail */
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['id'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['table'] = 'field_data_field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['field'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Staff Full Name (First Last) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Staff Full Name (First Last)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[field_staff_first_name] [field_staff_last_name]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Subject Areas */
  $handler->display->display_options['fields']['field_staff_subject_areas']['id'] = 'field_staff_subject_areas';
  $handler->display->display_options['fields']['field_staff_subject_areas']['table'] = 'field_data_field_staff_subject_areas';
  $handler->display->display_options['fields']['field_staff_subject_areas']['field'] = 'field_staff_subject_areas';
  $handler->display->display_options['fields']['field_staff_subject_areas']['label'] = '';
  $handler->display->display_options['fields']['field_staff_subject_areas']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Location */
  $handler->display->display_options['fields']['field_staff_location']['id'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['table'] = 'field_data_field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['field'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['label'] = '';
  $handler->display->display_options['fields']['field_staff_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_location']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Staff Phone */
  $handler->display->display_options['fields']['field_staff_phone']['id'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['table'] = 'field_data_field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['field'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Email */
  $handler->display->display_options['fields']['field_staff_email']['id'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['table'] = 'field_data_field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['field'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_email']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Staff Last Name (field_staff_last_name) */
  $handler->display->display_options['sorts']['field_staff_last_name_value']['id'] = 'field_staff_last_name_value';
  $handler->display->display_options['sorts']['field_staff_last_name_value']['table'] = 'field_data_field_staff_last_name';
  $handler->display->display_options['sorts']['field_staff_last_name_value']['field'] = 'field_staff_last_name_value';
  /* Sort criterion: Content: Staff First Name (field_staff_first_name) */
  $handler->display->display_options['sorts']['field_staff_first_name_value']['id'] = 'field_staff_first_name_value';
  $handler->display->display_options['sorts']['field_staff_first_name_value']['table'] = 'field_data_field_staff_first_name';
  $handler->display->display_options['sorts']['field_staff_first_name_value']['field'] = 'field_staff_first_name_value';
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
    'staff_profile' => 'staff_profile',
  );

  /* Display: Master display */
  $handler = $view->new_display('panel_pane', 'Master display', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Unfiltered listing of staff profile data';

  /* Display: Subject Librarians */
  $handler = $view->new_display('panel_pane', 'Subject Librarians', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Staff profiles for subject librarians';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'staff_profile' => 'staff_profile',
  );
  /* Filter criterion: Content: Staff Subject Librarian (field_staff_is_subject_librarian) */
  $handler->display->display_options['filters']['field_staff_is_subject_librarian_value']['id'] = 'field_staff_is_subject_librarian_value';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian_value']['table'] = 'field_data_field_staff_is_subject_librarian';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian_value']['field'] = 'field_staff_is_subject_librarian_value';
  $handler->display->display_options['filters']['field_staff_is_subject_librarian_value']['value'] = array(
    1 => '1',
  );
  $export['staff_profiles'] = $view;

  return $export;
}
