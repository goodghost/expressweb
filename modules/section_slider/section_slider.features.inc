<?php
/**
 * @file
 * section_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_slider_node_info() {
  $items = array(
    'section_slider' => array(
      'name' => t('Section - slider with title and description'),
      'base' => 'node_content',
      'description' => t('Provides funcionallity to create slider section with title and description.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
