<?php

/**
 * Callback function to supply a list of content types.
 */
function daterangepicker_daterangepicker_ctools_content_types() {
  return array(
    'single' => TRUE,
    'title' => t('Date Range Picker'),
    'icon' => 'icon_daterangepicker.png',
    'description' => t('A date range picker for the Bluespark Calendar'),
    'all contexts' => TRUE,
    'edit form' => 'daterangepicker_content_type_edit_form',
    'category' => t('Calendar'),
  );
}

/**
 * Output function for the 'date range picker' content type.
 */
function daterangepicker_daterangepicker_content_type_render($subtype, $conf, $panel_args, $context) {

  // $context in this case should be tagged as a 'date' context.
  // @TODO: create a custom CTools Date Context?
  $default_date = NULL;
  if (isset($context) && is_array($context) && count($context) > 0) {
    foreach ($context as $ctx) {

      // If we find a context with the keyword 'date', then parse its data into
      // the $default_date argument for the daterangepicker.
      if ($ctx->keyword == 'date') {
        if (($default_date = daterangepicker_parse_isodaterange($ctx->data)) === FALSE) {
          return FALSE;
        }
        break;
      }
    }
  }
  // If nothing was provided by the context, then create a default date. This is
  // currently hardcoded to be the current day.
  if (!$default_date) {
    // Default to the next 14 days
    $default_date = date('l, F j, Y') . ' - ' . date('l, F j, Y', strtotime('+14 days'));

    // Get date from path and use that if present.
    $current_path = '';
    $components = explode('/', current_path());
    foreach ($components as $component) {
      if (preg_match('/[0-9]{4}-[0-9]{2}-[0-9]{2}--[0-9]{4}-[0-9]{2}-[0-9]{2}/', $component)) {
        $default_date = daterangepicker_parse_isodaterange($component);
      }
    }
  }

  // Make a new empty "block" which will be a Pane you can add to your Panel.
  $block = new stdClass();

  // Set the default title of the block, overridden through the UI as well.
  $block->title = t('Select a date range');

  // Call the daterangepicker theme function, and use that for the block content.
  $block->content = theme('daterangepicker', array('default_date' => $default_date));
  return $block;
}

function daterangepicker_content_type_edit_form($form, &$form_state) {
  return $form;
}
