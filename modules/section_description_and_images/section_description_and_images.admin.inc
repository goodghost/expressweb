<?php 

function section_description_and_images_settings() {
  $form = array();

  $form['section_description_and_images_images_style'] = array(
    '#type' => 'radios',
    '#title' => t('Set default images style'),
    '#options' => array(
      0 => t('Bootstrap columns'),
      1 => t('Slideshow'),
    ),
    '#default_value' => variable_get('section_description_and_images_images_style', 0),
  );

  return system_settings_form($form);
}