<?php
/**
 * @file
 * expressweb_contact.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function expressweb_contact_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'templates';
  $ds_view_mode->label = 'Templates';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['templates'] = $ds_view_mode;

  return $export;
}
