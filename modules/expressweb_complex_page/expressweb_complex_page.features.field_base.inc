<?php
/**
 * @file
 * expressweb_complex_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function expressweb_complex_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_display_title'
  $field_bases['field_display_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_display_title',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_sections'
  $field_bases['field_sections'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sections',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'contact' => 'contact',
          'contact_templates' => 'contact_templates',
          'section_description_and_images' => 'section_description_and_images',
          'section_gallery' => 'section_gallery',
          'section_item_with_link' => 'section_item_with_link',
          'section_slider' => 'section_slider',
          'section_text' => 'section_text',
          'section_text_over_image' => 'section_text_over_image',
          'section_youtube_video' => 'section_youtube_video',
          'table_price_list' => 'table_price_list',
          'view' => 'view',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
