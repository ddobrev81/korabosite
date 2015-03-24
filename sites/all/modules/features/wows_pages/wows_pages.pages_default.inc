<?php
/**
 * @file
 * wows_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function wows_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__custom_node_view';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'custom node view',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'custom_node_view',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7478948b-b09a-4853-9b72-aa0e83a5b948';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-61c0e9b8-13ed-4b73-b5db-306466113e43';
    $pane->panel = 'left_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'ships-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61c0e9b8-13ed-4b73-b5db-306466113e43';
    $display->content['new-61c0e9b8-13ed-4b73-b5db-306466113e43'] = $pane;
    $display->panels['left_above'][0] = 'new-61c0e9b8-13ed-4b73-b5db-306466113e43';
    $pane = new stdClass();
    $pane->pid = 'new-68b88ec6-a678-4521-8b93-0e695f8819f3';
    $pane->panel = 'left_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'guns-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '68b88ec6-a678-4521-8b93-0e695f8819f3';
    $display->content['new-68b88ec6-a678-4521-8b93-0e695f8819f3'] = $pane;
    $display->panels['left_below'][0] = 'new-68b88ec6-a678-4521-8b93-0e695f8819f3';
    $pane = new stdClass();
    $pane->pid = 'new-9efc76ba-5c4a-410d-8ba1-42ef3d04a492';
    $pane->panel = 'left_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'gun_control-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9efc76ba-5c4a-410d-8ba1-42ef3d04a492';
    $display->content['new-9efc76ba-5c4a-410d-8ba1-42ef3d04a492'] = $pane;
    $display->panels['left_below'][1] = 'new-9efc76ba-5c4a-410d-8ba1-42ef3d04a492';
    $pane = new stdClass();
    $pane->pid = 'new-3cc7076e-a2df-4ec3-aa73-4657a561ed46';
    $pane->panel = 'right_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'ships_stats-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3cc7076e-a2df-4ec3-aa73-4657a561ed46';
    $display->content['new-3cc7076e-a2df-4ec3-aa73-4657a561ed46'] = $pane;
    $display->panels['right_above'][0] = 'new-3cc7076e-a2df-4ec3-aa73-4657a561ed46';
    $pane = new stdClass();
    $pane->pid = 'new-4aeeadd1-bf19-4281-b128-ea48184d9bf1';
    $pane->panel = 'right_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'hulls-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4aeeadd1-bf19-4281-b128-ea48184d9bf1';
    $display->content['new-4aeeadd1-bf19-4281-b128-ea48184d9bf1'] = $pane;
    $display->panels['right_below'][0] = 'new-4aeeadd1-bf19-4281-b128-ea48184d9bf1';
    $pane = new stdClass();
    $pane->pid = 'new-3d776fc4-813d-414c-a39b-0d4fa7bfb4ea';
    $pane->panel = 'right_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'engines-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3d776fc4-813d-414c-a39b-0d4fa7bfb4ea';
    $display->content['new-3d776fc4-813d-414c-a39b-0d4fa7bfb4ea'] = $pane;
    $display->panels['right_below'][1] = 'new-3d776fc4-813d-414c-a39b-0d4fa7bfb4ea';
    $pane = new stdClass();
    $pane->pid = 'new-a6d45fdb-d834-46ea-bf63-81a7af83545c';
    $pane->panel = 'right_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'torpedoes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a6d45fdb-d834-46ea-bf63-81a7af83545c';
    $display->content['new-a6d45fdb-d834-46ea-bf63-81a7af83545c'] = $pane;
    $display->panels['right_below'][2] = 'new-a6d45fdb-d834-46ea-bf63-81a7af83545c';
    $pane = new stdClass();
    $pane->pid = 'new-d1b96ca5-79a4-48a8-a674-88df9a5610c0';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_nation_ent_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'default',
        'links' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd1b96ca5-79a4-48a8-a674-88df9a5610c0';
    $display->content['new-d1b96ca5-79a4-48a8-a674-88df9a5610c0'] = $pane;
    $display->panels['top'][0] = 'new-d1b96ca5-79a4-48a8-a674-88df9a5610c0';
    $pane = new stdClass();
    $pane->pid = 'new-9ad5869b-b526-4025-bdfa-7b6d34e11baf';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9ad5869b-b526-4025-bdfa-7b6d34e11baf';
    $display->content['new-9ad5869b-b526-4025-bdfa-7b6d34e11baf'] = $pane;
    $display->panels['top'][1] = 'new-9ad5869b-b526-4025-bdfa-7b6d34e11baf';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__custom_node_view'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function wows_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'commander_skills';
  $page->task = 'page';
  $page->admin_title = 'Commander Skills';
  $page->admin_description = '';
  $page->path = 'commander-skills';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Commander Skills',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_commander_skills__panel_context_d02e18ee-1d44-40c3-858e-7a89af80d5bb';
  $handler->task = 'page';
  $handler->subtask = 'commander_skills';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e325cde7-d85b-4247-9c90-345ae1379f7f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3908749a-a2b6-4e2d-b444-c2cc772af6eb';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'skills_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3908749a-a2b6-4e2d-b444-c2cc772af6eb';
    $display->content['new-3908749a-a2b6-4e2d-b444-c2cc772af6eb'] = $pane;
    $display->panels['top'][0] = 'new-3908749a-a2b6-4e2d-b444-c2cc772af6eb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['commander_skills'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ships';
  $page->task = 'page';
  $page->admin_title = 'Ships';
  $page->admin_description = '';
  $page->path = 'ships';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Ships',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ships__panel_context_c74eddbf-0d7b-41db-82f8-ddc8270a1399';
  $handler->task = 'page';
  $handler->subtask = 'ships';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '44c4e8c0-a835-4ff5-9ec9-7754e68221e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f281915c-922a-4196-8115-ec6d8c7f92a2';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'ships_listing_main_menu-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f281915c-922a-4196-8115-ec6d8c7f92a2';
    $display->content['new-f281915c-922a-4196-8115-ec6d8c7f92a2'] = $pane;
    $display->panels['top'][0] = 'new-f281915c-922a-4196-8115-ec6d8c7f92a2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ships'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tech_tree';
  $page->task = 'page';
  $page->admin_title = 'Tech Tree';
  $page->admin_description = '';
  $page->path = 'tech-tree';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Tech Tree',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tech_tree__panel_context_fcfc3b2d-9593-411b-8703-a7db3d3fe757';
  $handler->task = 'page';
  $handler->subtask = 'tech_tree';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1cab5b1-9488-42e5-afcf-45719d1630b3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-822a1ca8-ec6f-4c35-a6b3-a3da60db130b';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Under Construction(tm)',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '822a1ca8-ec6f-4c35-a6b3-a3da60db130b';
    $display->content['new-822a1ca8-ec6f-4c35-a6b3-a3da60db130b'] = $pane;
    $display->panels['top'][0] = 'new-822a1ca8-ec6f-4c35-a6b3-a3da60db130b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tech_tree'] = $page;

  return $pages;

}