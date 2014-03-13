<?php

/**
 * @file
 * This plugins collect all tids for a location and its destinations for the vocabularies
 * related to amenities, study areas and equipment and uses a view to print them.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Uclalib destination'),
  'title' => t('Uclalib destination: All facilities'),
  'description' => t('List of all facilities in a location, including the destination ones.'),

  'required context' => new ctools_context_required(t('Node'), 'node'),

  'edit form'          => 'uclalib_destination_ctools_content_types_all_facilities_edit_form',
  'render callback' => 'uclalib_destination_ctools_content_types_all_facilities_render',
);

/**
 * Edit form callback.
 */
function uclalib_destination_ctools_content_types_all_facilities_edit_form($form, &$form_state) {

  return $form;
}

/**
 * Render callback.
 *
 * "CTools:Content types" plugin render callback for "Uclalib destination:All facilities".
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
function uclalib_destination_ctools_content_types_all_facilities_render($subtype, $conf, $panel_args, $context) {
  if (!empty($context) && empty($context->data)) {
    return;
  }

  $node = isset($context->data) ? clone($context->data) : NULL;

  $vocs = array(
    'field_amenities',
    'field_study_areas',
    'field_equipment',
  );

  $tids = uclalib_destination_fetch_facilities_tids($node, $vocs);

  $dest_nids = array();
  if (isset($node->field_location_destinations[LANGUAGE_NONE]) && is_array($node->field_location_destinations[LANGUAGE_NONE])) {
    foreach ($node->field_location_destinations[LANGUAGE_NONE] as $delta => $value) {
      $dest_nids[] = $value['target_id'];
    }
  }

  if (!empty($dest_nids)) {
    $destinations = node_load_multiple($dest_nids);

    $dest_fields = array(
      'field_amenities',
      'field_study_areas',
      'field_equipment',
    );
    foreach ($destinations as $dest) {
      $dest_tids = uclalib_destination_fetch_facilities_tids($dest, $dest_fields);
      $tids = array_merge($tids, $dest_tids);
    }
  }
  $tids = array_unique($tids);

  $output = '';
  if (!empty($tids)) {
    $view = views_get_view('at_this_location_block');
    $view->set_display('panel_pane_2');
    $args = array(
      implode('+', $tids),
    );
    $view->set_arguments($args);
    $output .= $view->preview();
  }

  $block = new stdClass();
  $block->module = 'uclalib_destination';
  $block->delta = $subtype;
  $block->content = array(
    'content' => array(
      '#type' => 'markup',
      '#markup' => $output,
    ),
  );

  return $block;
}


