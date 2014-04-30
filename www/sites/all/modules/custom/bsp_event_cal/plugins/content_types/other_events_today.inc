<?php
/**
 * @file
 * List of other events on this day.
 */

$plugin = array(
  'title' => t('Other events on this day'),
  'description' => t('List of other events on a given day.'),
  'single' => TRUE,
  'render callback' => 'events_today_content_type_render',
  'defaults' => array(),
  'edit form' => 'events_today_content_type_edit_form',
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
function events_today_content_type_render($subtype, $conf, $args, $context) {
  $node = menu_get_object();
  $view_argument = date('Y-m-d', strtotime($node->field_event_date['und'][0]['value']));
  $title_text = date('F jS, Y', strtotime($node->field_event_date['und'][0]['value']));
  $block = new stdClass();

  // Compile the output.
  $output = views_embed_view("events_today", 'default', $view_argument, $node->nid);
  $trimmed = preg_replace('/\s+/', '', strip_tags($output));
  $trimmed = str_replace('Editview', '', $trimmed);
  if (!empty($trimmed)) {
    $block->title = t("Other Events on") . " " . $title_text;
    $block->content = $output;
  }

  return $block;
}

/**
 * 'Edit form' callback for the content type.
 */
function events_today_content_type_edit_form($form, &$form_state) {
  return $form;
}
