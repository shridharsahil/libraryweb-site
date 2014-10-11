<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Global'),
  'title' => t("Event dates"),
  'description' => t("Event dates"),
  'required context' => array(new ctools_context_required(t('Node'), array('node'))),
  'edit form'          => 'uclalib_event_dates_edit_form',
  'render callback' => 'uclalib_event_dates_render',
);

/**
 * Edit form callback.
 */
function uclalib_event_dates_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Render callback.
 *
 * @param string $subtype
 *   Subtype identifier.
 * @param array  $conf
 *   Configuration of the $subtype instance.
 * @param array  $args
 *   Documentation missing.
 * @param array  $pane_context
 *   Documentation missing.
 * @param array  $incoming_content
 *   Documentation missing.
 *
 * @return object
 *   The content.
 */
function uclalib_event_dates_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  if (isset($pane_context[0]->data) && !empty($pane_context[0]->data)) {
    $node = $pane_context[0]->data;
  }
  else {
    return;
  }
  $format = 'l, M j, Y - g:ia';

  $start_date = strtotime($node->field_event_date[LANGUAGE_NONE][0]['value']);
  $end_date = '';
  if (isset($node->field_event_end_date[LANGUAGE_NONE])) {
    $end_date = strtotime($node->field_event_end_date[LANGUAGE_NONE][0]['value']);
  }

  $block = new stdClass();
  $block->title = '';

  // Handle case when end date is empty or the same as the start date.

  if (empty($end_date) || date($format, $start_date) == date($format, $end_date)) {
    $block->content = '<i>' . date($format, $start_date) . '</i>';
  }
  // Only show end date's time, if its on the same day as the start date.
  elseif (date(date_part_format('date', $format), $start_date) == date(date_part_format('date', $format), $end_date)) {
    $block->content = '<i>' . date($format, $start_date) . ' to ' . date(date_part_format('time', $format), $end_date) . '</i>';
  }
  else {
    $block->content = '<i>' . date($format, $start_date) . ' to ' . date($format, $end_date) . '</i>';
  }




  return $block;
}
