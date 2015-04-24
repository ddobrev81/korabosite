<?php
/**
 * @file
 * wows_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function wows_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: flags_small.
  $styles['flags_small'] = array(
    'label' => 'Flags small',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 31,
          'height' => 20,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ship_node_view_icon.
  $styles['ship_node_view_icon'] = array(
    'label' => 'ship node view icon',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 278,
          'height' => 163,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tech_tree_class_icon.
  $styles['tech_tree_class_icon'] = array(
    'label' => 'tech tree class icon',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 22,
          'height' => 10,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tech_tree_flags_filter.
  $styles['tech_tree_flags_filter'] = array(
    'label' => 'tech tree flags filter',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => 80,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
