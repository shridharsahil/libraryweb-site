<?php
/**
 * @file
 * uclalib_bookplates.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function uclalib_bookplates_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-bookplates.
  $menus['menu-bookplates'] = array(
    'menu_name' => 'menu-bookplates',
    'title' => 'Bookplates',
    'description' => 'Bookplates Navigation',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bookplates');
  t('Bookplates Navigation');


  return $menus;
}
