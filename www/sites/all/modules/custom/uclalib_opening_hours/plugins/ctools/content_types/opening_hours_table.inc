<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Uclalib opening hours'),
  'title' => t('Uclalib opening hours: Opening hours table'),
  'description' => t('Table with the opening hours for a node.'),

  'required context' => new ctools_context_required(t('Node'), array('node')),

  'edit form'          => 'uclalib_opening_hours_ctools_content_types_opening_hours_table_edit_form',
  'render callback' => 'uclalib_opening_hours_ctools_content_types_opening_hours_table_render',
);

/**
 * Edit form callback.
 */
function uclalib_opening_hours_ctools_content_types_opening_hours_table_edit_form($form, &$form_state) {

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
function uclalib_opening_hours_ctools_content_types_opening_hours_table_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $output = '';

  if (isset($pane_context->data) && !empty($pane_context->data)) {
    $node = $pane_context->data;
  }
  else {
    return;
  }

  // Create an interval of 1 day to add to the date for each week day.
  $interval = DateInterval::createFromDateString('1 day');

  // Get the date of the first day of this week.
  $day = date_create('this week');

  // Generate a header with the days of the week.
  $header = array('');
  for ($i = 0; $i < 7; $i++) {
    $day_str = _uclalib_opening_hours_short_day($day->format('w'));
    $header_cell = array('data' => $day_str . ' ' . $day->format('d'));

    // If current day add a class.
    if ($day->format('d') == date_create()->format('d')) {
      $header_cell['class'][] = 'current-day';
    }

    $header[] = $header_cell;

    // Add 1 day.
    $day->add($interval);
  }

  // Check for alternate name.
  $title = isset($node->field_location_oh_name[LANGUAGE_NONE][0]['value']) ?
    $node->field_location_oh_name[LANGUAGE_NONE][0]['value'] : $node->title;

  // List of nodes that will be displayed. By default the passed node.
  $nodes = array(
    $node->nid => check_plain($title),
  );

  if (isset($node->field_location_destinations[LANGUAGE_NONE]) && is_array($node->field_location_destinations[LANGUAGE_NONE])) {
    foreach ($node->field_location_destinations[LANGUAGE_NONE] as $value) {
      if (isset($value['target_id'])) {
        // @todo: avoid node_load.
        $dest_node = node_load($value['target_id']);

        $title = isset($dest_node->field_destination_oh_name[LANGUAGE_NONE][0]['value']) ?
          $dest_node->field_destination_oh_name[LANGUAGE_NONE][0]['value'] : $dest_node->title;
        $nodes[$dest_node->nid] = check_plain($title);
      }
    }
  }

  $rows = array();

  foreach ($nodes as $nid => $title) {
    // Get the first day of the week again.
    $day = date_create('this week');

    // Add the title to the first column.
    $row = array($title);

    // Fetch opening hours for each day.
    for ($i = 0; $i < 7; $i++) {
      $date = $day->format('Y-m-d');
      $oh = db_select('opening_hours', 'oh')
        ->fields('oh', array('start_time', 'end_time'))
        ->condition('nid', $nid)
        ->condition('date', $date)
        ->execute()
        ->fetchAssoc();

      $row_cell = array('data' =>
        _uclalib_opening_hours_short_time($oh['start_time'])
        . '-' .
        _uclalib_opening_hours_short_time($oh['end_time'])
      );

      // If current day add a class.
      if ($day->format('d') == date_create()->format('d')) {
        $row_cell['class'][] = 'current-day';
      }

      $row[] = $row_cell;

      // Add one day.
      $day->add($interval);
    }
    $rows[] = $row;
  }

  $output .= theme('table', array(
    'header' => $header,
    'rows' => $rows,
  ));

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

