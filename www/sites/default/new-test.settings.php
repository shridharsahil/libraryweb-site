<?php

// Site-specific settings for new-test
// Get database info from file which is excluded from repo
require_once('new-test.settings-db.php');

// Tell Drupal that we are behind a reverse proxy server
$conf['reverse_proxy'] = TRUE;

// List of trusted IPs (IP numbers of our reverse proxies)
$conf['reverse_proxy_addresses'] = array(
  '127.0.0.1',
);

// Solr settings
$conf['search_api_solr_overrides'] = array(
  'uclalib_solr_server' => array(
    'name' => t('Solr Server (UCLA Test)'),
    'options' => array(
      'host' => 'temp-solrsearch.library.ucla.edu',
      'port' => '80',
      'path' => '/solr/www-test',
    ),
  ),
);

