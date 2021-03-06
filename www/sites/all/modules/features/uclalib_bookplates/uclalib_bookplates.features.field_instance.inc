<?php
/**
 * @file
 * uclalib_bookplates.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uclalib_bookplates_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_collection_donor-field_donor_name_first'
  $field_instances['field_collection_item-field_collection_donor-field_donor_name_first'] = array(
    'bundle' => 'field_collection_donor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_donor_name_first',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
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

  // Exported field_instance: 'field_collection_item-field_collection_donor-field_donor_name_last'
  $field_instances['field_collection_item-field_collection_donor-field_donor_name_last'] = array(
    'bundle' => 'field_collection_donor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_donor_name_last',
    'label' => 'Last Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
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

  // Exported field_instance: 'node-bookplates-field_bookplate_description'
  $field_instances['node-bookplates-field_bookplate_description'] = array(
    'bundle' => 'bookplates',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bookplates_landing_page' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bookplate_description',
    'label' => 'Bookplate Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'php_code' => 0,
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-bookplates-field_bookplate_image'
  $field_instances['node-bookplates-field_bookplate_image'] = array(
    'bundle' => 'bookplates',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bookplates_landing_page' => array(
        'label' => 'hidden',
        'module' => 'fancybox',
        'settings' => array(
          'fancybox_caption' => 'auto',
          'fancybox_caption_custom' => '',
          'fancybox_gallery' => 'post',
          'fancybox_gallery_custom' => '',
          'fancybox_image_style_content' => 'medium',
          'fancybox_image_style_fancybox' => 'large',
        ),
        'type' => 'fancybox',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image_link_formatter',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image_link_formatter',
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
      'landing_page' => array(
        'label' => 'hidden',
        'module' => 'fancybox',
        'settings' => array(
          'fancybox_caption' => 'auto',
          'fancybox_caption_custom' => '',
          'fancybox_gallery' => 'post',
          'fancybox_gallery_custom' => '',
          'fancybox_image_style_content' => 'thumbnail',
          'fancybox_image_style_fancybox' => 'large',
        ),
        'type' => 'fancybox',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'fancybox',
        'settings' => array(
          'fancybox_caption' => 'auto',
          'fancybox_caption_custom' => '',
          'fancybox_gallery' => 'post',
          'fancybox_gallery_custom' => '',
          'fancybox_image_style_content' => 'thumbnail',
          'fancybox_image_style_fancybox' => 'large',
        ),
        'type' => 'fancybox',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bookplate_image',
    'label' => 'Bookplate Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'fancybox__category_icon' => 0,
          'fancybox__custom_crop' => 0,
          'fancybox__large' => 0,
          'fancybox__linkit_thumb' => 0,
          'fancybox__media_thumbnail' => 0,
          'fancybox__medium' => 0,
          'fancybox__thumbnail' => 0,
          'fancybox__thumbnail_crop' => 0,
          'fancybox__thumbnail_large' => 0,
          'fancybox__thumbnail_small' => 0,
          'fancybox__widescreen_crop' => 0,
          'fancybox__widescreen_large' => 0,
          'fancybox__widescreen_medium' => 0,
          'fancybox__widescreen_small' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_category_icon' => 0,
          'image_custom_crop' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_media_thumbnail' => 0,
          'image_medium' => 0,
          'image_thumbnail' => 0,
          'image_thumbnail_crop' => 0,
          'image_thumbnail_large' => 0,
          'image_thumbnail_small' => 0,
          'image_widescreen_crop' => 0,
          'image_widescreen_large' => 0,
          'image_widescreen_medium' => 0,
          'image_widescreen_small' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_filter_insert' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-bookplates-field_bookplates_spak_code'
  $field_instances['node-bookplates-field_bookplates_spak_code'] = array(
    'bundle' => 'bookplates',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bookplates_landing_page' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bookplates_spak_code',
    'label' => 'Spak Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
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

  // Exported field_instance: 'node-bookplates-field_bookplates_subject_area'
  $field_instances['node-bookplates-field_bookplates_subject_area'] = array(
    'bundle' => 'bookplates',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'bookplates_landing_page' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bookplates_subject_area',
    'label' => 'Subject Area(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-bookplates-field_collection_donor'
  $field_instances['node-bookplates-field_collection_donor'] = array(
    'bundle' => 'bookplates',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_collection_donor',
    'label' => 'Donor',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-bookplates-field_give_now_link'
  $field_instances['node-bookplates-field_give_now_link'] = array(
    'bundle' => 'bookplates',
    'default_value' => array(
      0 => array(
        'field_link_description' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_link_link' => array(
          'und' => array(
            0 => array(
              'title' => 'Your donation will directly support this fund.',
              'url' => '',
              'attributes' => array(
                'target' => '_blank',
              ),
            ),
          ),
        ),
        'field_icon' => array(
          'und' => array(
            0 => array(
              'bundle' => 'uclalib',
              'icon' => 'give-now',
            ),
          ),
        ),
        'id' => NULL,
        'actions' => array(
          'remove_button' => 'Remove',
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_give_now_link',
    'label' => 'Give Now link',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(),
      'type' => 'multifield_default',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bookplate Description');
  t('Bookplate Image');
  t('Donor');
  t('First Name');
  t('Give Now link');
  t('Last Name');
  t('Spak Code');
  t('Subject Area(s)');

  return $field_instances;
}
