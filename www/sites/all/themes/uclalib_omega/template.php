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
    if (isset($vars['content']['bean']) && is_array($vars['content']['bean'])) {
      $bean_info = current($vars['content']['bean']);
      $bean_type = $bean_info['#bundle'];
      $bean_class = drupal_html_class('pane-bean-' . $bean_type);

      // Replace class 'pane-block' with more useful 'pane-bean-$bean-type';
      $found = FALSE;
      foreach ($vars['classes_array'] as $index => $block_class) {
        if ($block_class == 'pane-block') {
          $vars['classes_array'][$index] = $bean_class;
          $found = TRUE;
          break;
        }
      }
      // If we couldnt find the pane-block class, add the new class to the end.
      if (!$found) {
        $vars['classes_array'][] = $bean_class;
      }
    }
  }
}
