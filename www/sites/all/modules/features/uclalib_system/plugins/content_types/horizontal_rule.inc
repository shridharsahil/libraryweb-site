<?php

/**
 * @file
 * Provides the a horizontal rule page element that can be used as a horizontal
 * separator.
 */

$plugin = array(
  'title' => t('Horizontal Rule'),
  'description' => t('Add a horizontal rule as a pane separator.'),
  'single' => TRUE,
  'render callback' => 'horizontal_rule_content_type_render',
  'defaults' => array(),
  'category' => array(t('Page elements')),
);

/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time.
 * @param $args
 * @param $context
 *   Context - in this case we don't have any.
 *
 * @return
 *   An object with at least title and content members.
 */
function horizontal_rule_content_type_render($subtype, $conf, $args, $context) {
  // The output.
  $block = new stdClass();
  $block->title = '';
  $block->content = '<hr />';
  return $block;
}

