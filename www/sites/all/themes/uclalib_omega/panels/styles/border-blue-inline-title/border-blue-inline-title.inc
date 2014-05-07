<?php

/**
 * @file
 * Definition of the 'boxed aside' pane style.
 */

// Plugin definition
$plugin = array(
  'title' => t('UCLA Library: Border blue w/ inline title'),
  'description' => t('Display the pane with a special 1px border around it and an inline title.'),
  'render pane' => 'uclalib_omega_border_blue_inline_title_render_pane',
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_uclalib_omega_border_blue_inline_title_render_pane($vars) {
  $content = $vars['content'];

  if (empty($content->content)) {
    return;
  }

  // Add a class for theming the the border blue.
  if (isset($content->css_class)) {
    $content->css_class .= ' pane-style-border-blue pane-style-border-blue--inline-title';
  } else {
    $content->css_class = 'pane-style-border-blue pane-style-border-blue--inline-title';
  }

  // Add a wrapper div around the pane-title, for theming purposes.
  if (!empty($content->title)) {
    $vars['title_prefix'] = '<div class="pane-title-wrapper">';
    $vars['title_suffix'] = '</div>';
  }

  return theme('panels_pane', $vars);
}
