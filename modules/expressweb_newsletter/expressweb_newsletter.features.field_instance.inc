<?php
/**
 * @file
 * expressweb_newsletter.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function expressweb_newsletter_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-newsletter-field_newsletter_email'
  $field_instances['node-newsletter-field_newsletter_email'] = array(
    'bundle' => 'newsletter',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
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
    'field_name' => 'field_newsletter_email',
    'label' => 'E-mail',
    'required' => 1,
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
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('E-mail');

  return $field_instances;
}
