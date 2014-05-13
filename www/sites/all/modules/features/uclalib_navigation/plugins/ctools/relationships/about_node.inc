<?php

/**
 * @file
 * Plugin to provide a menu parent node context.
 */

// Plugin definition.
$plugin = array(
  'title' => t('About node'),
  'description' => t('The node in the menu that is the child of the current node menu item and is titled "About"'),
  'context' => 'uclalib_navigation_menu_about_node',
  'context name' => 'menu_about_node',
  'required context' => new ctools_context_required(t('Current page node'), 'node'),
  'keyword' => 'menu_about_node',
);

/**
 * Creates the context.
 */
function uclalib_navigation_menu_about_node($context, $conf = FALSE) {
  if (empty($context->data)) {
    return ctools_context_create_empty('node');
  }

  $node = $context->data;

  if ($about_node = uclalib_navigation_menu_get_about($node)) {
    return ctools_context_create('node', $about_node);
  }
  else {
    return ctools_context_create_empty('node');
  }
}
