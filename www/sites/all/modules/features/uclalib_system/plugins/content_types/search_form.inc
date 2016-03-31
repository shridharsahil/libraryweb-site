<?php
/**
 * @file
 */

$plugin = array(
  'title' => t('Search Form'),
  'description' => t('Displays search form.'),
  'single' => TRUE,
  'render callback' => 'search_form_content_type_render',
  'defaults' => array(),
  'edit form' => 'search_form_content_type_edit_form',
  'category' => array(t('Miscellaneous')),
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
function search_form_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $url = url('site-search');
  $placeholder = t('Site Search');
  $submit = t('Go');
  $block->content = <<<EOD
    <div class="header-search-form-wrapper">
      <form class="header-search-form" action="{$url}" method="get" accept-charset="UTF-8">
        <div class="form-wrapper">
          <div class="form-item form-type-textfield">
	    <label class="element-invisible" for="site-search-query">${placeholder}</label>
            <input type="text" class="form-text" id="site-search-query" name="search_query" value="" size="15" maxlength="128"  placeholder="{$placeholder}">
          </div>
          <div class="form-actions">
            <input type="submit" class="form-submit" id="submit" value="{$submit}" >
          </div>
        </div>
      </form>
    </div>
EOD;
  return $block;
}

/**
 * 'Edit form' callback for the content type.
 */
function search_form_content_type_edit_form($form, &$form_state) {
  // Provide a blank form so we have a place to have context setting.
  return $form;
}
