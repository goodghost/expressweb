<?php
/**
 * @file
 * expressweb_social_links.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function expressweb_social_links_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function expressweb_social_links_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function expressweb_social_links_node_info() {
  $items = array(
    'social_links' => array(
      'name' => t('Social links'),
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
