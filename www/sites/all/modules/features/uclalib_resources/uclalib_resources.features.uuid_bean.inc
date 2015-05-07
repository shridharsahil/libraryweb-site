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
    'label' => 'Databases',
    'description' => NULL,
    'title' => 'Databases',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'articles',
    'view_mode' => 'default',
    'created' => 1398722666,
    'log' => 'links opening in new window for external sites',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '86058cc9-4263-447c-ac03-f4647cbda15c',
    'uuid' => '02f52f84-c74a-44fb-82f6-e90b581e918f',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://guides.library.ucla.edu/databases-by-subject',
                'title' => 'Browse Databases by Subject',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 20,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://unitproj.library.ucla.edu/search/find-database-title.cfm',
                'title' => 'Find a Database by Title',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 19,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://guides.library.ucla.edu/atoz',
                'title' => 'A-Z List of Databases',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 110,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://guides.library.ucla.edu/searchtags.php?iid=261&gid=0&tag=data',
                'title' => 'Data and Statistics',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 111,
        ),
        4 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'https://escholarship.org/',
                'title' => 'UC eScholarship Repository',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 112,
        ),
        5 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://guides.library.ucla.edu/content.php?pid=224004',
                'title' => 'Searching a Database',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 113,
        ),
      ),
    ),
    'field_introduction' => array(),
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
    'log' => 'links',
    'uid' => 0,
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
                'url' => 'support/research-help',
                'title' => 'Research Help',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 30,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'use/computers-computing-services/connect-campus',
                'title' => 'Connect from off-campus',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'use/borrow-renew-return/interlibrary-loan-document-delivery',
                'title' => 'Interlibrary Loans',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 26,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'use/borrow-renew-return/course-reserves',
                'title' => 'Course Reserves',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 28,
        ),
        4 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'about/collections/suggest-purchase',
                'title' => 'Suggest a purchase',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 29,
        ),
        5 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'support/publishing-data-management/scholarly-communication-resources-education/ucla-library-copyright-policies/appropriate-use-licensed-electronic-resources',
                'title' => 'Appropriate Use of Licensed Electronic Resources',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 225,
        ),
      ),
    ),
    'field_introduction' => array(),
  );
  $beans[] = array(
    'label' => 'Research Tools',
    'description' => NULL,
    'title' => 'Research Tools',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'popular-databases',
    'view_mode' => 'default',
    'created' => 1398722734,
    'log' => 'links opening in new window for external sites',
    'uid' => 0,
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
                'url' => 'http://guides.library.ucla.edu',
                'title' => 'UCLA Library Research Guides',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'http://guides.library.ucla.edu/searchtags.php?iid=261&gid=0&tag=citation',
                'title' => 'Citing and Citation Management',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'node/647',
                'title' => 'Data Management and Curation',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'http://guides.library.ucla.edu/impact',
                'title' => 'Impact Metrics',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'http://guides.library.ucla.edu/advice-guides',
                'title' => 'More Research Advice and Tools',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 25,
        ),
        5 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '/node/1428/',
                'title' => 'Library Apps',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 226,
        ),
      ),
    ),
    'field_introduction' => array(),
  );
  $beans[] = array(
    'label' => 'Images, Audio, & Video',
    'description' => NULL,
    'title' => 'Images, Audio, & Video',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'databases',
    'view_mode' => 'default',
    'created' => 1398722354,
    'log' => 'links opening in new window for external sites',
    'uid' => 0,
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
                'url' => 'http://guides.library.ucla.edu/images',
                'title' => 'Images',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'http://guides.library.ucla.edu/recordings',
                'title' => 'Audio (Music Recordings)',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'http://www.oid.ucla.edu/edtech/mediacollection/info',
                'title' => 'Instructional Media Collections and Services',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 7,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'https://www.cinema.ucla.edu/',
                'title' => 'UCLA Film & Television Archive',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 114,
        ),
        4 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://guides.library.ucla.edu/videocollections',
                'title' => 'More Video Collections',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 115,
        ),
      ),
    ),
    'field_introduction' => array(),
  );
  $beans[] = array(
    'label' => 'Books & Journals',
    'description' => NULL,
    'title' => 'Books & Journals',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'books--more',
    'view_mode' => 'default',
    'created' => 1398722227,
    'log' => 'added link',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '874ead3d-654f-41b6-8500-0f6ca7be6009',
    'uuid' => '99b33c31-6c86-4884-82b3-40b9acddc42d',
    'field_linklist_links' => array(
      'und' => array(
        0 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => '– both print and e-books/journals',
                'format' => NULL,
                'safe_value' => '– both print and e-books/journals',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://catalog.library.ucla.edu',
                'title' => 'UCLA Library Catalog',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 2,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => '– UC’s joint catalog',
                'format' => NULL,
                'safe_value' => '– UC’s joint catalog',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://ucla.worldcat.org',
                'title' => 'Melvyl',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 1,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => '– libraries across the world',
                'format' => NULL,
                'safe_value' => '– libraries across the world',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://firstsearch.oclc.org/fsip?dbname=WorldCat',
                'title' => 'Worldcat',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'http://ucelinks.cdlib.org:8888/sfx_ucla/az',
                'title' => 'Find e-journals',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 4,
        ),
        4 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://guides.library.ucla.edu/ebooks',
                'title' => 'E-books',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 106,
        ),
        5 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '/node/1501',
                'title' => 'New Books',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 249,
        ),
        6 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://ulrichsweb.serialssolutions.com/',
                'title' => 'Search Ulrichsweb to see where a journal is indexed',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 107,
        ),
        7 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '/node/1432',
                'title' => 'Description of Library Catalogs',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 254,
        ),
      ),
    ),
    'field_introduction' => array(),
  );
  $beans[] = array(
    'label' => 'Archives & Primary Resources',
    'description' => NULL,
    'title' => 'Archives & Primary Resources',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'images-audio-video',
    'view_mode' => 'default',
    'created' => 1398722604,
    'log' => 'links opening in new window for external sites',
    'uid' => 0,
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
                'url' => 'node/874',
                'title' => 'UCLA Library Special Collections Guides',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 116,
        ),
        1 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.oac.cdlib.org/institutions/UCLA',
                'title' => 'Online Archive of California',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 14,
        ),
        2 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://digital2.library.ucla.edu/',
                'title' => 'UCLA Library Digital Collections',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 15,
        ),
        3 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://guides.library.ucla.edu/primary-sources',
                'title' => 'Subject Guides for Primary Sources',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 16,
        ),
        4 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://oralhistory.library.ucla.edu/',
                'title' => 'UCLA Center for Oral History Research',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 17,
        ),
        5 => array(
          'field_link_description' => array(
            'und' => array(),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://guides.library.ucla.edu/searchtags.php?iid=261&gid=0&tag=data',
                'title' => 'Data and Statistics',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 18,
        ),
      ),
    ),
    'field_introduction' => array(),
  );
  $beans[] = array(
    'label' => 'Articles',
    'description' => NULL,
    'title' => 'Articles',
    'type' => 'link_list',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'journals',
    'view_mode' => 'default',
    'created' => 1398722406,
    'log' => 'updated link',
    'uid' => 42,
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
                'value' => 'Use one of these to start, or see Databases for more options.',
                'format' => NULL,
                'safe_value' => 'Use one of these to start, or see Databases for more options.',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => '',
                'title' => 'Articles are indexed in many databases. No single database covers all journals.',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'http://search.ebscohost.com/login.aspx?authtype=ip,uid&profile=ehost&defaultdb=a9h',
                'title' => 'Academic Search Complete',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'http://www.jstor.org/',
                'title' => 'JSTOR',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'http://apps.webofknowledge.com/WOS_GeneralSearch_input.do?last_prod=WOS&product=WOS&highlighted_tab=WOS&search_mode=GeneralSearch',
                'title' => 'Web of Science',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 11,
        ),
        4 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => '- locate the article from your citation',
                'format' => NULL,
                'safe_value' => '- locate the article from your citation',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'http://ucelinks.cdlib.org:8888/sfx_local/cgi/core/citation-linker.cgi',
                'title' => 'UC-eLinks: Citation Linker',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
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
                'url' => 'http://guides.library.ucla.edu/news',
                'title' => 'Newspaper Articles',
                'attributes' => array(
                  'target' => '_blank',
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 13,
        ),
        6 => array(
          'field_link_description' => array(
            'und' => array(
              0 => array(
                'value' => '- search several databases at once',
                'format' => NULL,
                'safe_value' => '- search several databases at once',
              ),
            ),
          ),
          'field_link_link' => array(
            'und' => array(
              0 => array(
                'url' => 'node/1536',
                'title' => 'Quick Articles',
                'attributes' => array(
                  'target' => 0,
                ),
              ),
            ),
          ),
          'field_icon' => array(
            'und' => array(),
          ),
          'id' => 109,
        ),
      ),
    ),
    'field_introduction' => array(),
  );
  return $beans;
}
