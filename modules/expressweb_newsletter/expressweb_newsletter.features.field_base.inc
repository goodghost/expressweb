<?php
/**
 * @file
 * expressweb_newsletter.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function expressweb_newsletter_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_newsletter_email'
  $field_bases['field_newsletter_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_newsletter_email',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  return $field_bases;
}
