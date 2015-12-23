<?php
/**
 * @file
 * section_text.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_text_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_text_node_info() {
  $items = array(
    'section_text' => array(
      'name' => t('Section - text'),
      'base' => 'node_content',
      'description' => t('Provides funcionallity to create block of \'Word\' style formatted text.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
