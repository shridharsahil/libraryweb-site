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

  // Use HTML snippet provided by OCLC for embedding the widget.
  // 2014-08-27 akohler: removed scheme (http) so this will work when
  // parent page is served via http or https.
  $block->content .= <<<EOL
<script src="//ajax.googleapis.com/ajax/libs/jquery/1.8.0/jquery.min.js" type="text/javascript" ></script>
<div id="questionpoint.chatwidget" qwidgetno="1" ></div>
<script id="questionpoint.bootstrap" qwidgetno="1" type="text/javascript" src="//www.questionpoint.org/crs/qwidgetV4/js/qwidget.bootstrap.js?langcode=1&instid=11069&skin=gray&size=standard" charset="utf-8">
<noscript>Please enable javascript to chat with librarians online</noscript>
</script>
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
