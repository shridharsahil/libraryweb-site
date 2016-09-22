<?php
/**
 * @file
 * uclalib_navigation.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function uclalib_navigation_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'questions_highlight';
  $content->admin_title = 'Questions Highlight';
  $content->admin_description = '';
  $content->category = 'UCLALIB Global';
  $content->settings = array(
    'admin_title' => 'Questions Highlight',
    'title' => '',
    'body' => '<p>Have questions about your research? <br class="palm-lap-only" /> <a href="/support/research-help" style="font-weight: normal">We can help!</a></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['questions_highlight'] = $content;

  return $export;
}
