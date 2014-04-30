<?php
/**
 * @file
 * uclalib_news_events_landing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uclalib_news_events_landing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-news_and_events_bean-field_events'
  $field_instances['bean-news_and_events_bean-field_events'] = array(
    'bundle' => 'news_and_events_bean',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field can have unlimited events and exhibitions, but only the first 10 will be displayed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference_views_formatter',
        'settings' => array(
          'view_display' => 'panel_pane_1',
          'view_name' => 'news_events_landing_display',
        ),
        'type' => 'entityreference_views_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_events',
    'label' => 'Events',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 1,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'bean-news_and_events_bean-field_news'
  $field_instances['bean-news_and_events_bean-field_news'] = array(
    'bundle' => 'news_and_events_bean',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This list can contain unlimited news items, but only the first 10 will ever be displayed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference_views_formatter',
        'settings' => array(
          'view_display' => 'panel_pane_2',
          'view_name' => 'news_events_landing_display',
        ),
        'type' => 'entityreference_views_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_news',
    'label' => 'News',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 1,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('News');
  t('This field can have unlimited events and exhibitions, but only the first 10 will be displayed.');
  t('This list can contain unlimited news items, but only the first 10 will ever be displayed.');

  return $field_instances;
}
