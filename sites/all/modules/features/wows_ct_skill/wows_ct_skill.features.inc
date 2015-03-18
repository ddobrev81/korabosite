<?php
/**
 * @file
 * wows_ct_skill.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wows_ct_skill_node_info() {
  $items = array(
    'skill' => array(
      'name' => t('Skill'),
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
