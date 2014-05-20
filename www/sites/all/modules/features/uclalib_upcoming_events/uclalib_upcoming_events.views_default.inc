<?php
/**
 * @file
 * uclalib_upcoming_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_upcoming_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'recent_news_highlight';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recent News Highlight ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News <i class="icon icon-news"></i>';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="more-link"> <a href="news?f[0]=field_news_categories%3A!1&f[1]=field_news_location%3A!2">More</a></div>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  /* Field: Content: News Image */
  $handler->display->display_options['fields']['field_news_image']['id'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['table'] = 'field_data_field_news_image';
  $handler->display->display_options['fields']['field_news_image']['field'] = 'field_news_image';
  $handler->display->display_options['fields']['field_news_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_image']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_news_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_image']['settings'] = array(
    'image_style' => 'featured_content_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: News items by categories */
  $handler->display->display_options['arguments']['field_news_categories_tid']['id'] = 'field_news_categories_tid';
  $handler->display->display_options['arguments']['field_news_categories_tid']['table'] = 'field_data_field_news_categories';
  $handler->display->display_options['arguments']['field_news_categories_tid']['field'] = 'field_news_categories_tid';
  $handler->display->display_options['arguments']['field_news_categories_tid']['ui_name'] = 'News items by categories';
  $handler->display->display_options['arguments']['field_news_categories_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_news_categories_tid']['default_argument_options']['code'] = 'function uclalib-omega_form_alter(&$form, $form_state, $form_id) {
    if(isset($form_state[\'pane\'])) {        
      // You have to test if the field exists
        if(in_array($form_state[\'pane\']->subtype, array("filtered_entities-block_input_category"))) { // filtered_entities is the view name, block_input_category is the display name
            // field_type_activity_tid is the id of the field you want to replace by a select input
            // You can find this id by inspecting the input field, get the id (should look like edit-arguments-field-type-activity-tid), remove "edit-arguments" and transform dashes to underscores. You have your id.
            $form["arguments"]["field_type_activity_tid"]["#type"] = "select";
            $form["arguments"]["field_type_activity_tid"]["#options"] = _uclalib-omega_taxonomy_select(3, 0, 1);
        }
    }
}

// The first argument (3) is the vocabulary id. You can find it in the taxonomy_vocabulary table
// The second argument is the depth
function __uclalib-omega_taxonomy_select_taxonomy_select($vid, $parent = 0, $depth = NULL) {
    $terms = taxonomy_get_tree($vid, $parent, $depth);

    foreach ($terms as $data) {
        $output[$data->tid] = $data->name;
    }

    return $output;
}
';
  $handler->display->display_options['arguments']['field_news_categories_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_categories_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_categories_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_categories_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_categories_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_news_categories_tid']['validate_options']['vocabularies'] = array(
    'news_categories' => 'news_categories',
  );
  $handler->display->display_options['arguments']['field_news_categories_tid']['validate_options']['type'] = 'tids';
  /* Contextual filter: Content: News Location (field_news_location) */
  $handler->display->display_options['arguments']['field_news_location_target_id']['id'] = 'field_news_location_target_id';
  $handler->display->display_options['arguments']['field_news_location_target_id']['table'] = 'field_data_field_news_location';
  $handler->display->display_options['arguments']['field_news_location_target_id']['field'] = 'field_news_location_target_id';
  $handler->display->display_options['arguments']['field_news_location_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_news_location_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_location_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_location_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_location_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_location_target_id']['validate']['fail'] = 'ignore';
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
    'news' => 'news',
  );

  /* Display: Recent News with Images */
  $handler = $view->new_display('panel_pane', 'Recent News with Images', 'panel_pane_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: News items by categories */
  $handler->display->display_options['arguments']['field_news_categories_tid']['id'] = 'field_news_categories_tid';
  $handler->display->display_options['arguments']['field_news_categories_tid']['table'] = 'field_data_field_news_categories';
  $handler->display->display_options['arguments']['field_news_categories_tid']['field'] = 'field_news_categories_tid';
  $handler->display->display_options['arguments']['field_news_categories_tid']['ui_name'] = 'News items by categories';
  $handler->display->display_options['arguments']['field_news_categories_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_news_categories_tid']['default_argument_options']['code'] = 'function uclalib-omega_form_alter(&$form, $form_state, $form_id) {
    if(isset($form_state[\'pane\'])) {        
      // You have to test if the field exists
        if(in_array($form_state[\'pane\']->subtype, array("filtered_entities-block_input_category"))) { // filtered_entities is the view name, block_input_category is the display name
            // field_type_activity_tid is the id of the field you want to replace by a select input
            // You can find this id by inspecting the input field, get the id (should look like edit-arguments-field-type-activity-tid), remove "edit-arguments" and transform dashes to underscores. You have your id.
            $form["arguments"]["field_type_activity_tid"]["#type"] = "select";
            $form["arguments"]["field_type_activity_tid"]["#options"] = _uclalib-omega_taxonomy_select(3, 0, 1);
        }
    }
}

// The first argument (3) is the vocabulary id. You can find it in the taxonomy_vocabulary table
// The second argument is the depth
function __uclalib-omega_taxonomy_select_taxonomy_select($vid, $parent = 0, $depth = NULL) {
    $terms = taxonomy_get_tree($vid, $parent, $depth);

    foreach ($terms as $data) {
        $output[$data->tid] = $data->name;
    }

    return $output;
}
';
  $handler->display->display_options['arguments']['field_news_categories_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_categories_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_categories_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_categories_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_categories_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_news_categories_tid']['validate_options']['vocabularies'] = array(
    'news_categories' => 'news_categories',
  );
  $handler->display->display_options['arguments']['field_news_categories_tid']['validate_options']['type'] = 'tids';
  /* Contextual filter: Content: News Location (field_news_location) */
  $handler->display->display_options['arguments']['field_news_location_target_id']['id'] = 'field_news_location_target_id';
  $handler->display->display_options['arguments']['field_news_location_target_id']['table'] = 'field_data_field_news_location';
  $handler->display->display_options['arguments']['field_news_location_target_id']['field'] = 'field_news_location_target_id';
  $handler->display->display_options['arguments']['field_news_location_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_news_location_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_location_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_location_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_location_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_location_target_id']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_news_location_target_id']['break_phrase'] = TRUE;
  $handler->display->display_options['pane_description'] = 'Display news categories by selected cateories';
  $handler->display->display_options['argument_input'] = array(
    'field_news_categories_tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'News items by category',
    ),
    'field_destination_location_target_id' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'News items by Location',
    ),
    'field_staff_subject_areas_tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'News items by Subject Area',
    ),
    'field_news_location_target_id' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: News Location (field_news_location)',
    ),
  );

  /* Display: Recent News No Images */
  $handler = $view->new_display('panel_pane', 'Recent News No Images', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_news_categories_tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'News items by categories',
    ),
    'field_news_location_target_id' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: News Location (field_news_location)',
    ),
  );
  $export['recent_news_highlight'] = $view;

  $view = new view();
  $view->name = 'upcoming_events_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Upcoming Events Bean Display';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More News >';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news-events/events-agenda';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_upcoming_events_events_target_id']['id'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['relationships']['field_upcoming_events_events_target_id']['table'] = 'field_data_field_upcoming_events_events';
  $handler->display->display_options['relationships']['field_upcoming_events_events_target_id']['field'] = 'field_upcoming_events_events_target_id';
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  $handler->display->display_options['fields']['bid']['label'] = '';
  $handler->display->display_options['fields']['bid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['bid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['bid']['separator'] = '';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['relationship'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'widescreen_small',
    'image_link' => '',
  );
  /* Field: Content: Exhibition Image */
  $handler->display->display_options['fields']['field_exhibition_image']['id'] = 'field_exhibition_image';
  $handler->display->display_options['fields']['field_exhibition_image']['table'] = 'field_data_field_exhibition_image';
  $handler->display->display_options['fields']['field_exhibition_image']['field'] = 'field_exhibition_image';
  $handler->display->display_options['fields']['field_exhibition_image']['relationship'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['fields']['field_exhibition_image']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibition_image']['settings'] = array(
    'image_style' => 'widescreen_small',
    'image_link' => '',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['type'] = 'uclablib_event_date_block';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Exhibition Start Date */
  $handler->display->display_options['fields']['field_exhibition_start']['id'] = 'field_exhibition_start';
  $handler->display->display_options['fields']['field_exhibition_start']['table'] = 'field_data_field_exhibition_start';
  $handler->display->display_options['fields']['field_exhibition_start']['field'] = 'field_exhibition_start';
  $handler->display->display_options['fields']['field_exhibition_start']['relationship'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['fields']['field_exhibition_start']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_start']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_start']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_start']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_start']['type'] = 'uclablib_event_date_block';
  $handler->display->display_options['fields']['field_exhibition_start']['settings'] = array(
    'format_type' => 'month_with_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Exhibition End Date */
  $handler->display->display_options['fields']['field_exhibition_end']['id'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['table'] = 'field_data_field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['field'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end']['relationship'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['fields']['field_exhibition_end']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['text'] = '[field_exhibition_start] to [field_exhibition_end]';
  $handler->display->display_options['fields']['field_exhibition_end']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_end']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end']['type'] = 'uclablib_event_date_block';
  $handler->display->display_options['fields']['field_exhibition_end']['settings'] = array(
    'format_type' => 'month_with_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Exhibition Label */
  $handler->display->display_options['fields']['field_exhibition_end_1']['id'] = 'field_exhibition_end_1';
  $handler->display->display_options['fields']['field_exhibition_end_1']['table'] = 'field_data_field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end_1']['field'] = 'field_exhibition_end';
  $handler->display->display_options['fields']['field_exhibition_end_1']['relationship'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['fields']['field_exhibition_end_1']['ui_name'] = 'Exhibition Label';
  $handler->display->display_options['fields']['field_exhibition_end_1']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_end_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end_1']['alter']['text'] = 'Exhibition:';
  $handler->display->display_options['fields']['field_exhibition_end_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_end_1']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_exhibition_end_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['relationship'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['fields']['field_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['alter']['text'] = '[field_event_location] - ';
  $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_location']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Exhibition Location */
  $handler->display->display_options['fields']['field_exhibition_location']['id'] = 'field_exhibition_location';
  $handler->display->display_options['fields']['field_exhibition_location']['table'] = 'field_data_field_exhibition_location';
  $handler->display->display_options['fields']['field_exhibition_location']['field'] = 'field_exhibition_location';
  $handler->display->display_options['fields']['field_exhibition_location']['relationship'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['fields']['field_exhibition_location']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_location']['alter']['text'] = '[field_exhibition_location] - ';
  $handler->display->display_options['fields']['field_exhibition_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_location']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_exhibition_location']['delta_offset'] = '0';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['relationship'] = 'field_upcoming_events_events_target_id';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'format_type' => 'bsp_event_cal_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>[field_exhibition_end_1]</div>
<div>[title]</div>
<div><i>[field_event_location][field_exhibition_location][field_event_date_2]</i></div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Block: Internal, numeric block ID */
  $handler->display->display_options['arguments']['bid']['id'] = 'bid';
  $handler->display->display_options['arguments']['bid']['table'] = 'bean';
  $handler->display->display_options['arguments']['bid']['field'] = 'bid';
  $handler->display->display_options['arguments']['bid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['bid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'upcoming_events' => 'upcoming_events',
  );

  /* Display: Upcoming Events Block Display */
  $handler = $view->new_display('block', 'Upcoming Events Block Display', 'upcoming_events_display');
  $export['upcoming_events_display'] = $view;

  $view = new view();
  $view->name = 'upcoming_events_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events Reference Dialog Search';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'exhibition' => 'exhibition',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'today';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_event_date.field_event_date_value' => 'field_data_field_event_date.field_event_date_value',
    'field_data_field_exhibition_end.field_exhibition_end_value' => 'field_data_field_exhibition_end.field_exhibition_end_value',
  );

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'bean:field_events:news_and_events_bean',
    1 => 'bean:field_upcoming_events_events:upcoming_events',
  );
  $export['upcoming_events_reference'] = $view;

  $view = new view();
  $view->name = 'upcoming_news_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Reference Dialog Search';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'news' => 'news',
  );

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'bean:field_news:news_and_events_bean',
    1 => 'bean:field_upcoming_news_news:upcoming_events',
  );
  $export['upcoming_news_reference'] = $view;

  return $export;
}
