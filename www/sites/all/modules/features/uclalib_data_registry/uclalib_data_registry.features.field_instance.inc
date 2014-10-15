<?php
/**
 * @file
 * uclalib_data_registry.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uclalib_data_registry_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_institution_department-field_department'
  $field_instances['field_collection_item-field_institution_department-field_department'] = array(
    'bundle' => 'field_institution_department',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_department',
    'label' => 'Department',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_institution_department-field_institution'
  $field_instances['field_collection_item-field_institution_department-field_institution'] = array(
    'bundle' => 'field_institution_department',
    'default_value' => array(
      0 => array(
        'value' => 'UCLA',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_institution',
    'label' => 'Institution',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-data-body'
  $field_instances['node-data-body'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Use the drop-down menu above to toggle between text formats. To enable use of a formatting bar, select "Full HTML" from the menu. If the toolbar does not display under the full HTML setting, click on the black triangle at the top right corner of the form. If "Filtered HTML" or "Plain Text" setting has been selected, the toolbar will not display even though the black triangle will remain visible.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description or Abstract of the Project',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-data-field_creator_name'
  $field_instances['node-data-field_creator_name'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Use a semicolon to separate entries if entering information about more than one person. Ex. Doe, Jane; Doe, John</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_creator_name',
    'label' => 'Persons in Charge of Data Collection (Last Name, First Name)',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-data-field_data_collection_methods'
  $field_instances['node-data-field_data_collection_methods'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_data_collection_methods',
    'label' => 'Data Collection Methods',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-data-field_data_deposited_by'
  $field_instances['node-data-field_data_deposited_by'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>The name of the person who created the entry for the data registry.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_data_deposited_by',
    'label' => 'Data Registered by (Last Name, First Name)',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-data-field_data_format_type'
  $field_instances['node-data-field_data_format_type'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Please enter a comma-separated list of Data Format/File Type(s).</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 13,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_data_format_type',
    'label' => 'Data Format/File Type (example: jpg, xls, txt). Do NOT put periods in the format type or you will get an error message.',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-data-field_data_link'
  $field_instances['node-data-field_data_link'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Enter only one URL.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_url',
        'weight' => 1,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_data_link',
    'label' => 'Link to Data',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-data-field_date_of_collection'
  $field_instances['node-data-field_date_of_collection'] = array(
    'bundle' => 'data',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 9,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_of_collection',
    'label' => 'Date of Collection ',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-data-field_description'
  $field_instances['node-data-field_description'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em> Please describe what constitutes your data (e.g., digital files, artifacts, images of spectra, specimen).</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description of Data Type',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-data-field_email_address_of_person_in'
  $field_instances['node-data-field_email_address_of_person_in'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Use a semicolon to separate entries if entering more than one email address.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_address_of_person_in',
    'label' => 'Email Address of Persons in Charge of Data Collection',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-data-field_email_address_of_person_re'
  $field_instances['node-data-field_email_address_of_person_re'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 7,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_address_of_person_re',
    'label' => 'Email Address for Person Registering the Data',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-data-field_email_address_of_pricipal_'
  $field_instances['node-data-field_email_address_of_pricipal_'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Use a semicolon to separate entries if entering more than one email address.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_address_of_pricipal_',
    'label' => 'Email Address of Principal Investigator',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-data-field_embargo_2'
  $field_instances['node-data-field_embargo_2'] = array(
    'bundle' => 'data',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 17,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_embargo_2',
    'label' => 'If Embargo Selected in the Question above, List End Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-data-field_equip_data_coll'
  $field_instances['node-data-field_equip_data_coll'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Please enter a comma-separated list of equipment type(s).</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_equip_data_coll',
    'label' => 'Equipment Used in Data Collection',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-data-field_funding_agency'
  $field_instances['node-data-field_funding_agency'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_funding_agency',
    'label' => 'Funding Agency (example: NSF, NIH, NOAA, or any other funder)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-data-field_institution_department'
  $field_instances['node-data-field_institution_department'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 8,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_institution_department',
    'label' => 'Institution and Department',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-data-field_keywords'
  $field_instances['node-data-field_keywords'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Please enter a comma-separated list of keyword(s) that describe the data and project.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 19,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_keywords',
    'label' => 'Keywords ',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-data-field_prgrams_to_analyze_data'
  $field_instances['node-data-field_prgrams_to_analyze_data'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Please enter a comma-separated list of programs.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_prgrams_to_analyze_data',
    'label' => 'Programs Used for Data Analysis',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-data-field_principal_investigator'
  $field_instances['node-data-field_principal_investigator'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Use a semicolon to separate entries if entering information about more than one principal investigator. Ex. Doe, Jane; Doe, John</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_principal_investigator',
    'label' => 'Principal Investigator (Last Name, First Name)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-data-field_prog_to_open_data'
  $field_instances['node-data-field_prog_to_open_data'] = array(
    'bundle' => 'data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<em>Please enter a comma-separated list of programs.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_prog_to_open_data',
    'label' => 'Programs Needed to Open the Data',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-data-field_registration_date'
  $field_instances['node-data-field_registration_date'] = array(
    'bundle' => 'data',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 20,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_registration_date',
    'label' => 'Date of Registration',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-data-field_sharing_attributes'
  $field_instances['node-data-field_sharing_attributes'] = array(
    'bundle' => 'data',
    'default_value' => array(
      0 => array(
        'value' => 'yes',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'event_listed_from_bean' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'hours_page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sharing_attributes',
    'label' => 'Are These Data Shareable?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<em> Please describe what constitutes your data (e.g., digital files, artifacts, images of spectra, specimen).</em>');
  t('<em>Enter only one URL.</em>');
  t('<em>Please enter a comma-separated list of Data Format/File Type(s).</em>');
  t('<em>Please enter a comma-separated list of equipment type(s).</em>');
  t('<em>Please enter a comma-separated list of keyword(s) that describe the data and project.</em>');
  t('<em>Please enter a comma-separated list of programs.</em>');
  t('<em>The name of the person who created the entry for the data registry.</em>');
  t('<em>Use a semicolon to separate entries if entering information about more than one person. Ex. Doe, Jane; Doe, John</em>');
  t('<em>Use a semicolon to separate entries if entering information about more than one principal investigator. Ex. Doe, Jane; Doe, John</em>');
  t('<em>Use a semicolon to separate entries if entering more than one email address.</em>');
  t('<em>Use the drop-down menu above to toggle between text formats. To enable use of a formatting bar, select "Full HTML" from the menu. If the toolbar does not display under the full HTML setting, click on the black triangle at the top right corner of the form. If "Filtered HTML" or "Plain Text" setting has been selected, the toolbar will not display even though the black triangle will remain visible.</em>');
  t('Are These Data Shareable?');
  t('Data Collection Methods');
  t('Data Format/File Type (example: jpg, xls, txt). Do NOT put periods in the format type or you will get an error message.');
  t('Data Registered by (Last Name, First Name)');
  t('Date of Collection ');
  t('Date of Registration');
  t('Department');
  t('Description of Data Type');
  t('Description or Abstract of the Project');
  t('Email Address for Person Registering the Data');
  t('Email Address of Persons in Charge of Data Collection');
  t('Email Address of Principal Investigator');
  t('Equipment Used in Data Collection');
  t('Funding Agency (example: NSF, NIH, NOAA, or any other funder)');
  t('If Embargo Selected in the Question above, List End Date');
  t('Institution');
  t('Institution and Department');
  t('Keywords ');
  t('Link to Data');
  t('Persons in Charge of Data Collection (Last Name, First Name)');
  t('Principal Investigator (Last Name, First Name)');
  t('Programs Needed to Open the Data');
  t('Programs Used for Data Analysis');

  return $field_instances;
}
