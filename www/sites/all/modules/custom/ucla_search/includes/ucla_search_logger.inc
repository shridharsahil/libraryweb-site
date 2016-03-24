<?php
/**
 * @file
 * Defines routines for logging search information.
 */

/**
 * Logs search info to database.
 */
function ucla_search_log_search($search_info) {
  // These data elements should always be present.
  $data = array (
    'search_target' => $search_info['search_target'],
    'search_terms' => $search_info['search_terms'],
    'search_date' => $search_info['search_date'],
    'browser_ip' => $search_info['browser_ip'],
    'search_form' => $search_info['search_form'],
  );
  // These elements are optional (user-selected, or only on certain forms).
  if (isset($search_info['search_code'])) {
    $data['search_code'] = $search_info['search_code'];
  }
  if (isset($search_info['search_limit'])) {
    $data['search_limit'] = $search_info['search_limit'];
  }
  if (isset($search_info['search_type'])) {
    $data['search_type'] = $search_info['search_type'];
  }

  // Store the data in the database.
  db_insert('ucla_search_log')->fields($data)->execute();
}

