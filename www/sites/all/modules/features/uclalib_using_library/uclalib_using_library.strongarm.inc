<?php
/**
 * @file
 * uclalib_using_library.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uclalib_using_library_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_bean:upcoming_events_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:30:"panelizer_bean:upcoming_events";s:23:"allowed_layout_settings";a:25:{s:10:"omega:hero";b:1;s:12:"omega:simple";b:1;s:16:"omega:off-canvas";b:1;s:12:"omega:divine";b:1;s:11:"omega:basic";b:1;s:8:"flexible";b:1;s:24:"flexible:location_layout";b:1;s:31:"flexible:location_search_result";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:5:"naked";b:1;s:8:"mondrian";b:1;s:6:"grid-3";b:1;s:6:"grid-2";b:1;s:6:"golden";b:1;s:18:"sidebar-left-right";b:1;s:12:"sidebar-left";b:1;s:8:"homepage";b:1;s:17:"grid-sidebar-left";b:1;}s:10:"form_state";N;}';
  $export['panelizer_bean:upcoming_events_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_bean:upcoming_events_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_bean:upcoming_events_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_bean:upcoming_events_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_bean:upcoming_events_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_bean:upcoming_events_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'menu_tree' => 'menu_tree',
    'panels_mini' => 'panels_mini',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_bean:upcoming_events_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_bean_upcoming_events';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(),
  );
  $export['panelizer_defaults_bean_upcoming_events'] = $strongarm;

  return $export;
}
