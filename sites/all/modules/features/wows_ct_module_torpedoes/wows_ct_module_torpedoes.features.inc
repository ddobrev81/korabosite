<?php
/**
 * @file
 * wows_ct_module_torpedoes.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_module_torpedoes_node_info() {
  $items = array(
    'module_torpedoes' => array(
      'name' => t('Module Torpedoes'),
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
