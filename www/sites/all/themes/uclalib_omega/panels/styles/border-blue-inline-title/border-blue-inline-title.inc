<?php

/**
 * @file
 * Definition of the border blue inline title pane style.
 */

// Plugin definition
$plugin = array(
  'title' => t('UCLA Library: Border blue w/ inline title'),
  'description' => t('Display the pane with a special 1px border around it and an inline title.'),
  'render pane' => 'uclalib_omega_border_blue_inline_title_render_pane',
  'pane settings form' => 'uclalib_omega_border_blue_inline_title_settings_form',
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_uclalib_omega_border_blue_inline_title_render_pane($vars) {
  $content = $vars['content'];
  $settings = $vars['settings'];
  $classes = array();

  if (empty($content->content)) {
    return;
  }

  // Add a class for the border blue pane style.
  $classes[] = 'pane-style-border-blue';

  // Add classes and wrapper divs to accomodate custom title alignment.
  if (!empty($content->title)) {
    $vars['title_prefix'] = '<div class="pane-title-inline-wrapper">';
    $vars['title_suffix'] = '</div>';
  }

  if (isset($content->css_class)) {
    $content->css_class .= ' ' . implode(' ', $classes);
  } else {
    $content->css_class = implode(' ', $classes);
  }

  return theme('panels_pane', $vars);
}
