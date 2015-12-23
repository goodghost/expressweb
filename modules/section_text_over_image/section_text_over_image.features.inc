<?php
/**
 * @file
 * section_text_over_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_text_over_image_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_text_over_image_node_info() {
  $items = array(
    'section_text_over_image' => array(
      'name' => t('Section - text over image'),
      'base' => 'node_content',
      'description' => t('Provides funcionallity to create title and short description over an image. See the examples <a href="#">here</a>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
