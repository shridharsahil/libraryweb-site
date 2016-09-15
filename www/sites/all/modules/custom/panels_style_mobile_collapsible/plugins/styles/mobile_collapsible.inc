<?php


/**
 * @file
 * Definition of the mobile collapsible panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('Collapsible only on mobile devices'),
  'description' => t('Allows the panel pane to be collapsed.'),
  'render region' => 'panels_style_mobile_collapsible_render_region',
  'render pane' => 'panels_style_mobile_collapsible_render_pane',
  'settings form' => 'panels_style_mobile_collapsible_region_settings_form',
  'pane settings form' => 'panels_style_mobile_collapsible_pane_settings_form',
);

/**
 * Settings form callback for region settings.
 */
function panels_style_mobile_collapsible_region_settings_form($style_settings) {
  $form = array();
  $form['region_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#description' => t('Title used as clickable text to open / close collapsed region.'),
    '#required' => TRUE,
    '#default_value' => (isset($style_settings['region_title'])) ? $style_settings['region_title'] : ''
  );
  $form['region_collapsed'] = array(
    '#type' => 'checkbox',
    '#title' => t('Collapsed by default'),
    '#default_value' => (isset($style_settings['region_collapsed'])) ? $style_settings['region_collapsed'] : 0
  );
  return $form;
}

/**
 * Settings form callback for pane settings.
 */
function panels_style_mobile_collapsible_pane_settings_form($style_settings) {
  $form = array();
  $form['pane_collapsed'] = array(
    '#type' => 'checkbox',
    '#title' => t('Collapsed by default'),
    '#default_value' => (isset($style_settings['pane_collapsed'])) ? $style_settings['pane_collapsed'] : 0
  );
  return $form;
}

/**
 * Render callback for regions.
 *
 * @ingroup themeable
 */
function theme_panels_style_mobile_collapsible_render_region($vars) {
  $settings = $vars['settings'];

  $content = implode('<div class="panel-separator"></div>', $vars['panes']);

  ctools_include('collapsible.theme');

  if (empty($settings['region_title'])) {
    $settings['region_title'] = '<empty>';
  }
  if (empty($settings['region_collapsed'])) {
    $settings['region_collapsed'] = FALSE;
  }
  $title = ctools_context_keyword_substitute($settings['region_title'], array(), $vars['display']->context);
  $output = theme('panels_style_mobile_collapsible', array('handle' => $title, 'content' => $content, 'collapsed' => $settings['region_collapsed']));
  return $output;
}

/**
 * Render callback for panes.
 *
 * @ingroup themeable
 */
function theme_panels_style_mobile_collapsible_render_pane($vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];
  $settings = $vars['settings'];

  if (empty($content->content)) {
    return;
  }
  if (empty($settings['pane_collapsed'])) {
    $settings['pane_collapsed'] = 0;
  }

  $classes_array = _panels_style_mobile_collapsible_classes($content);

  $output = theme('mobile_collapsible', array(
    'title' => $content->title,
    'content' => $content->content,
    'collapsed' => $settings['pane_collapsed'],
    'custom_classes_array' => $classes_array,
    'panel_pane_classes' => TRUE
    )
  );

  return $output;
}


/**
 * Support unique classes for panel panes as they are used for styling.
 * Copied from template_preprocess_panels_pane.
 */
function _panels_style_mobile_collapsible_classes($content) {
  $classes_array = array();

  $classes_array[] = 'panel-pane';

  // Add some usable classes based on type/subtype
  ctools_include('cleanstring');
  $type_class = $content->type ? 'pane-'. ctools_cleanstring($content->type, array('lower case' => TRUE)) : '';
  $subtype_class = $content->subtype ? 'pane-'. ctools_cleanstring($content->subtype, array('lower case' => TRUE)) : '';

  // Sometimes type and subtype are the same. Avoid redundant classes.
  $classes_array[] = $type_class;
  if ($type_class != $subtype_class) {
    $classes_array[] = $subtype_class;
  }

  return $classes_array;
}
