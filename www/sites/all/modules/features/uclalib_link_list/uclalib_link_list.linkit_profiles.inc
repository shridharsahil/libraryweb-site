<?php
/**
 * @file
 * uclalib_link_list.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function uclalib_link_list_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'link_list';
  $linkit_profile->admin_title = 'Link List';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:bean' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:bean' => array(
      'result_description' => '',
      'bundles' => array(
        'featured_content' => 0,
        'link_list' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_destination' => 0,
        'comment_node_exhibition' => 0,
        'comment_node_location' => 0,
        'comment_node_news' => 0,
        'comment_node_uclalib_resources' => 0,
        'comment_node_staff_profile' => 0,
        'comment_node_static' => 0,
        'comment_node_uclalib_event' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'destination' => 0,
        'exhibition' => 0,
        'location' => 0,
        'news' => 0,
        'uclalib_resources' => 0,
        'staff_profile' => 0,
        'static' => 0,
        'uclalib_event' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'location_amenities' => 0,
        'location_study_areas' => 0,
        'location_equipment' => 0,
        'events_and_exhibitions_audience' => 0,
        'events_and_exhibitions_series' => 0,
        'events_categories' => 0,
        'news_categories' => 0,
        'resource_categories' => 0,
        'staff_departments' => 0,
        'staff_subject_areas' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '1',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['link_list'] = $linkit_profile;

  return $export;
}
