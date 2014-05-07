<?php

/**
 * @file
 * Definition of the 'boxed aside' pane style.
 */

// Plugin definition
$plugin = array(
  'title' => t('UCLA Library: Border blue'),
  'description' => t('Display the pane with a special 1px blue border around it.'),
  'render pane' => 'uclalib_omega_border_blue_render_pane',
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_uclalib_omega_border_blue_render_pane(&$vars) {
  $content = $vars['content'];

  if (empty($content->content)) {
    return;
  }

  // Add a class for theming the the border blue.
  if (isset($content->css_class)) {
    $content->css_class .= ' pane-style-border-blue';
  } else {
    $content->css_class = 'pane-style-border-blue';
  }

  return theme('panels_pane', $vars);
}
