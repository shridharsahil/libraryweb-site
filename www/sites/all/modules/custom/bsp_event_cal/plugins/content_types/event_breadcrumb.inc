<?php
/**
 * @file
 * Provides the Event breadcrumb pane
 */

$plugin = array(
  'title' => t('Event Breadcrumb'),
  'description' => t('Hierarchal list of the event\'s categories, with links.'),
  'single' => TRUE,
  'render callback' => 'event_breadcrumb_content_type_render',
  'defaults' => array(),
  'edit form' => 'event_breadcrumb_content_type_edit_form',
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
function event_breadcrumb_content_type_render($subtype, $conf, $args, $context) {
  $node = menu_get_object();
  $block = new stdClass();
  $breadcrumb = array();

  // See if any categories have been assigned.
  if (!empty($node->field_event_category[$node->language])) {
    foreach ($node->field_event_category[$node->language] as $x => $cat) {
      $term = taxonomy_term_load($cat['tid']);
      $breadcrumb[] = array(
        'title' => $term->name,
        'href' => 'events/' . date('Y-m') . '/' . $term->tid,
      );
    }
  }

  // Compile the output, if categories were found.
  if (!empty($breadcrumb)) {
    $block->title = '';
    $block->content = theme('links', array('links' => $breadcrumb, 'attributes' => array('class' => 'breadcrumb')));
  }

  return $block;
}

/**
 * 'Edit form' callback for the content type.
 */
function event_breadcrumb_content_type_edit_form($form, &$form_state) {
  return $form;
}
