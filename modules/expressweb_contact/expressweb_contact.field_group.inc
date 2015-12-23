<?php
/**
 * @file
 * expressweb_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function expressweb_contact_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|contact|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional information',
    'weight' => '10',
    'children' => array(
      0 => 'field_fax',
      1 => 'field_nip',
      2 => 'field_regon',
      3 => 'field_krs',
      4 => 'group_payment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-additional-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_additional_information|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address_information|node|contact|form';
  $field_group->group_name = 'group_address_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address information',
    'weight' => '2',
    'children' => array(
      0 => 'field_street_and_number',
      1 => 'field_postal_code',
      2 => 'field_city',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-address-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_address_information|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_map_coordinates|node|contact|form';
  $field_group->group_name = 'group_map_coordinates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Map coordinates',
    'weight' => '5',
    'children' => array(
      0 => 'field_latitude',
      1 => 'field_longitude',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Map coordinates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-map-coordinates field-group-fieldset',
        'description' => 'If latitude and longitude won\'t be provided then data from "Address information" section will be used for generating map. It\'s always better to provide latitde and longitude. Don\'t know how? Just look <a href="http://www.youtube.com" target="_blank">here</a>.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_map_coordinates|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_opening_hours|node|contact|form';
  $field_group->group_name = 'group_opening_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Opening hours',
    'weight' => '9',
    'children' => array(
      0 => 'field_monday',
      1 => 'field_tusday',
      2 => 'field_wensday',
      3 => 'field_thursday',
      4 => 'field_friday',
      5 => 'field_saturday',
      6 => 'field_sunday',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Opening hours',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-opening-hours field-group-fieldset',
        'description' => 'If you won\'t provide any of the values for particular day "Closed" text will display. If your company works 24 hours a day just type in both fields for particular day the same value for example from: "09:30" to: "09:30" and it will display as "24h".',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_opening_hours|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_payment|node|contact|form';
  $field_group->group_name = 'group_payment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Payment information',
    'weight' => '21',
    'children' => array(
      0 => 'field_card_payment',
      1 => 'field_iban',
      2 => 'field_swift_code_bic',
      3 => 'field_bank_account_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payment information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-payment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_payment|node|contact|form'] = $field_group;

  return $export;
}
