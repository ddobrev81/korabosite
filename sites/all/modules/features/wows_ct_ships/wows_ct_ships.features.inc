<?php
/**
 * @file
 * wows_ct_ships.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_ships_node_info() {
  $items = array(
    'ships' => array(
      'name' => t('Ships'),
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
