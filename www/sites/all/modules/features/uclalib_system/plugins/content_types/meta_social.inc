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
  $block = new stdClass();
  $block->content = '';

  $block->title = '';

  $block->content .= <<<EOL
<div class="addthis-block">
<span class="addthis-text">$share_this_text</span>
  <span class="addthis_toolbox addthis_default_style addthis_32x32_style">
    <a class="addthis_button_facebook"></a>
    <a class="addthis_button_twitter"></a>
    <a class="addthis_button_email"></a>
  </span>
</div>
<script type="text/javascript" src="https://s7.addthis.com/js/250/addthis_widget.js#pubid=ra-531762c77afe51ca"></script>
<style type="text/css">
.addthis-block {
  min-height: 32px;
}
.addthis_32x32_style a span {
  -webkit-border-radius: 50%;
  -moz-border-radius: 50%;
  -ms-border-radius: 50%;
  -o-border-radius: 50%;
  border-radius: 50%;
}
</style>
EOL;

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
