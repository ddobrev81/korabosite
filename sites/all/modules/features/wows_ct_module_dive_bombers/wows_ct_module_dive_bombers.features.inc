<?php
/**
 * @file
 * wows_ct_module_dive_bombers.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_module_dive_bombers_node_info() {
  $items = array(
    'module_dive_bombers' => array(
      'name' => t('Module Dive Bombers'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
