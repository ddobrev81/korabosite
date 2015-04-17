<?php
/**
 * @file
 * wows_ct_module_torpedo_bombers.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_module_torpedo_bombers_node_info() {
  $items = array(
    'module_torpedo_bombers' => array(
      'name' => t('Module Torpedo Bombers'),
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
