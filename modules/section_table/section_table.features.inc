<?php
/**
 * @file
 * section_table.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_table_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_table_node_info() {
  $items = array(
    'table_price_list' => array(
      'name' => t('Table price list'),
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
