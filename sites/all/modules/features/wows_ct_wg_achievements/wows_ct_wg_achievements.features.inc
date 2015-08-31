<?php
/**
 * @file
 * wows_ct_wg_achievements.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_wg_achievements_node_info() {
  $items = array(
    'wg_achievements' => array(
      'name' => t('WG_Achievements'),
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
