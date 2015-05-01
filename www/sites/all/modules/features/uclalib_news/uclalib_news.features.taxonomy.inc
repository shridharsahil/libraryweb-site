<?php
/**
 * @file
 * uclalib_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uclalib_news_taxonomy_default_vocabularies() {
  return array(
    'blog_name' => array(
      'name' => 'Blog Name',
      'machine_name' => 'blog_name',
      'description' => 'This is the name of the blog or deprtment, etc.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'news_tags' => array(
      'name' => 'News Tags',
      'machine_name' => 'news_tags',
      'description' => 'Tags for news AND blogs',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
