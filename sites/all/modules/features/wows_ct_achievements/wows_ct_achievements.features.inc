<?php
/**
 * @file
 * wows_ct_achievements.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_achievements_node_info() {
  $items = array(
    'achievements' => array(
      'name' => t('Achievements'),
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
