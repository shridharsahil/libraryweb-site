<?php

/**
 * @file
 * Provides the sharing links pane.
 *
 */
$plugin = array(
  'title' => t('Sharing Links'),
  'description' => t('Displays sharing links.'),
  'single' => TRUE,
  'defaults' => array(),
  'edit form' => 'meta_social_content_type_edit_form',
  'render callback' => 'meta_social_content_type_render',
  'category' => array('Miscellaneous'),
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
function meta_social_content_type_render($subtype, $conf, $args, $context) {
  $share_this_text = NULL;
  $block = new stdClass();

  $block->content['#attached']['css'][] = array(
    'type' => 'external',
    'data' => 'https://cdn.rawgit.com/FortAwesome/Font-Awesome/v4.7.0/css/font-awesome.min.css',
  );
  $block->content['#attached']['css'][] = array(
    'type' => 'external',
    'data' => 'https://cdn.rawgit.com/tabalinas/jssocials/v1.4.0/dist/jssocials.css',
  );
  $block->content['#attached']['css'][] = array(
    'type' => 'external',
    'data' => 'https://cdn.rawgit.com/tabalinas/jssocials/v1.4.0/dist/jssocials-theme-flat.css',
  );

  $block->content['#attached']['js'][] = array(
    'type' => 'external',
    'data' => 'https://cdn.rawgit.com/tabalinas/jssocials/v1.4.0/dist/jssocials.min.js',
  );

  $block->content['#theme'] = 'uclalib_system_meta_social';

  $block->title = '';

  return $block;
}

/**
 * 'Edit form' callback for the content type.
 */
function meta_social_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function meta_social_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
