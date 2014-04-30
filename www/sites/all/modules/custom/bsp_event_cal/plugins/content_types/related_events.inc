<?php
/**
 * @file
 * Provides the Related Events pane
 */

$plugin = array(
  'title' => t('Related Events'),
  'description' => t('List other events today.'),
  'single' => TRUE,
  'render callback' => 'related_events_content_type_render',
  'defaults' => array(),
  'edit form' => 'related_events_content_type_edit_form',
  'category' => array(t('Calendar'), -9),
);

/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time.
 * @param $args
 * @param $context
 *   Context - in this case we don't have any.
 *
 * @return
 *   An object with at least title and content members.
 */
function related_events_content_type_render($subtype, $conf, $args, $context) {
  $node = menu_get_object();
  $events = array();
  $block = new stdClass();
  $lang = 'und';
  $node_date = date('Ymd', strtotime($node->field_event_date[$lang][0]['value']));
  $today = date('Ymd');

  // See if any related nodes exist and are in the future.
  if (!empty($node->field_event_related[$lang])) {
    foreach ($node->field_event_related[$lang] as $x => $related) {
      // Load the related node.
      $related_event = node_load($related['nid']);
      $event_date = date('Ymd', strtotime($related_event->field_event_date[$lang][0]['value']));
      //
      // If the date is newer, show it.
      if ($event_date >= $today) {
        // Add the URI attributes.
        entity_uri('node', $related_event);
        $events[] = $related_event;
      }
    }
  }

  // If there aren't enough events displayed, find some more.
  if (count($events) < intval(variable_get('bsp_event_cal_related_events_count', 3))) {
    // TODO: add this logic.
  }

  // Compile the output, if events were found.
  if (!empty($events)) {
    $block->title = t("Related Events");
    $block->content = theme("related_events", array('events' => $events));
  }

  return $block;
}

/**
 * 'Edit form' callback for the content type.
 */
function related_events_content_type_edit_form($form, &$form_state) {
  return $form;
}
