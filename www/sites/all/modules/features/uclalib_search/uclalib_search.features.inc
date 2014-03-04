<?php
/**
 * @file
 * uclalib_search.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function uclalib_search_default_search_api_server() {
  $items = array();
  $items['default_solr_server'] = entity_import('search_api_server', '{
    "name" : "Default Solr Server",
    "machine_name" : "default_solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "scheme" : "http",
      "host" : "sky.bluespark.com",
      "port" : "8080",
      "path" : "\\/solr\\/uclalibdev",
      "http_user" : "peterlozano@gmail.com",
      "http_pass" : "admin",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "AUTO"
    },
    "enabled" : "1"
  }');
  return $items;
}
