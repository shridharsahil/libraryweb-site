<?php
/**
 * @file
 * uclalib_bookplates.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_bookplates_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bookplates_full_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_bookplates';
  $view->human_name = 'Bookplates Search';
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Content: Bookplate Author First Name */
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['id'] = 'field_bookplate_author_first_nam';
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['field'] = 'field_bookplate_author_first_nam';
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Bookplate Author Last Name */
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['id'] = 'field_bookplate_author_last_name';
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['field'] = 'field_bookplate_author_last_name';
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Bookplate Description */
  $handler->display->display_options['fields']['field_bookplate_description']['id'] = 'field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplate_description']['field'] = 'field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_description']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_donor_first_name_bookplate_1']['id'] = 'field_donor_first_name_bookplate_1';
  $handler->display->display_options['fields']['field_donor_first_name_bookplate_1']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_donor_first_name_bookplate_1']['field'] = 'field_donor_first_name_bookplate';
  $handler->display->display_options['fields']['field_donor_first_name_bookplate_1']['label'] = '';
  $handler->display->display_options['fields']['field_donor_first_name_bookplate_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_donor_last_name_bookplate']['id'] = 'field_donor_last_name_bookplate';
  $handler->display->display_options['fields']['field_donor_last_name_bookplate']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_donor_last_name_bookplate']['field'] = 'field_donor_last_name_bookplate';
  $handler->display->display_options['fields']['field_donor_last_name_bookplate']['label'] = '';
  $handler->display->display_options['fields']['field_donor_last_name_bookplate']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Bookplate Fund Purpose */
  $handler->display->display_options['fields']['field_bookplate_fund_purpose']['id'] = 'field_bookplate_fund_purpose';
  $handler->display->display_options['fields']['field_bookplate_fund_purpose']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplate_fund_purpose']['field'] = 'field_bookplate_fund_purpose';
  $handler->display->display_options['fields']['field_bookplate_fund_purpose']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_fund_purpose']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Bookplates Subject Area */
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['id'] = 'field_bookplates_subject_area_1';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['field'] = 'field_bookplates_subject_area';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['label'] = '';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['bypass_access'] = 1;
  /* Field: Indexed Content: Spak Code */
  $handler->display->display_options['fields']['field_bookplates_spak_code']['id'] = 'field_bookplates_spak_code';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['field'] = 'field_bookplates_spak_code';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['label'] = '';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplates_spak_code']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['type'] = 'link_default';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['group_column'] = '';
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';

  /* Display: Content Pane */
  $handler = $view->new_display('panel_pane', 'Content Pane', 'bookplates_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Used in solr search';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found for this search.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Node ID */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_bookplates';
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
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    11 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Bookplates Context */
  $handler = $view->new_display('ctools_context', 'Bookplates Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Node ID */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bookplates' => 'bookplates',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    11 => 0,
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['bookplates_full_content'] = $view;

  $view = new view();
  $view->name = 'bookplates_landing_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bookplates Landing Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection Endowment Initiative';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_bookplates_subject_area_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Bookplate Image */
  $handler->display->display_options['fields']['field_bookplate_image']['id'] = 'field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['table'] = 'field_data_field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['field'] = 'field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bookplate_image']['type'] = 'fancybox';
  $handler->display->display_options['fields']['field_bookplate_image']['settings'] = array(
    'fancybox_image_style_content' => 'medium',
    'fancybox_image_style_fancybox' => 'large',
    'fancybox_gallery' => 'post',
    'fancybox_gallery_custom' => '',
    'fancybox_caption' => 'title',
    'fancybox_caption_custom' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '49';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Bookplate Author First Name */
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['id'] = 'field_bookplate_author_first_nam';
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['table'] = 'field_data_field_bookplate_author_first_nam';
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['field'] = 'field_bookplate_author_first_nam';
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bookplate_author_first_nam']['element_label_colon'] = FALSE;
  /* Field: Content: Bookplate Author Last Name */
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['id'] = 'field_bookplate_author_last_name';
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['table'] = 'field_data_field_bookplate_author_last_name';
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['field'] = 'field_bookplate_author_last_name';
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['alter']['text'] = '[field_bookplate_author_first_nam] [field_bookplate_author_last_name]';
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['element_class'] = 'author-name';
  $handler->display->display_options['fields']['field_bookplate_author_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Donor(s) Name(s) */
  $handler->display->display_options['fields']['field_donor_name_bookplates']['id'] = 'field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['table'] = 'field_data_field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['field'] = 'field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['label'] = '';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_donor_name_bookplates']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'bookplates' => 'bookplates',
  );
  /* Filter criterion: Content: Bookplates Subject Area (field_bookplates_subject_area) */
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['id'] = 'field_bookplates_subject_area_tid';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['table'] = 'field_data_field_bookplates_subject_area';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['field'] = 'field_bookplates_subject_area_tid';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['expose']['operator_id'] = 'field_bookplates_subject_area_tid_op';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['expose']['operator'] = 'field_bookplates_subject_area_tid_op';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['expose']['identifier'] = 'field_bookplates_subject_area_tid';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['vocabulary'] = 'collection_endowment_initiative';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['error_message'] = FALSE;

  /* Display: Bookplates Landing Page */
  $handler = $view->new_display('page', 'Bookplates Landing Page', 'bookplates_landing_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'grid-3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'bookplates-landing-page';
  $export['bookplates_landing_page'] = $view;

  return $export;
}
