<?php
/**
 * @file
 * Entity API module integration.
 */

/**
 * Implements hook_entity_property_info().
 */
function search_api_page_manager_entity_property_info() {
  $info = array();

  // Add meta-data about the basic search_api_page_manager properties.
  $properties = &$info['search_api_page_manager']['properties'];

  $properties['title'] = array(
   'label' => t('Title'),
    'description' => t('The title of the page.'),
    'type' => 'text',
    'required' => TRUE,
  );

  $properties['content'] = array(
   'label' => t('Content'),
    'description' => t('The content of the page.'),
    'type' => 'text',
    'required' => TRUE,
  );

  return $info;
}
