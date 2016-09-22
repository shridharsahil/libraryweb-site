<?php

// Setup DB
$databases = array (
  'default' =>
  array (
    'default' =>
    array (
      'database' => 'uclalib',
      'username' => 'uclalib',
      'password' => 'uclalib',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);

// Tell Drupal that we are behind a reverse proxy server
$conf['reverse_proxy'] = TRUE;

// List of trusted IPs (IP numbers of our reverse proxies)
$conf['reverse_proxy_addresses'] = array(
  '127.0.0.1',
);

// Solr settings
$conf['search_api_solr_overrides'] = array(
  'uclalib_solr_server' => array(
    'name' => t('Solr Server (Staging)'),
    'options' => array(
      'host' => '192.168.129.217',
      'port' => '8080',
      'path' => '/solr/uclalibdev',
    ),
  ),
);

$conf['stage_file_proxy_origin'] = 'http://www.library.ucla.edu';
