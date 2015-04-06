<?php
/**
 * @file
 * wows_ct_module_equipment.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_module_equipment_node_info() {
  $items = array(
    'equipment' => array(
      'name' => t('Equipment'),
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
