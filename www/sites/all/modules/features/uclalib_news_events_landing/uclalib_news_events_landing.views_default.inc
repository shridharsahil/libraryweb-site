<?php
/**
 * @file
 * uclalib_news_events_landing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_news_events_landing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_events_landing_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'News+Events Landing Page Bean Display';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<a href="news-events/events-agenda">Featured Events</a>';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More News >';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news-events/events-agenda';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="more-link"><a href="news-events/events-agenda">More Events</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link"><a href="/news">More News</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_events_target_id']['id'] = 'field_events_target_id';
  $handler->display->display_options['relationships']['field_events_target_id']['table'] = 'field_data_field_events';
  $handler->display->display_options['relationships']['field_events_target_id']['field'] = 'field_events_target_id';
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  $handler->display->display_options['fields']['bid']['label'] = '';
  $handler->display->display_options['fields']['bid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['bid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['bid']['separator'] = '';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'field_events_target_id';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_class'] = 'events-teaser__date';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_exhibition_start']['relationship'] = 'field_events_target_id';
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
  $handler->display->display_options['fields']['field_exhibition_end']['relationship'] = 'field_events_target_id';
  $handler->display->display_options['fields']['field_exhibition_end']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end']['alter']['text'] = '[field_exhibition_start] to [field_exhibition_end]';
  $handler->display->display_options['fields']['field_exhibition_end']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibition_end']['element_wrapper_class'] = 'events-teaser__dates';
  $handler->display->display_options['fields']['field_exhibition_end']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_exhibition_end_1']['relationship'] = 'field_events_target_id';
  $handler->display->display_options['fields']['field_exhibition_end_1']['ui_name'] = 'Exhibition Label';
  $handler->display->display_options['fields']['field_exhibition_end_1']['label'] = '';
  $handler->display->display_options['fields']['field_exhibition_end_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exhibition_end_1']['alter']['text'] = 'Exhibits';
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
  $handler->display->display_options['fields']['title']['relationship'] = 'field_events_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_events_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body-summary]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '128';
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="event-teaser__type">[field_exhibition_end_1]</div>
<div class="event-teaser__title">[title]</div>
<div class="event-teaser__description">[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'events-teaser__text-wrapper';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Contextual filter: Block: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'bean';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_and_events_bean' => 'news_and_events_bean',
  );

  /* Display: Events  */
  $handler = $view->new_display('panel_pane', 'Events ', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Events';
  $handler->display->display_options['link_url'] = 'news-events/events-agenda';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'events-teaser events-teaser--without-thumbnail';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link"><a href="news-events/events-agenda">More Events</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'title' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Block: Title',
    ),
  );

  /* Display: News */
  $handler = $view->new_display('panel_pane', 'News', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="news">News</a>';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'news';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'news-teaser news-teaser--with-thumbnail';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="more-link"><a href="/news">More News</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="more-link"><a href="/news">More News</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_news_target_id']['id'] = 'field_news_target_id';
  $handler->display->display_options['relationships']['field_news_target_id']['table'] = 'field_data_field_news';
  $handler->display->display_options['relationships']['field_news_target_id']['field'] = 'field_news_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  $handler->display->display_options['fields']['bid']['label'] = '';
  $handler->display->display_options['fields']['bid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['bid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['bid']['separator'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_news_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: News Thumbnail */
  $handler->display->display_options['fields']['field_event_thumbnail']['id'] = 'field_event_thumbnail';
  $handler->display->display_options['fields']['field_event_thumbnail']['table'] = 'field_data_field_event_thumbnail';
  $handler->display->display_options['fields']['field_event_thumbnail']['field'] = 'field_event_thumbnail';
  $handler->display->display_options['fields']['field_event_thumbnail']['relationship'] = 'field_news_target_id';
  $handler->display->display_options['fields']['field_event_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_event_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_thumbnail']['element_wrapper_class'] = 'news-teaser__thumbnail';
  $handler->display->display_options['fields']['field_event_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_thumbnail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_thumbnail']['settings'] = array(
    'image_style' => 'widescreen_medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_news_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_news_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body-summary]';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-teaser__title">[title]</div>
<div class="news-teaser__description">[body]</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'news-teaser__text-wrapper';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'bid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Block: Internal, numeric block ID',
    ),
    'title' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Block: Title',
    ),
  );
  $export['news_events_landing_display'] = $view;

  return $export;
}
