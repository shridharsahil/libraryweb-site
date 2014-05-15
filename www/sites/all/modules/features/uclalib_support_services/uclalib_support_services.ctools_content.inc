<?php
/**
 * @file
 * uclalib_support_services.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function uclalib_support_services_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'stub_content';
  $content->admin_title = 'STUB LOREM';
  $content->admin_description = 'Stub lorem ipsun';
  $content->category = 'STUB';
  $content->settings = array(
    'admin_title' => 'STUP LOREM',
    'title' => 'Stub content',
    'body' => '<div>
	Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.</div>
<div>
	&nbsp;</div>
<div>
	Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquid ex ea commodi consequat. Ut wisi enim ad minim veniam, quis nostrud exerci tation ullamcorper suscipit lobortis nisl ut aliquip ex ea commodo consequat.</div>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $export['stub_content'] = $content;

  return $export;
}
