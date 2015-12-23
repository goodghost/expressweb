<?php
/**
 * @file
 * expressweb_featured_offers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function expressweb_featured_offers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_offers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured offers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured offers';
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zastosuj';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Przywróć';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-md-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Pole: Zawartość: Tytuł */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Pole: Zawartość: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Pole: Zawartość: Price from */
  $handler->display->display_options['fields']['field_fo_price_from']['id'] = 'field_fo_price_from';
  $handler->display->display_options['fields']['field_fo_price_from']['table'] = 'field_data_field_fo_price_from';
  $handler->display->display_options['fields']['field_fo_price_from']['field'] = 'field_fo_price_from';
  $handler->display->display_options['fields']['field_fo_price_from']['label'] = '';
  $handler->display->display_options['fields']['field_fo_price_from']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fo_price_from']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fo_price_from']['type'] = 'text_plain';
  /* Pole: Zawartość: Odnośnik */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Sprawdź szczegóły';
  /* Sort criterion: Zawartość: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'featured_offers' => 'featured_offers',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Offer */
  $handler = $view->new_display('block', 'Offer', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Zawartość: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'big_square_600x600',
    'image_link' => 'content',
  );
  /* Pole: Zawartość: Tytuł */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Pole: Zawartość: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Pole: Zawartość: Price from */
  $handler->display->display_options['fields']['field_fo_price_from']['id'] = 'field_fo_price_from';
  $handler->display->display_options['fields']['field_fo_price_from']['table'] = 'field_data_field_fo_price_from';
  $handler->display->display_options['fields']['field_fo_price_from']['field'] = 'field_fo_price_from';
  $handler->display->display_options['fields']['field_fo_price_from']['label'] = '';
  $handler->display->display_options['fields']['field_fo_price_from']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fo_price_from']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fo_price_from']['type'] = 'text_plain';
  /* Pole: Zawartość: Odnośnik */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Sprawdź szczegóły';
  /* Pole: Zawartość: Price from */
  $handler->display->display_options['fields']['field_fo_price_from_1']['id'] = 'field_fo_price_from_1';
  $handler->display->display_options['fields']['field_fo_price_from_1']['table'] = 'field_data_field_fo_price_from';
  $handler->display->display_options['fields']['field_fo_price_from_1']['field'] = 'field_fo_price_from';
  $handler->display->display_options['fields']['field_fo_price_from_1']['label'] = '';
  $handler->display->display_options['fields']['field_fo_price_from_1']['element_label_colon'] = FALSE;
  $translatables['featured_offers'] = array(
    t('Master'),
    t('Featured offers'),
    t('more'),
    t('Zastosuj'),
    t('Przywróć'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Sprawdź szczegóły'),
    t('Block'),
    t('Offer'),
  );
  $export['featured_offers'] = $view;

  return $export;
}
