<?php
/**
 * @file
 * wows_ct_module_engine.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_module_engine_node_info() {
  $items = array(
    'module_engine' => array(
      'name' => t('Module Engine'),
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
