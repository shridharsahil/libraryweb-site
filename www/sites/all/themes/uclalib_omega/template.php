<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * UCLALIB Omega theme.
 */

/**
 * Implements template_preprocess_panels_pane().
 *
 * Add bean type as a class to bean panes.
 */
function uclalib_omega_preprocess_panels_pane(&$vars) {
  if ($vars['pane']->type == 'block') {
    if (isset($vars['content']['bean'])) {
      $bean_info = current($vars['content']['bean']);
      $bean_type = $bean_info['#bundle'];
      $vars['classes_array'][] = 'bean--' . $bean_type;
    }
  }
}
