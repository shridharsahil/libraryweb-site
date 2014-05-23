<?php

/**
 * @file
 * Definition of the border blue pane style.
 */

// Plugin definition
$plugin = array(
  'title' => t('UCLA Library: Border blue'),
  'description' => t('Display the pane with a special 1px blue border around it.'),
  'render pane' => 'uclalib_omega_border_blue_render_pane',
  'pane settings form' => 'uclalib_omega_border_blue_settings_form',
  'weight' => -5,
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_uclalib_omega_border_blue_render_pane(&$vars) {
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
    $title_alignment = isset($settings['title_alignment']) ? $settings['title_alignment'] : 'default';

    if ($title_alignment !== 'default') {
      $classes[] = drupal_html_class('pane-title-align-' . $title_alignment);
    }

    if (in_array($title_alignment, array('left', 'right'))) {
      $vars['title_prefix'] = '<div class="pane-title-inline-wrapper">';
      $vars['title_suffix'] = '</div>';
    }
  }

  if (isset($content->css_class)) {
    $content->css_class .= ' ' . implode(' ', $classes);
  } else {
    $content->css_class = implode(' ', $classes);
  }

  return theme('panels_pane', $vars);
}

/**
 * Settings form callback.
 */
function uclalib_omega_border_blue_settings_form($style_settings) {
  $form['title_alignment'] = array(
    '#type' => 'select',
    '#title' => t('Title text alignment'),
    '#options' => array(
      'default' => t('Default'),
      'left' => t('Left'),
      'right' => t('Right'),
      'center' => t('Centered'),
    ),
    '#default_value' => (isset($style_settings['title_alignment'])) ? $style_settings['title_alignment'] : 'default',
  );
  return $form;
}
