<?php
/**
 * @file
 * wows_ct_module_guns.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_module_guns_node_info() {
  $items = array(
    'module_guns' => array(
      'name' => t('Module Guns'),
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
