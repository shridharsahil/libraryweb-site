<?php
/**
 * @file
 * Search module integration.
 */

/**
 * Implements hook_search_info().
 */
function search_api_page_manager_search_info() {
  return array(
    'title' => 'Pages',
    'path' => 'page_manager',
  );
}

/**
 * Implements hook_search_access().
 */
function search_api_page_manager_search_access() {
  return user_access('access content');
}

/**
 * Implements hook_search_reset().
 */
function search_api_page_manager_search_reset() {
  db_update('search_dataset')
    ->fields(array('reindex' => REQUEST_TIME))
    ->condition('type', 'page_manager')
    ->execute();
}

/**
 * Implements hook_search_status().
 */
function search_api_page_manager_search_status() {
  module_load_include('inc', 'page_manager', 'plugins/tasks/page');
  $pages = page_manager_page_load_all();

  $total = count($pages);
  $remaining = $total - db_query("SELECT COUNT(*) FROM {search_dataset} d WHERE d.type = 'page_manager' AND d.reindex = 0")->fetchField();
  return array('remaining' => $remaining, 'total' => $total);
}

/**
 * Implements hook_search_execute().
 */
function search_api_page_manager_search_execute($keys = NULL, $conditions = NULL) {
  // @TODO - Add some form of access control.

  // Build matching conditions
  $query = db_select('search_index', 'i', array('target' => 'slave'))
    ->extend('SearchQuery')
    ->extend('PagerDefault')
    ->searchExpression($keys, 'page_manager');

  // Only continue if the first pass query matches.
  if (!$query->executeFirstPass()) {
    return array();
  }

  // Load results.
  $find = $query
    ->limit(10)
    ->execute();

  $results = array();
  foreach ($find as $item) {
    $page = entity_load('search_api_page_manager', array($item->sid), array('length' => 10));

    $results[] = array(
      'link' => url($page[$item->sid]->path, array('absolute' => TRUE)),
      'title' => $page[$item->sid]->title,
      'score' => $item->calculated_score,
      'snippet' => search_excerpt($keys, $page[$item->sid]->content),
    );
  }
  return $results;
}

/**
 * Implements hook_update_index().
 */
function search_api_page_manager_update_index() {
  // @TODO - Implement some for of limiting of the index.
  // $limit = (int) variable_get('search_cron_limit', 100);

  module_load_include('inc', 'page_manager', 'plugins/tasks/page');
  foreach (page_manager_page_load_all() as $subtask_id => $subtask) {
    $sid = search_api_page_manager_machine_name_to_dec($subtask_id);
    search_index($sid, 'page_manager', search_api_page_manager_search_execute($subtask_id));
  }
}
