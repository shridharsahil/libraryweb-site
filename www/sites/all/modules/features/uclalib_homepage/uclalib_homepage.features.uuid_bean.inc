<?php
/**
 * @file
 * uclalib_homepage.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function uclalib_homepage_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Homepage Equipment Block',
    'description' => NULL,
    'title' => 'Find Printers, Copiers, and Other Library Equipment',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'homepage-equipment-block',
    'view_mode' => 'default',
    'created' => 1475710065,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '7cf3ea78-2c81-42dc-afb8-5fbae5a2b871',
    'uuid' => 'f2697c6b-42b5-49ff-abf6-45e4ddbac540',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '/clicc/lending',
                'title' => 'Laptop Lending CLICC',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(
              0 => array(
                'bundle' => 'uclalib',
                'icon' => 'clicc-computer',
              ),
            ),
          ),
          'id' => 411,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '/clicc/study-rooms',
                'title' => 'Group Study Rooms or Collaboration Pods',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(
              0 => array(
                'bundle' => 'uclalib',
                'icon' => 'collaboration-pod',
              ),
            ),
          ),
          'id' => 412,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '/use/access-privileges/print-copy-scan',
                'title' => 'Print/Copy/Scan',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(
              0 => array(
                'bundle' => 'uclalib',
                'icon' => 'copy',
              ),
            ),
          ),
          'id' => 413,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '/locations?f[0]=field_equipment%3A19',
                'title' => 'More Equipment',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(
              0 => array(
                'bundle' => 'uclalib',
                'icon' => 'more',
              ),
            ),
          ),
          'id' => 414,
        ),
      ),
    ),
    'field_introduction' => array(),
    'field_homepage_check' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
  );
  return $beans;
}
