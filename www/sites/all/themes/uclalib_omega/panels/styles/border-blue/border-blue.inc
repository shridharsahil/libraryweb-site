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
function theme_uclalib_omega_border_blue_render_pane($vars) {
  $content = $vars['content'];

  if (empty($content->content)) {
    return;
  }

  kpr($vars);

  drupal_set_message("Hello world");

  // Add a wrapper div around the panel pane, for theming purposes.
  $vars['pane_prefix'] = '<aside class="pane-border-blue">';
  $vars['pane_suffix'] = '</aside>';


  if ($pane->css && isset($pane->css['css_class'])) {
    $pane->css['css_class'] .= ' pane-border-blue';
  } else {
    $pane->css['css_class'] = ' pane-border-blue';
  }

  return theme('panels_pane', $vars);
}
