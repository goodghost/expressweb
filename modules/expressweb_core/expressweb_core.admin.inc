<?php 

function expressweb_core_settings() {
  $form = array();

  $form['expressweb_core_theme_color_scheme'] = array(
    '#type' => 'radios',
    '#title' => t('Set light or dark color scheme'),
    '#options' => array(
      0 => t('Light'),
      1 => t('Dark'),
    ),
    '#default_value' => variable_get('expressweb_core_theme_color_scheme', 0),
  );

  $form['expressweb_core_theme_header_layout'] = array(
    '#type' => 'radios',
    '#title' => t('Set header layout'),
    '#options' => array(
      0 => t('Two lines: Logo first - Nav second'),
      1 => t('Two lines: Nav first - Logo second'),
      2 => t('One line: Logo left - Nav right'),
      3 => t('One line: Nav left - Logo right'),
      4 => t('Zagron style'),
    ),
    '#default_value' => variable_get('expressweb_core_theme_header_layout', 0),
  );

  $form['expressweb_core_theme_header_width'] = array(
    '#type' => 'radios',
    '#title' => t('Set header width'),
    '#options' => array(
      0 => t('Fixed'),
      1 => t('Fluid'),
    ),
    '#default_value' => variable_get('expressweb_core_theme_header_width', 0),
  );

  /* Messages style - modal or default */
  $form['expressweb_core_theme_messages'] = array(
    '#type' => 'radios',
    '#title' => t('Set messages style'),
    '#options' => array(
      0 => t('Default'),
      1 => t('Modal'),
    ),
    '#default_value' => variable_get('expressweb_core_theme_messages', 0),
  );


  return system_settings_form($form);
}