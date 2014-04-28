<?php

/**
 * @file
 * This plugin provides a pane for searching Resources.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Resources'),
  'title' => t('Find a Resource'),
  'description' => t('Description goes here'),
  'edit form' => 'uclalib_resources_ctools_content_types_edit_form',
  'render callback' => 'uclalib_resources_ctools_content_types_render',
);

function uclalib_resources_ctools_content_types_edit_form() {
}

function uclalib_resources_ctools_content_types_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $block->title = t('Block title');
  $block->content = t('Block content');
  return $block;
}

