<?php

/**
 * @file
 * Provides the questionpoint "Ask a Librarian" widget.
 *
 */
$plugin = array(
  'title' => t('Ask a Librarian'),
  'description' => t('Displays the questionpoint "Ask a Librarian" widget.'),
  'single' => TRUE,
  'defaults' => array(),
  'edit form' => 'ask_librarian_content_type_edit_form',
  'render callback' => 'ask_librarian_content_type_render',
  'category' => array('UCLALIB Global'),
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
function ask_librarian_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '';

  $block->title = '';

  $block->content .= <<<EOL
<div id="qpchatwidget" style="width: 190px; height: 275px;">
<iframe width="100%" height="100%" frameborder="0" src="http://www.questionpoint.org/crs/qwidgetV4/js/qwidget.bootstrap.js?langcode=1&instid=11069&skin=gray&size=standard"
allowtransparency="true" marginheight="0" marginwidth="0" border="0" style="background:transparent;overflow:hidden;border:0px;height:100%;width:100%">
</iframe>
</div>
EOL;

  return $block;
}

/**
 * 'Edit form' callback for the content type.
 */
function ask_librarian_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function ask_librarian_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
