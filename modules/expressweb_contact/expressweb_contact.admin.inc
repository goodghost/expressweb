<?php 

function expressweb_contact_settings() {
  $form = array();

  $form['expressweb_contact_contact_form'] = array(
    '#type' => 'radios',
    '#title' => t('Enable contact form'),
    '#options' => array(
      0 => t('No'),
      1 => t('Yes'),
    ),
    '#default_value' => variable_get('expressweb_contact_contact_form', 0),
  );

  $form['expressweb_contact_contact_style'] = array(
    '#type' => 'radios',
    '#title' => t('Set contact full page style'),
    '#options' => array(
      0 => t('Default'),
      1 => t('Zagron'),
    ),
    '#default_value' => variable_get('expressweb_contact_contact_style', 0),
  );

  return system_settings_form($form);
}