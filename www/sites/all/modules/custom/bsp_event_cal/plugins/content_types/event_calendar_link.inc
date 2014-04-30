<?php
/**
 * @file
 * Provides the Event 'back to calendar' link.
 */

$plugin = array(
  'title' => t('Event Calendar Link'),
  'description' => t('Provides the Event "back to calendar" link.'),
  'single' => TRUE,
  'render callback' => 'event_calendar_link_content_type_render',
  'defaults' => array(),
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
function event_calendar_link_content_type_render($subtype, $conf, $args, $context) {
  // $node = menu_get_object();
  $block = new stdClass();

  // Check the referrer.
  $backlink = htmlspecialchars($_SERVER['HTTP_REFERER']);
  $url = parse_url($backlink);
  $path = substr($url['path'], 1);
  $system_path = drupal_lookup_path('source', $path);
  // If it is a link within the calendar and not a valid system path, use it.
  if ($system_path == '' && (substr($url['path'], 0, 7) == '/calendar')) {
    $backlink = $path;
  }
  else { // Just go to the main events page.
    $backlink = 'calendar';
  }

  // Compile the output.
  $block->title = '';
  $block->content = l('< Back to Calendar', $backlink);

  return $block;
}
