<?php

/**
 * @file
 * Definition of the background gray pane style.
 */

// Plugin definition
$plugin = array(
  'title' => t('UCLA Library: Background gray'),
  'description' => t('Display the pane with a gray background.'),
  'render pane' => 'uclalib_omega_background_gray_render_pane',
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_uclalib_omega_background_gray_render_pane($vars) {
  $content = $vars['content'];

  if (empty($content->content)) {
    return;
  }

  // Add a class for theming the the border blue.
  if (isset($content->css_class)) {
    $content->css_class .= ' pane-style-background-gray';
  } else {
    $content->css_class = 'pane-style-background-gray';
  }

  return theme('panels_pane', $vars);
}
