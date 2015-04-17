<?php
/**
 * @file
 * wows_ct_module_fighters.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_module_fighters_node_info() {
  $items = array(
    'module_fighters' => array(
      'name' => t('Module Fighters'),
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
