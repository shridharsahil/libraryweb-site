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
  $pane = $vars['pane'];

  if (empty($content->content)) {
    return;
  }

  kpr($vars);

  drupal_set_message("Hello world");

  // Add a wrapper div around the panel pane, for theming purposes.
  /*$vars['pane_prefix'] = '<aside class="pane-border-blue">';
  $vars['pane_suffix'] = '</aside>';*/

  if ($pane->css && isset($pane->css['css_class'])) {
    $pane->css['css_class'] .= ' pane-border-blue';
  } else {
    $pane->css['css_class'] = ' pane-border-blue';
  }

  // Add a wrapper div around the pane-title, for theming purposes.
  if (!empty($content->title)) {
    $vars['title_prefix'] = '<div class="pane-border-blue--inline-title">';
    $vars['title_suffix'] = '</div>';
  }

  return theme('panels_pane', $vars);
}
