<?php
/**
 * @file
 * wows_ct_module_profile_ranks.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_module_profile_ranks_node_info() {
  $items = array(
    'profile_ranks' => array(
      'name' => t('Profile Ranks'),
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
