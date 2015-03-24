<?php
/**
 * @file
 * wows_ct_module_hulls.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_module_hulls_node_info() {
  $items = array(
    'module_hulls' => array(
      'name' => t('Module Hulls'),
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
