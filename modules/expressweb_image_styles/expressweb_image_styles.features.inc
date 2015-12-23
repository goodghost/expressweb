<?php
/**
 * @file
 * expressweb_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function expressweb_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: admin_thumbnail.
  $styles['admin_thumbnail'] = array(
    'name' => 'admin_thumbnail',
    'label' => 'Admin thumbnail',
    'effects' => array(
      2 => array(
        'label' => 'Skalowanie i przycinanie',
        'help' => 'Efekt skalowanie i przycinanie zachowa proporcje oryginalnego obrazu podczas skalowania a następnie przytnie obrazek na dłuższym brzegu. Efekt jest przydatny do tworzenia kwadratowych miniatur bez rozciągania obrazu.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 40,
          'height' => 40,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: big_square_600x600.
  $styles['big_square_600x600'] = array(
    'name' => 'big_square_600x600',
    'label' => 'Big square 600x600',
    'effects' => array(
      10 => array(
        'label' => 'Skalowanie i przycinanie',
        'help' => 'Efekt skalowanie i przycinanie zachowa proporcje oryginalnego obrazu podczas skalowania a następnie przytnie obrazek na dłuższym brzegu. Efekt jest przydatny do tworzenia kwadratowych miniatur bez rozciągania obrazu.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 600,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: height_180.
  $styles['height_180'] = array(
    'name' => 'height_180',
    'label' => 'height_180',
    'effects' => array(
      1 => array(
        'label' => 'Skala',
        'help' => 'Skalowanie zachowa proporcje oryginalnego obrazka. Jeśli zostanie podany jeden wymiar drugi zostanie obliczony automatycznie.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 242,
          'height' => 143,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logo.
  $styles['logo'] = array(
    'name' => 'logo',
    'label' => 'Logo (375x180)',
    'effects' => array(
      12 => array(
        'label' => 'Skala',
        'help' => 'Skalowanie zachowa proporcje oryginalnego obrazka. Jeśli zostanie podany jeden wymiar drugi zostanie obliczony automatycznie.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 375,
          'height' => 180,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: panorama_1600x900.
  $styles['panorama_1600x900'] = array(
    'name' => 'panorama_1600x900',
    'label' => 'Panorama (1600x900)',
    'effects' => array(
      19 => array(
        'label' => 'Skala',
        'help' => 'Skalowanie zachowa proporcje oryginalnego obrazka. Jeśli zostanie podany jeden wymiar drugi zostanie obliczony automatycznie.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 750,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      20 => array(
        'label' => 'Przytnij',
        'help' => 'Efekt usunie części obrazu tak aby jego rozmiary zgadzały się z wprowadzonymi niżej.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 1333,
          'height' => 750,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: room_800x390.
  $styles['room_800x390'] = array(
    'name' => 'room_800x390',
    'label' => 'Room (800x390)',
    'effects' => array(
      18 => array(
        'label' => 'Skalowanie i przycinanie',
        'help' => 'Efekt skalowanie i przycinanie zachowa proporcje oryginalnego obrazu podczas skalowania a następnie przytnie obrazek na dłuższym brzegu. Efekt jest przydatny do tworzenia kwadratowych miniatur bez rozciągania obrazu.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 390,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slider_fixed_1280x960.
  $styles['slider_fixed_1280x960'] = array(
    'name' => 'slider_fixed_1280x960',
    'label' => 'Slider fixed (1280x960)',
    'effects' => array(
      13 => array(
        'label' => 'Skala',
        'help' => 'Skalowanie zachowa proporcje oryginalnego obrazka. Jeśli zostanie podany jeden wymiar drugi zostanie obliczony automatycznie.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1280,
          'height' => 960,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slider_full_1920x800.
  $styles['slider_full_1920x800'] = array(
    'name' => 'slider_full_1920x800',
    'label' => 'Slider full (1920x800)',
    'effects' => array(
      17 => array(
        'label' => 'Skalowanie i przycinanie',
        'help' => 'Efekt skalowanie i przycinanie zachowa proporcje oryginalnego obrazu podczas skalowania a następnie przytnie obrazek na dłuższym brzegu. Efekt jest przydatny do tworzenia kwadratowych miniatur bez rozciągania obrazu.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 800,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: square_120x120.
  $styles['square_120x120'] = array(
    'name' => 'square_120x120',
    'label' => 'square_120x120',
    'effects' => array(
      6 => array(
        'label' => 'Skalowanie i przycinanie',
        'help' => 'Efekt skalowanie i przycinanie zachowa proporcje oryginalnego obrazu podczas skalowania a następnie przytnie obrazek na dłuższym brzegu. Efekt jest przydatny do tworzenia kwadratowych miniatur bez rozciągania obrazu.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: width_245.
  $styles['width_245'] = array(
    'name' => 'width_245',
    'label' => 'Width 245',
    'effects' => array(
      5 => array(
        'label' => 'Skala',
        'help' => 'Skalowanie zachowa proporcje oryginalnego obrazka. Jeśli zostanie podany jeden wymiar drugi zostanie obliczony automatycznie.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 245,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: width_720.
  $styles['width_720'] = array(
    'name' => 'width_720',
    'label' => 'width_720',
    'effects' => array(
      21 => array(
        'label' => 'Skala',
        'help' => 'Skalowanie zachowa proporcje oryginalnego obrazka. Jeśli zostanie podany jeden wymiar drugi zostanie obliczony automatycznie.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 720,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
