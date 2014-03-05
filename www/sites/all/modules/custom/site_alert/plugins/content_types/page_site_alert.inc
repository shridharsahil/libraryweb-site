<?php

/**
 * @file
 * Plugin to handle the 'page_alert_title' content type which allows the
 * Alert title for the site to be embedded into a panel.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Site Alert'),
  'single' => TRUE,
  'description' => t('A site wide alert.'),
  'category' => t('Page elements'),
  'render callback' => 'page_site_alert_content_type_render',
  'render last' => TRUE,
);

/**
 * Output function for the 'page_alert_title' content type.
 *
 * Outputs the alert title for the current page.
 */
function page_site_alert_content_type_render($subtype, $conf, $panel_args) {

  $start = variable_get('alerts_start');
  $begin = strtotime($start);
  $alert = variable_get('alerts_expire');
  $expire = strtotime($alert);

  if ($begin < time()) {
    if ($expire > time()) {
      $block = new stdClass();

      $level = variable_get('alerts_severity');
      $severity = $level['value'];
      $output = '<div class=' .$severity .'>';
      $output .= '<div class=text>';

      $alert = variable_get('alerts_content');

      $tags = array('a', 'em', 'strong');
      $output .= filter_xss($alert, $tags);
      $output .= '</div></div>';

      $block->content = $output;

      return $block;
    }
  }
  return;
}
