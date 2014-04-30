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
  dpm($context);

  // $context in this case should be tagged as a 'date' context.
  // @TODO: create a custom CTools Date Context?
  $default_date = NULL;
  if (isset($context) && is_array($context) && count($context) > 0) {
    foreach ($context as $ctx) {
      //dsm($ctx);

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
    $default_date = date('l, F j, Y');
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
