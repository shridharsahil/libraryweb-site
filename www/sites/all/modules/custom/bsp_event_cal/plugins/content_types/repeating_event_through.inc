<?php
/**
 * @file
 * Provides the Repeating Event Through pane
 */

$plugin = array(
  'title' => t('Repeating Event Through'),
  'description' => t('Display the date through when a repeating event is active.'),
  'single' => TRUE,
  'render callback' => 'repeating_event_through_content_type_render',
  'defaults' => array(),
  'edit form' => 'repeating_event_through_content_type_edit_form',
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
function repeating_event_through_content_type_render($subtype, $conf, $args, $context) {
  $node = menu_get_object();
  $block = new stdClass();

  // Compile the output, if categories were found.
  if (!empty($node->date_through)) {
    $block->title = 'Through';
    $block->content = theme('event_repeat_through', array('node' => $node, 'bare' => TRUE));
  }

  return $block;
}

/**
 * 'Edit form' callback for the content type.
 */
function repeating_event_through_content_type_edit_form($form, &$form_state) {
  return $form;
}
