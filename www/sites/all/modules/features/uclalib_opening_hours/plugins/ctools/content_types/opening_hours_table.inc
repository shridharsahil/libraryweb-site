<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Opening Hours'),
  'title' => t('Opening hours table'),
  'description' => t('Table with the opening hours for a node.'),

  'required context' => new ctools_context_required(t('Node'), array('node')),

  'edit form'          => 'uclalib_opening_hours_ctools_content_types_opening_hours_table_edit_form',
  'render callback' => 'uclalib_opening_hours_ctools_content_types_opening_hours_table_render',
);

/**
 * Edit form callback.
 */
function uclalib_opening_hours_ctools_content_types_opening_hours_table_edit_form($form, &$form_state) {

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
function uclalib_opening_hours_ctools_content_types_opening_hours_table_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $output = '';

  if (isset($pane_context->data) && !empty($pane_context->data)) {
    $node = $pane_context->data;
  }
  else {
    return;
  }

  $output = uclalib_opening_hours_generate_table($node);

  $block = new stdClass();
  $block->module = 'uclalib_opening_hours';
  $block->delta = $subtype;
  $block->content = array(
    'content' => array(
      '#type' => 'markup',
      '#markup' => $output,
    ),
  );

  return $block;
}

