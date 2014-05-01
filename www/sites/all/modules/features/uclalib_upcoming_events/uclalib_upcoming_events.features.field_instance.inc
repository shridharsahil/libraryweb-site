<?php
/**
 * @file
 * uclalib_upcoming_events.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uclalib_upcoming_events_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-upcoming_events-field_upcoming_events_events'
  $field_instances['bean-upcoming_events-field_upcoming_events_events'] = array(
    'bundle' => 'upcoming_events',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference_views_formatter',
        'settings' => array(
          'view_display' => 'panel_pane_1',
          'view_name' => 'upcoming_events_display',
        ),
        'type' => 'entityreference_views_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_upcoming_events_events',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-upcoming_events-field_upcoming_news_news'
  $field_instances['bean-upcoming_events-field_upcoming_news_news'] = array(
    'bundle' => 'upcoming_events',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference_views_formatter',
        'settings' => array(
          'view_display' => 'panel_pane_2',
          'view_name' => 'upcoming_events_display',
        ),
        'type' => 'entityreference_views_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_upcoming_news_news',
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
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('News');

  return $field_instances;
}
