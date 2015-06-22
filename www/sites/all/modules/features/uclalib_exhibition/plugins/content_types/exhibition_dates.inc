<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Global'),
  'title' => t("Exhibition dates"),
  'description' => t("Exhibition dates"),
  'required context' => array(new ctools_context_required(t('Node'), array('node'))),
  'edit form'          => 'uclalib_exhibition_dates_edit_form',
  'render callback' => 'uclalib_exhibition_dates_render',
);

/**
 * Edit form callback.
 */
function uclalib_exhibition_dates_edit_form($form, &$form_state) {
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
function uclalib_exhibition_dates_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  if (isset($pane_context[0]->data) && !empty($pane_context[0]->data)) {
    $node = $pane_context[0]->data;
  }
  else {
    return;
  }

  $start_date = strtotime($node->field_exhibition_start[LANGUAGE_NONE][0]['value']);
  $end_date = strtotime($node->field_exhibition_end[LANGUAGE_NONE][0]['value']);

  $block = new stdClass();
  $block->title = '';
  $block->content = '<i>' . date('l, F j, Y - g:ia', $start_date) . ' to ' . date('l, F j, Y - g:ia', $end_date). '</i>';

  return $block;
}
