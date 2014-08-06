<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Navigation'),
  'title' => t("Sibling content."),
  'description' => t("Sinbling content in the menu structure."),

  'required context' => new ctools_context_required(t('Node'), array('node')),

  'edit form'          => 'uclalib_navigation_ctools_content_types_sibling_content_edit_form',
  'render callback' => 'uclalib_navigation_ctools_content_types_sibling_content_render',
);

/**
 * Edit form callback.
 */
function uclalib_navigation_ctools_content_types_sibling_content_edit_form($form, &$form_state) {

  return $form;
}

/**
 * Render callback.
 *
 * "CTools:Content types" plugin render callback for "Uclalib opening hours:Opening hours table".
 *
 * @param string $subtype
 *   Subtype identifier.
 * @param array  $conf
 *   Configuration of the $subtype instance.
 * @param array  $args
 *   Documentation missing.
 * @param array  $pane_context
 *   Documentation missing.
 * @param array  $incoming_content
 *   Documentation missing.
 *
 * @return object
 *   The content.
 */
function uclalib_navigation_ctools_content_types_sibling_content_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  if (isset($pane_context->data) && !empty($pane_context->data)) {
    $node = $pane_context->data;
  }
  else {
    return;
  }

  // We need to clone the node as menu_node_prepare() may cause data loss.
  // @see http://drupal.org/node/1317926
  $menu_node = clone $node;
  menu_node_prepare($menu_node);
  if (!isset($menu_node->menu['mlid']) || empty($menu_node->menu['mlid'])) {
    return;
  }

  $link = $menu_node->menu;

  // Use menu_block module to generate the tree.
  // We fake a configuration for the module.
  $config = array(
    'menu_name' => 'main-menu',
    'parent_mlid' => $link['plid'],
    'level' => 0,
    'follow' => 0,
    'depth' => 5,
    'expanded' => FALSE,
    'delta' => 'sub-content',
    'sort' => FALSE,
    'title_link' => '',
  );
  // menu_tree_build is actually a menu_block.module function.
  $data = menu_tree_build($config);

  // Render the result.
  $output = render($data['content']);

  $block = new stdClass();
  $block->module = 'uclalib_navigation';
  $block->delta = $subtype;
  $block->content = array(
    'content' => array(
      '#type' => 'markup',
      '#markup' => $output,
    ),
  );

  return $block;
}

