<?php
/**
 * @file
 * expressweb_conference_room.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function expressweb_conference_room_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'conference_rooms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Conference rooms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Conference rooms';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zastosuj';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Przywróć';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Pole: Zawartość: Tytuł */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Zawartość: Tytuł */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Zawartość: Opublikowane */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Zawartość: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'conference_room' => 'conference_room',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Short view */
  $handler = $view->new_display('block', 'Short view', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-md-6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Zawartość: Tytuł */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Pole: Zawartość: Images */
  $handler->display->display_options['fields']['field_conference_room_images']['id'] = 'field_conference_room_images';
  $handler->display->display_options['fields']['field_conference_room_images']['table'] = 'field_data_field_conference_room_images';
  $handler->display->display_options['fields']['field_conference_room_images']['field'] = 'field_conference_room_images';
  $handler->display->display_options['fields']['field_conference_room_images']['label'] = '';
  $handler->display->display_options['fields']['field_conference_room_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference_room_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_conference_room_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_conference_room_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_conference_room_images']['delta_offset'] = '0';
  /* Pole: Zawartość: Number of people */
  $handler->display->display_options['fields']['field_number_of_people']['id'] = 'field_number_of_people';
  $handler->display->display_options['fields']['field_number_of_people']['table'] = 'field_data_field_number_of_people';
  $handler->display->display_options['fields']['field_number_of_people']['field'] = 'field_number_of_people';
  $handler->display->display_options['fields']['field_number_of_people']['label'] = 'Ilość osób';
  /* Pole: Zawartość: Area */
  $handler->display->display_options['fields']['field_area']['id'] = 'field_area';
  $handler->display->display_options['fields']['field_area']['table'] = 'field_data_field_area';
  $handler->display->display_options['fields']['field_area']['field'] = 'field_area';
  $handler->display->display_options['fields']['field_area']['label'] = 'Powierzchnia';
  /* Pole: Zawartość: Odnośnik */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Sprawdź szczegóły';
  $translatables['conference_rooms'] = array(
    t('Master'),
    t('Conference rooms'),
    t('more'),
    t('Zastosuj'),
    t('Przywróć'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('Short view'),
    t('Ilość osób'),
    t('Powierzchnia'),
    t('Sprawdź szczegóły'),
  );
  $export['conference_rooms'] = $view;

  return $export;
}
