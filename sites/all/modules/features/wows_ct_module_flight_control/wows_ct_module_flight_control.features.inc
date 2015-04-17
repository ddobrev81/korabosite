<?php
/**
 * @file
 * wows_ct_module_flight_control.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_module_flight_control_node_info() {
  $items = array(
    'module_flight_control' => array(
      'name' => t('Module Flight Control'),
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
