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

  // Exported menu: menu-colophon-first.
  $menus['menu-colophon-first'] = array(
    'menu_name' => 'menu-colophon-first',
    'title' => 'Colphon first',
    'description' => 'Links for left column in colophon.',
  );
  // Exported menu: menu-colophon-second.
  $menus['menu-colophon-second'] = array(
    'menu_name' => 'menu-colophon-second',
    'title' => 'Colophon second',
    'description' => 'Links for right column in colophon.',
  );
  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Footer',
    'description' => 'Links for page footer horizontal menu.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Colophon second');
  t('Colphon first');
  t('Footer');
  t('Links for left column in colophon.');
  t('Links for page footer horizontal menu.');
  t('Links for right column in colophon.');


  return $menus;
}
