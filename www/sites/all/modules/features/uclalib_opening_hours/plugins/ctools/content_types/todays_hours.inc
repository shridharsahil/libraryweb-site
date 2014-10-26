<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Opening Hours'),
  'title' => t("Today's Hours By Node"),
  'description' => t("Today's opening hours for a node"),

  'required context' => array(
    new ctools_context_required(t('Node'), array('node')),
    new ctools_context_optional(t('Fallback Node'), array('node')),
  ),

  'edit form'          => 'uclalib_opening_hours_ctools_content_types_todays_hours_edit_form',
  'render callback' => 'uclalib_opening_hours_ctools_content_types_todays_hours_render',
);

/**
 * Edit form callback.
 */
function uclalib_opening_hours_ctools_content_types_todays_hours_edit_form($form, &$form_state) {

  return $form;
}

/**
 * Render callback.
 *
 * "CTools:Content types" plugin render callback for "Uclalib opening hours:Opening hours table".
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
function uclalib_opening_hours_ctools_content_types_todays_hours_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  if (isset($pane_context[0]->data) && !empty($pane_context[0]->data)) {
    $node = $pane_context[0]->data;
  }
  else {
    return;
  }

  $oh = uclalib_opening_hours_get_node_todays_hours($node->nid);
  if (!$oh) {
    if (isset($pane_context[1]->data) && !empty($pane_context[1]->data)) {
      $node = $pane_context[1]->data;
      $oh = uclalib_opening_hours_get_node_todays_hours($node->nid);
    }
  }

  $output = '';
  if (isset($oh['start_time']) && isset($oh['end_time'])) {
    $start_time = _uclalib_opening_hours_short_time($oh['start_time']);
    $end_time = _uclalib_opening_hours_short_time($oh['end_time']);
    $hours = _uclalib_opening_hours_combine_start_end_times($start_time, $end_time);
    $output .= t("Today's hours") . ': ' . $hours;
  }

  $block = new stdClass();
  $block->module = 'uclalib_opening_hours';
  $block->delta = $subtype;
  $block->content = array(
    'content' => array(
      '#type' => 'markup',
      '#markup' => $output,
    ),
  );

  return $block;
}

/**
 * Get today's opening hours for a given nid.
 *
 * @param $nid
 * @return mixed
 */
function uclalib_opening_hours_get_node_todays_hours($nid) {
  $date = date_create()->format('Y-m-d');
  $oh = db_select('opening_hours', 'oh')
    ->condition('nid', $nid)
    ->fields('oh', array('start_time', 'end_time'))
    ->condition('date', $date)
    ->execute()
    ->fetchAssoc();

  return $oh;
}

