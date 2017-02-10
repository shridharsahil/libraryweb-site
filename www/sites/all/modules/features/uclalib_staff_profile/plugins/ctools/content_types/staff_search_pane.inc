<?php

/**
 * @file
 * This plugin provides a pane for searching Resources.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Staff Directory Search'),
  'title' => t('Looking for a librarian or staff?'),
  'description' => t('Searches the Staff Directory'),
  'edit form' => 'uclalib_staff_ctools_content_types_edit_form',
  'render callback' => 'uclalib_staff_ctools_content_types_render',
);

/**
 * 'edit form' callback for the content type.
 * Apparently required but we can just pass the form through.
 */
function uclalib_staff_ctools_content_types_edit_form($form, &$form_state) {
  return $form;
}

/**
 * 'render' callback for the content type.
 */
function uclalib_staff_ctools_content_types_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $block->content['url'] = url('staff');
  $block->content['placeholder'] = t('search');
  $block->content['submit'] = t('Go');
  $block->content['#theme'] = 'uclalib_staff_profile_staff_search_pane';
  $block->title = t('Search the Staff Directory');
  return $block;
}
