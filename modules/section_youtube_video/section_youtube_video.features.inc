<?php
/**
 * @file
 * section_youtube_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_youtube_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_youtube_video_node_info() {
  $items = array(
    'section_youtube_video' => array(
      'name' => t('Section - YouTube Video'),
      'base' => 'node_content',
      'description' => t('Provides funcionallity to embedd YouTube Videos.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
