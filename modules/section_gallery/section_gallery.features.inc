<?php
/**
 * @file
 * section_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_gallery_node_info() {
  $items = array(
    'section_gallery' => array(
      'name' => t('Section - gallery'),
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
