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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No staff match your search.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
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
  /* Field: Content: Ask Me About */
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['id'] = 'field_staff_area_of_expertise';
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['table'] = 'field_data_field_staff_area_of_expertise';
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['field'] = 'field_staff_area_of_expertise';
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['label'] = '';
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['delta_offset'] = '0';
  /* Field: Content: Staff Academic Dept Liaison */
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['id'] = 'field_staff_acad_dept_liaison';
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['table'] = 'field_data_field_staff_acad_dept_liaison';
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['field'] = 'field_staff_acad_dept_liaison';
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['label'] = '';
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['delta_offset'] = '0';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
    'image_style' => 'staff_profile_photo',
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
  /* Field: Content: Ask Me About */
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['id'] = 'field_staff_area_of_expertise';
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['table'] = 'field_data_field_staff_area_of_expertise';
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['field'] = 'field_staff_area_of_expertise';
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['label'] = '';
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_area_of_expertise']['delta_offset'] = '0';
  /* Field: Content: Staff Academic Dept Liaison */
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['id'] = 'field_staff_acad_dept_liaison';
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['table'] = 'field_data_field_staff_acad_dept_liaison';
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['field'] = 'field_staff_acad_dept_liaison';
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['label'] = '';
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_acad_dept_liaison']['delta_offset'] = '0';
  /* Field: Content: Social Links */
  $handler->display->display_options['fields']['field_location_social_links']['id'] = 'field_location_social_links';
  $handler->display->display_options['fields']['field_location_social_links']['table'] = 'field_data_field_location_social_links';
  $handler->display->display_options['fields']['field_location_social_links']['field'] = 'field_location_social_links';
  $handler->display->display_options['fields']['field_location_social_links']['label'] = '';
  $handler->display->display_options['fields']['field_location_social_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_social_links']['click_sort_column'] = 'field_social_link_url';
  $handler->display->display_options['fields']['field_location_social_links']['type'] = 'social_links';
  $handler->display->display_options['fields']['field_location_social_links']['settings'] = array(
    'view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_location_social_links']['delta_offset'] = '0';
  /* Field: Content: Social Links (field_location_social_links:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_location_social_links';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delta']['separator'] = '';
  /* Field: Field: Text Block */
  $handler->display->display_options['fields']['field_text_block']['id'] = 'field_text_block';
  $handler->display->display_options['fields']['field_text_block']['table'] = 'field_data_field_text_block';
  $handler->display->display_options['fields']['field_text_block']['field'] = 'field_text_block';
  $handler->display->display_options['fields']['field_text_block']['label'] = '';
  $handler->display->display_options['fields']['field_text_block']['element_label_colon'] = FALSE;
  /* Field: Field: Text Block */
  $handler->display->display_options['fields']['field_text_block_1']['id'] = 'field_text_block_1';
  $handler->display->display_options['fields']['field_text_block_1']['table'] = 'field_data_field_text_block';
  $handler->display->display_options['fields']['field_text_block_1']['field'] = 'field_text_block';
  $handler->display->display_options['fields']['field_text_block_1']['label'] = '';
  $handler->display->display_options['fields']['field_text_block_1']['element_label_colon'] = FALSE;

  /* Display: Subject Librarians */
  $handler = $view->new_display('panel_pane', 'Subject Librarians', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Staff profiles for subject librarians';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_staff_first_name' => 'field_staff_first_name',
    'field_staff_last_name' => 'field_staff_last_name',
    'name' => 'name',
    'nothing' => 'nothing',
    'field_staff_phone' => 'field_staff_phone',
    'field_staff_email' => 'field_staff_email',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'academic_departmental_liaison' => 'academic_departmental_liaison',
    'area_of_expertise' => 0,
    'audience' => 0,
    'events_and_exhibitions_series' => 0,
    'events_categories' => 0,
    'location_amenities' => 0,
    'location_equipment' => 0,
    'location_study_areas' => 0,
    'media_subject' => 0,
    'media_tags' => 0,
    'news_categories' => 0,
    'resource_categories' => 0,
    'staff_departments' => 0,
    'staff_subject_areas' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Staff Academic Dept. Liaison */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Staff Academic Dept. Liaison';
  $handler->display->display_options['fields']['name']['label'] = 'Departmental Liaison';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Staff Full Name (First Last) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Staff Full Name (First Last)';
  $handler->display->display_options['fields']['nothing']['label'] = 'Name';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[field_staff_first_name] [field_staff_last_name]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Phone */
  $handler->display->display_options['fields']['field_staff_phone']['id'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['table'] = 'field_data_field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['field'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_staff_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Email */
  $handler->display->display_options['fields']['field_staff_email']['id'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['table'] = 'field_data_field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['field'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['label'] = 'Email';
  $handler->display->display_options['fields']['field_staff_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Staff Academic Dept. Liaison */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['sorts']['name']['ui_name'] = 'Staff Academic Dept. Liaison';
  /* Sort criterion: Content: Staff Last Name (field_staff_last_name) */
  $handler->display->display_options['sorts']['field_staff_last_name_value']['id'] = 'field_staff_last_name_value';
  $handler->display->display_options['sorts']['field_staff_last_name_value']['table'] = 'field_data_field_staff_last_name';
  $handler->display->display_options['sorts']['field_staff_last_name_value']['field'] = 'field_staff_last_name_value';
  /* Sort criterion: Content: Staff First Name (field_staff_first_name) */
  $handler->display->display_options['sorts']['field_staff_first_name_value']['id'] = 'field_staff_first_name_value';
  $handler->display->display_options['sorts']['field_staff_first_name_value']['table'] = 'field_data_field_staff_first_name';
  $handler->display->display_options['sorts']['field_staff_first_name_value']['field'] = 'field_staff_first_name_value';
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
