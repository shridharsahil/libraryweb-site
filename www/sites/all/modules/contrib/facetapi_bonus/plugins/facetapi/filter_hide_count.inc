<?php

/**
 * Plugin that removes all items if there are less than X items available.
 */
class FacetapiFilterHideCount extends FacetapiFilter {

  // Number of items.
  protected $count;
  // If there is active item in the list.
  protected $active;

  /**
   * Filters items.
   */
  public function execute(array $build) {

    // If hide_count is checked, set count to null. We can't unset #count because of this issue: https://drupal.org/node/1995798
    if ($this->settings->settings['filters']['hide_count']['status'] == 1) {

      foreach ($build as $key => $values) {
        $build[$key]['#count'] = NULL;
      }
    }

    return $build;
  }
}