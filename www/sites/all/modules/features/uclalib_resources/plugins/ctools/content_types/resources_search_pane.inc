<?php

/**
 * @file
 * This plugin provides a pane for searching Resources.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Resources'),
  'title' => t('Find a Resource search pane'),
  'description' => t('Searches for Resources'),
  'edit form' => 'uclalib_resources_ctools_content_types_edit_form',
  'render callback' => 'uclalib_resources_ctools_content_types_render',
);

/**
 * 'edit form' callback for the content type.
 * Apparently required but we can just pass the form through.
 */
function uclalib_resources_ctools_content_types_edit_form($form, &$form_state) {
  return $form;
}

/**
 * 'render' callback for the content type.
 */
function uclalib_resources_ctools_content_types_render($subtype, $conf, $args, $contexts) {
  $block = new stdClass();
  $url = url('search-research/find-resources');
  $placeholder = t('Search for a database, collection, or other resource');
  $submit = t('Search');
  $description = t('The UCLA Library has over 5,000 databases, special collections, and other resources that will help you locate materials for your research.');
  $block->title = t('Find a Resource');
  $block->content = <<<EOD
    <div class="header-search-form-wrapper">
      <form class="header-search-form" action="{$url}" method="get" accept-charset="UTF-8">
        <div class="form-wrapper">
          <div class="form-item form-type-textfield">
            <input type="text" class="form-text" id='' name="title" value="" size="70" maxlength="128"  placeholder="{$placeholder}">
          </div>
          <div class="form-actions">
            <input type="submit" class="form-submit" id="submit" value="{$submit}" >
          </div>
        </div>
      </form>
    </div>
    <p>{$description}</p>
EOD;
  return $block;
}

