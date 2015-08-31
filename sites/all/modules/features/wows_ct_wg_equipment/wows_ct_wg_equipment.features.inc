<?php
/**
 * @file
 * wows_ct_wg_equipment.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_wg_equipment_node_info() {
  $items = array(
    'wg_equipment' => array(
      'name' => t('WG_Equipment'),
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
