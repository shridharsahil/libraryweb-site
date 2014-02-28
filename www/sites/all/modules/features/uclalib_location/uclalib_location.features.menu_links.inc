<?php
/**
 * @file
 * uclalib_location.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uclalib_location_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_locations:locations
  $menu_links['main-menu_locations:locations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'locations',
    'router_path' => 'locations',
    'link_title' => 'Locations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_locations:locations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Locations');


  return $menu_links;
}
