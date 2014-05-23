<?php

/**
 * @file
 * Definition of the background blue pane style.
 */

// Plugin definition
$plugin = array(
  'title' => t('UCLA Library: Background blue'),
  'description' => t('Display the pane with a light blue background.'),
  'render pane' => 'uclalib_omega_background_blue_render_pane',
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_uclalib_omega_background_blue_render_pane($vars) {
  $content = $vars['content'];

  if (empty($content->content)) {
    return;
  }

  // Add a class for theming the the border blue.
  if (isset($content->css_class)) {
    $content->css_class .= ' pane-style-background-blue';
  } else {
    $content->css_class = 'pane-style-background-blue';
  }

  return theme('panels_pane', $vars);
}
