<?php
/**
 * @file
 * uclalib_resources.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function uclalib_resources_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Articles',
    'description' => NULL,
    'title' => 'Articles',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'articles',
    'view_mode' => 'default',
    'created' => 1398722666,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '86058cc9-4263-447c-ac03-f4647cbda15c',
    'uuid' => '02f52f84-c74a-44fb-82f6-e90b581e918f',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => 'searches several databases simultaneously',
                'format' => NULL,
                'safe_value' => 'searches several databases simultaneously',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Article Quick Search',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 19,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Locate an article by citation',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 20,
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Quick Links - Search and Research',
    'description' => NULL,
    'title' => 'Quick Links',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'quick-links---search-and-researc',
    'view_mode' => 'default',
    'created' => 1398969197,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '95745709-2104-4d2c-b237-8139836f3008',
    'uuid' => '07ae643b-0883-41cc-a7c0-b4513b5a329c',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '""',
                'title' => 'Schedule a tour',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 26,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '""',
                'title' => 'Teaching Support',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 27,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '""',
                'title' => 'Interlibrary Loans',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 28,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '""',
                'title' => 'Find a place to study',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 29,
        ),
        4 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '""',
                'title' => 'Copyright Guidance',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 30,
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Popular Databases',
    'description' => NULL,
    'title' => 'Popular Databases',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'popular-databases',
    'view_mode' => 'default',
    'created' => 1398722734,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '1087b58c-f0a8-46dc-9806-0c424bd1ac5f',
    'uuid' => '6835250c-6db6-4657-b94d-58f7517ee417',
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
                'title' => 'Popular database 1',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 21,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Popular database 2',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 22,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Popular database 3',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 23,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Popular database 4',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 24,
        ),
        4 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Popular database 5',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 25,
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Databases',
    'description' => NULL,
    'title' => 'Databases',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'databases',
    'view_mode' => 'default',
    'created' => 1398722354,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '6af3ea98-f8b9-4531-be52-394394cc5553',
    'uuid' => '7c322226-d7d5-4d2f-9c40-8d60f5fed564',
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
                'title' => 'Browse Databases by Subject',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 5,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Search Databases by Title',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 6,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'A-Z list of Databases',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 7,
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Books & More',
    'description' => NULL,
    'title' => 'Books & More',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'books--more',
    'view_mode' => 'default',
    'created' => 1398722227,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '874ead3d-654f-41b6-8500-0f6ca7be6009',
    'uuid' => '99b33c31-6c86-4884-82b3-40b9acddc42d',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://ucla.worldcat.org',
                'title' => 'Melvyl',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 1,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://catalog.library.ucla.edu',
                'title' => 'UCLA Library Catalog',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 2,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://ucla.worldcat.org',
                'title' => 'Worldcat (same as Melvyl........?)',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 3,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.hathitrust.org/',
                'title' => 'HathiTrust',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 4,
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Images, Audio, Video',
    'description' => NULL,
    'title' => 'Images, Audio, Video',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'images-audio-video',
    'view_mode' => 'default',
    'created' => 1398722604,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '2afc053b-5a2b-4353-aab8-c794ed39fb37',
    'uuid' => 'd5820158-8ebc-4bd8-81d4-afb70e626c12',
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
                'title' => 'Popular database 1',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 14,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Popular database 2',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 15,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Popular database 3',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 16,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Popular database 4',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 17,
        ),
        4 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Popular database 5',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 18,
        ),
      ),
    ),
  );
  $beans[] = array(
    'label' => 'Journals',
    'description' => NULL,
    'title' => 'Journals',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'journals',
    'view_mode' => 'default',
    'created' => 1398722406,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '106e9ea0-ca4e-4c3c-9350-1e6bf3691027',
    'uuid' => 'eb4e59bf-b34c-48df-a980-0cf15fdd3965',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => 'for print journals',
                'format' => NULL,
                'safe_value' => 'for print journals',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'UCLA Library Catalog',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 8,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'A-Z journal titles',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 9,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'E-journals by subject',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 10,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Directory of Open Access Journals',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 11,
        ),
        4 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => 'to see where a journal is indexed',
                'format' => NULL,
                'safe_value' => 'to see where a journal is indexed',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Search Ulrichsweb',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 12,
        ),
        5 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.library.ucla.edu',
                'title' => 'Journal impact factor',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'id' => 13,
        ),
      ),
    ),
  );
  return $beans;
}
