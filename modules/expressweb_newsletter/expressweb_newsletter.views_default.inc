<?php
/**
 * @file
 * expressweb_newsletter.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function expressweb_newsletter_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'newsletter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Newsletter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newsletter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Zastosuj';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Przywróć';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Nagłówek: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/admin/newsletter/data.csv">Pobierz plik CSV</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Pole: Zawartość: E-mail */
  $handler->display->display_options['fields']['field_newsletter_email']['id'] = 'field_newsletter_email';
  $handler->display->display_options['fields']['field_newsletter_email']['table'] = 'field_data_field_newsletter_email';
  $handler->display->display_options['fields']['field_newsletter_email']['field'] = 'field_newsletter_email';
  /* Sort criterion: Zawartość: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Zawartość: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'newsletter' => 'newsletter',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Pole: Zawartość: E-mail */
  $handler->display->display_options['fields']['field_newsletter_email']['id'] = 'field_newsletter_email';
  $handler->display->display_options['fields']['field_newsletter_email']['table'] = 'field_data_field_newsletter_email';
  $handler->display->display_options['fields']['field_newsletter_email']['field'] = 'field_newsletter_email';
  /* Pole: Zawartość: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Data zapisania';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Pole: Zawartość: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Usuń';
  $handler->display->display_options['path'] = 'admin/newsletter';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'admin/newsletter/data.csv';
  $translatables['newsletter'] = array(
    t('Master'),
    t('Newsletter'),
    t('more'),
    t('Zastosuj'),
    t('Przywróć'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/admin/newsletter/data.csv">Pobierz plik CSV</a>'),
    t('E-mail'),
    t('Page'),
    t('Data zapisania'),
    t('Usuń'),
    t('Data export'),
  );
  $export['newsletter'] = $view;

  return $export;
}
