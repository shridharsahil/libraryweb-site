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
  $url = url('staff');
  $placeholder = t('search');
  $submit = t('Go');
  $block->title = t('Search the Staff Directory');
  $block->content = <<<EOD
    <div class="header-search-form-wrapper">
      <form class="header-search-form" action="{$url}" method="get" accept-charset="UTF-8">
        <div class="form-wrapper">
          <div class="form-item form-type-textfield">
            <input type="text" class="form-text" id='' name="search_api_views_fulltext" value="" size="70" maxlength="128"  placeholder="{$placeholder}">
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

