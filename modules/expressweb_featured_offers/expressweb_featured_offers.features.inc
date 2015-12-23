<?php
/**
 * @file
 * expressweb_featured_offers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function expressweb_featured_offers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function expressweb_featured_offers_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function expressweb_featured_offers_node_info() {
  $items = array(
    'featured_offers' => array(
      'name' => t('Featured offers'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
