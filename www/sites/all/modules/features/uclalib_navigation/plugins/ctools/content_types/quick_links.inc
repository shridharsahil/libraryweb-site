<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Navigation'),
  'title' => t("Quick Links"),
  'description' => t("Quick links of current or parent node"),

  'required context' => array(
    new ctools_context_required(t('Node'), array('node')),
    new ctools_context_optional(t('Fallback Node'), array('node')),
  ),

  'edit form'          => 'uclalib_navigation_ctools_content_types_quick_links_edit_form',
  'render callback' => 'uclalib_navigation_ctools_content_types_quick_links_render',
);

/**
 * Edit form callback.
 */
function uclalib_navigation_ctools_content_types_quick_links_edit_form($form, &$form_state) {

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
function uclalib_navigation_ctools_content_types_quick_links_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  if (isset($pane_context[0]->data) && !empty($pane_context[0]->data)) {
    $node = $pane_context[0]->data;
  }
  else {
    return;
  }

  // Try to get the quick links output for current node.
  $ql = uclalib_navigation_get_node_quick_links($node);
  if (!$ql) {
    // If current node doesn't have quick links, try to get the parent's one.
    if (isset($pane_context[1]->data) && !empty($pane_context[1]->data)) {
      $node = $pane_context[1]->data;
      $ql = uclalib_navigation_get_node_quick_links($node);
    }
  }

  if (!empty($ql)) {
    $block = new stdClass();
    $block->module = 'uclalib_navigation';
    $block->delta = $subtype;
    $block->title = t('Quick Links');
    $block->content = array(
      'content' => array(
        '#type' => 'markup',
        '#markup' => $ql,
      ),
    );

    return $block;
  }
}

/**
 * Return the rendered quick links field if avail.
 */
function uclalib_navigation_get_node_quick_links($node) {
  if (isset($node->field_quick_links[LANGUAGE_NONE]) && !empty($node->field_quick_links[LANGUAGE_NONE])) {
    $ql = field_view_field('node', $node, 'field_quick_links', array('label' => 'hidden'));
    $ql = render($ql);
    return $ql;
  }
}

