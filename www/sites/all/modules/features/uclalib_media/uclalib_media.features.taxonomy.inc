<?php
/**
 * @file
 * uclalib_media.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uclalib_media_taxonomy_default_vocabularies() {
  return array(
    'media_subject' => array(
      'name' => 'Media Subject',
      'machine_name' => 'media_subject',
      'description' => 'Controlled vocabulary for categorizing media objects.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'media_tags' => array(
      'name' => 'Media Tags',
      'machine_name' => 'media_tags',
      'description' => 'Free tagging vocabulary for tagging media objects.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
