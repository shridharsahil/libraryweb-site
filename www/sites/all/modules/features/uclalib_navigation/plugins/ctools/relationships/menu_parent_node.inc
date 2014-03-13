<?php

/**
 * @file
 * Plugin to provide a menu parent node context.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Menu parent'),
  'description' => t('The node in the menu that is the parent of the current node menu item'),
  'context' => 'uclalib_navigation_menu_parent_node',
  'context name' => 'menu_parent_node',
  'required context' => new ctools_context_required(t('Current page node'), 'node'),
  'keyword' => 'menu_parent_node',
);

/**
 * Creates the context.
 */
function uclalib_navigation_menu_parent_node($context, $conf = FALSE) {
  if (empty($context->data)) {
    return ctools_context_create_empty('node');
  }

  $node = $context->data;

  if ($parent_node = uclalib_navigation_menu_get_parent($node)) {
    return ctools_context_create('node', $parent_node);
  }
  else {
    return ctools_context_create_empty('node');
  }
}
