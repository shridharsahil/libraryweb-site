<?php
/**
 * @file
 * uclalib_bookplates.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uclalib_bookplates_taxonomy_default_vocabularies() {
  return array(
    'collection_endowment_initiative' => array(
      'name' => 'Collection Endowment Initiative',
      'machine_name' => 'collection_endowment_initiative',
      'description' => 'Bookplates',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
