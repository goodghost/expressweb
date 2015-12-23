<?php
/**
 * @file
 * section_item_with_link.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_item_with_link_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_item_with_link_node_info() {
  $items = array(
    'section_item_with_link' => array(
      'name' => t('Section - item with link'),
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
