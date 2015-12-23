<?php
/**
 * @file
 * section_description_and_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_description_and_images_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_description_and_images_node_info() {
  $items = array(
    'section_description_and_images' => array(
      'name' => t('Section - description and images'),
      'base' => 'node_content',
      'description' => t('Provides funcionallity to create title, description and photos beneath. See the examples <a href="#">here</a>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
