<?php
/**
 * @file
 * section_table.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function section_table_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_price_table'
  $field_bases['field_price_table'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_price_table',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tablefield',
    'settings' => array(
      'cell_processing' => 0,
      'export' => 0,
      'lock_values' => 1,
      'restrict_rebuild' => 1,
    ),
    'translatable' => 0,
    'type' => 'tablefield',
  );

  // Exported field_base: 'field_table_width'
  $field_bases['field_table_width'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_table_width',
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
        0 => 'Full (100%)',
        1 => 'Fixed',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_text_below_table'
  $field_bases['field_text_below_table'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_text_below_table',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
