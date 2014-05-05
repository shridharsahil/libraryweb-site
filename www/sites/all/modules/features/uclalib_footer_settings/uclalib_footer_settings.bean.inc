<?php
/**
 * @file
 * uclalib_footer_settings.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uclalib_footer_settings_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'colophon_description';
  $bean_type->label = 'Colophon Description';
  $bean_type->options = '';
  $bean_type->description = 'A free-form text block for the colophon.';
  $export['colophon_description'] = $bean_type;

  return $export;
}
