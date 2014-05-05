<?php

/**
 * @file
 * Definition of the 'column heading' pane style.
 */

// Plugin definition
$plugin = array(
  'title' => t('UCLA Library: Important Column Heading'),
  'description' => t('Display the pane title with a special 1px border through the middle.'),
  'render pane' => 'uclalib_omega_important_column_heading_render_pane',
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_uclalib_omega_important_column_heading_render_pane($vars) {
  $content = $vars['content'];

  if (empty($content->content)) {
    return;
  }

  // Add a wrapper div around the pane-title, for theming purposes.
  if (!empty($content->title)) {
    $vars['title_prefix'] = '<div class="pane-title--important-column-heading">';
    $vars['title_suffix'] = '</div>';
  }
  return theme('panels_pane', $vars);
}
