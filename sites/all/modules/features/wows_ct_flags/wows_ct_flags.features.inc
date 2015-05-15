<?php
/**
 * @file
 * wows_ct_flags.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_flags_node_info() {
  $items = array(
    'flags' => array(
      'name' => t('Flags'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
