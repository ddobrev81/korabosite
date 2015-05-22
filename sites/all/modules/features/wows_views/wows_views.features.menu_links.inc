<?php
/**
 * @file
 * wows_views.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function wows_views_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_commander-skills:commander-skills
  $menu_links['main-menu_commander-skills:commander-skills'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'commander-skills',
    'router_path' => 'commander-skills',
    'link_title' => 'Commander Skills',
    'options' => array(
      'identifier' => 'main-menu_commander-skills:commander-skills',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_equipment:equipment
  $menu_links['main-menu_equipment:equipment'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'equipment',
    'router_path' => 'equipment',
    'link_title' => 'Equipment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_equipment:equipment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ships:ships
  $menu_links['main-menu_ships:ships'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ships',
    'router_path' => 'ships',
    'link_title' => 'Ships',
    'options' => array(
      'identifier' => 'main-menu_ships:ships',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_tech-tree:tech-tree
  $menu_links['main-menu_tech-tree:tech-tree'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tech-tree',
    'router_path' => 'tech-tree',
    'link_title' => 'Tech Tree',
    'options' => array(
      'identifier' => 'main-menu_tech-tree:tech-tree',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Commander Skills');
  t('Equipment');
  t('Home');
  t('Ships');
  t('Tech Tree');


  return $menu_links;
}
