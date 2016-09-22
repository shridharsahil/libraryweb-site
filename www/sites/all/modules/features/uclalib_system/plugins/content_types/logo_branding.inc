<?php

/**
 * @file
 * Use logo.svg from the active theme, if present with logo.png fallback.
 */

$plugin = array(
  'title' => t('Site logo (SVG w/ fallback)'),
  'description' => t('Custom SVG Logo with PNG fallback.'),
  'single' => TRUE,
  'render callback' => 'logo_branding_content_type_render',
  'defaults' => array(),
  'category' => array(t('Page elements')),
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
function logo_branding_content_type_render($subtype, $conf, $args, $context) {
  global $theme, $base_path;
  $path_to_theme = drupal_get_path('theme',$theme);

  // This employs a js-based png fallback trick described here:
  // https://css-tricks.com/a-complete-guide-to-svg-fallbacks/
  // Assumes there is both a logo.png and logo.svg in the theme folder.
  $svg = $base_path . $path_to_theme . '/logo.svg';
  $fallback = $base_path . $path_to_theme . '/logo.png';

  // The output.
  $block = new stdClass();
  $block->title = '';
  $block->content = '<img alt="' . t('Home') . '" src="' . $svg . '" onerror="this.src=\'' . $fallback . '\'; this.onerror=null;">';

  if (!drupal_is_front_page()) {
    $url = url('<front>');
    $block->content = '<a href="' . $url . '" rel="home"  title="' . t('Home') . '">' . $block->content . '</a>';
  }
  return $block;
}
