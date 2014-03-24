<?php
/**
 * @file
 * uclalib_footer_settings.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function uclalib_footer_settings_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-first.
  $menus['menu-footer-first'] = array(
    'menu_name' => 'menu-footer-first',
    'title' => 'Footer first',
    'description' => 'First Footer menu items',
  );
  // Exported menu: menu-footer-second.
  $menus['menu-footer-second'] = array(
    'menu_name' => 'menu-footer-second',
    'title' => 'Footer second',
    'description' => 'Second Footer menu list',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('First Footer menu items');
  t('Footer first');
  t('Footer second');
  t('Second Footer menu list');


  return $menus;
}
