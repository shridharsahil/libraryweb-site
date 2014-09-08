<?php
/**
 * @file
 * uclalib_system.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uclalib_system_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '0';
  $export['cron_safe_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/Los_Angeles';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fancybox_settings';
  $strongarm->value = array(
    'settings' => array(
      'selectors' => '',
      'deactivated_pages' => '',
    ),
    'options' => array(
      'padding' => '',
      'margin' => '',
      'width' => '',
      'height' => '',
      'minWidth' => '',
      'minHeight' => '',
      'maxWidth' => '',
      'maxHeight' => '',
      'autoSize' => 0,
      'autoHeight' => 0,
      'autoWidth' => 0,
      'autoResize' => 0,
      'autoCenter' => 0,
      'fitToView' => 0,
      'aspectRatio' => 0,
      'topRatio' => '',
      'leftRatio' => '',
      'scrolling' => 'auto',
      'wrapCSS' => '',
      'arrows' => 1,
      'closeBtn' => 1,
      'closeClick' => 0,
      'nextClick' => 0,
      'mouseWheel' => 0,
      'autoPlay' => 0,
      'playSpeed' => '',
      'preload' => '',
      'modal' => 0,
      'loop' => 0,
      'openEffect' => 'elastic',
      'closeEffect' => 'elastic',
      'nextEffect' => 'elastic',
      'prevEffect' => 'elastic',
      'openSpeed' => '',
      'closeSpeed' => '',
      'nextSpeed' => '',
      'prevSpeed' => '',
      'openEasing' => '',
      'closeEasing' => '',
      'nextEasing' => '',
      'prevEasing' => '',
      'openOpacity' => 0,
      'closeOpacity' => 0,
      'openMethod' => '',
      'closeMethod' => '',
      'nextMethod' => '',
      'prevMethod' => '',
    ),
    'helpers' => array(
      'title_enabled' => 1,
      'title' => array(
        'type' => 'float',
        'position' => 'top',
      ),
      'overlay_enabled' => 0,
      'overlay' => array(
        'closeClick' => 0,
        'speedOut' => '',
        'showEarly' => 0,
        'locked' => 0,
        'fixed' => 0,
      ),
      'thumbs_enabled' => 0,
      'thumbs' => array(
        'width' => '',
        'height' => '',
        'position' => 'top',
      ),
      'media_enabled' => 0,
      'buttons_enabled' => 0,
      'buttons' => array(
        'position' => 'top',
      ),
    ),
    'callbacks' => array(
      'onCancel' => '',
      'beforeLoad' => '',
      'afterLoad' => '',
      'beforeShow' => 'fancybox_beforeshow',
      'afterShow' => 'fancybox_aftershow',
      'beforeClose' => '',
      'afterClose' => '',
      'onUpdate' => '',
      'onPlayStart' => '',
      'onPlayEnd' => '',
    ),
  );
  $export['fancybox_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'manualcrop_cache_control';
  $strongarm->value = 1;
  $export['manualcrop_cache_control'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'manualcrop_skip_js_check';
  $strongarm->value = 1;
  $export['manualcrop_skip_js_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'US';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'UCLA Library';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'uclalib_omega';
  $export['theme_default'] = $strongarm;

  return $export;
}
