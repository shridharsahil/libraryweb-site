<?php
/**
 * @file
 * uclalib_staff_profile.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function uclalib_staff_profile_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Want to give us feedback?',
    'description' => NULL,
    'title' => '',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'want-to-give-us-feedback',
    'view_mode' => 'default',
    'created' => 1400111044,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '7b662b7e-be16-4849-9a6d-e215a345e9fe',
    'uuid' => '2135f550-a5f0-409b-a6ab-b883467237de',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Want to give us feedback?',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 38,
        ),
      ),
    ),
    'field_introduction' => array(),
  );
  $beans[] = array(
    'label' => 'Other Research Support Options',
    'description' => NULL,
    'title' => '',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'other-research-support-options',
    'view_mode' => 'default',
    'created' => 1400110695,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '319adca1-bb32-4ea2-90e0-0280376c8a32',
    'uuid' => '546e37db-d4e2-4ec6-aa22-4d2d36179f7e',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => '(123) 123-4567',
                'format' => NULL,
                'safe_value' => '(123) 123-4567',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(),
          ),
          'field_icon' => array(
            'und' => array(
              0 => array(
                'bundle' => 'uclalib',
                'icon' => 'telephone',
              ),
            ),
          ),
          'id' => 31,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'librarian@library.ucla.edu',
                'title' => 'librarian@library.ucla.edu',
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
                'icon' => 'email',
              ),
            ),
          ),
          'id' => 32,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Schedule a 20 minute Research Session >',
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
                'icon' => 'calendar',
              ),
            ),
          ),
          'id' => 33,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu/libraries/subject-specialists',
                'title' => 'Find a Subject Specialist',
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
                'icon' => 'specialist',
              ),
            ),
          ),
          'id' => 34,
        ),
      ),
    ),
    'field_introduction' => array(),
  );
  $beans[] = array(
    'label' => 'Have a Technical Question?',
    'description' => NULL,
    'title' => '',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'have-a-technical-question',
    'view_mode' => 'default',
    'created' => 1400110955,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '37d705a9-88f3-4f29-87d1-af551ede17e5',
    'uuid' => '88fe93dc-d4b4-4b14-94f1-6582276f7fd7',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => 'Short description of what a technical question is.',
                'format' => NULL,
                'safe_value' => 'Short description of what a technical question is.',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 35,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => '(123) 123-4567',
                'format' => NULL,
                'safe_value' => '(123) 123-4567',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(),
          ),
          'field_icon' => array(
            'und' => array(
              0 => array(
                'bundle' => 'uclalib',
                'icon' => 'telephone',
              ),
            ),
          ),
          'id' => 36,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'librarian@library.ucla.edu',
                'title' => 'librarian@library.ucla.edu',
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
                'icon' => 'email',
              ),
            ),
          ),
          'id' => 37,
        ),
      ),
    ),
    'field_introduction' => array(),
  );
  $beans[] = array(
    'label' => 'Interested in making a donation?',
    'description' => NULL,
    'title' => '',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'interested-in-making-a-donation',
    'view_mode' => 'default',
    'created' => 1400111121,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '069910e1-af22-427d-8073-ae6faaf74ae4',
    'uuid' => 'a916db8b-79a4-4d16-91d2-7883dd13162f',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Interested in making a donation?',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 39,
        ),
      ),
    ),
    'field_introduction' => array(),
  );
  return $beans;
}
