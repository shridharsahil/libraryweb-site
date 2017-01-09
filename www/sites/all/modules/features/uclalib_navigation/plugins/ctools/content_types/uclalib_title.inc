<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category'         => t('UCLALIB Global'),
  'title'            => t("UCLALIB Title"),
  'description'      => t("Universal title block - shows node title, with parents if deeper than subsection level."),
  'edit form'        => 'uclalib_titleigation_ctools_content_types_uclalib_title_edit_form',
  'render callback'  => 'uclalib_titleigation_ctools_content_types_uclalib_title_render',
);

/**
 * Edit form callback.
 */
function uclalib_titleigation_ctools_content_types_uclalib_title_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Render callback.
 *
 * "CTools:Content types" plugin render callback for "Uclalib opening hours:Opening hours table".
 *
 * @param string $subtype
 *   Subtype identifier.
 * @param array  $conf
 *   Configuration of the $subtype instance.
 * @param array  $args
 *   Documentation missing.
 * @param array  $pane_context
 *   Documentation missing.
 * @param array  $incoming_content
 *   Documentation missing.
 *
 * @return object
 *   The content.
 */
function uclalib_titleigation_ctools_content_types_uclalib_title_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();

  // Where in the world is Carmen san Diego?
  $menu_trail = menu_get_active_trail();

  $parent = $menu_trail[count($menu_trail) - 2];
  $current = $menu_trail[count($menu_trail) - 1];

  $block->content = '';
  // This is a sub-section or below, the title should link to the parent.
  if (count($menu_trail) > 2) {
    $block->content .= '<span class="uclalib-nav-breadcrumb">';
    for ($i = 2; $i < (count($menu_trail) - 1); $i++) {
      $block->content .= l($menu_trail[$i]['link_title'], $menu_trail[$i]['link_path']) . ' &raquo; ';
    }
    $block->content .= '</span>';
  }

  $block->content .= '<h1>';
  $block->content .= $current['title'];
  $block->content .= '</h1>';

  $block->delta = $subtype;

  return $block;
}

