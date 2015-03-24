<?php
/**
 * @file
 * wows_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wows_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'engines';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Engines';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Engines';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_engines_node']['id'] = 'reverse_field_engines_node';
  $handler->display->display_options['relationships']['reverse_field_engines_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_engines_node']['field'] = 'reverse_field_engines_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Name';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$cut = strpos($row->title, \']\');
return substr($row->title, $cut+1);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Experience cost */
  $handler->display->display_options['fields']['field_experience_cost']['id'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['table'] = 'field_data_field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['field'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Credit cost */
  $handler->display->display_options['fields']['field_credit_cost']['id'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['table'] = 'field_data_field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['field'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Maximum Speed */
  $handler->display->display_options['fields']['field_maximum_speed']['id'] = 'field_maximum_speed';
  $handler->display->display_options['fields']['field_maximum_speed']['table'] = 'field_data_field_maximum_speed';
  $handler->display->display_options['fields']['field_maximum_speed']['field'] = 'field_maximum_speed';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_engines_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'module_engine' => 'module_engine',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['engines'] = $view;

  $view = new view();
  $view->name = 'gun_control';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gun control';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gun Control System';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_gun_controls_node']['id'] = 'reverse_field_gun_controls_node';
  $handler->display->display_options['relationships']['reverse_field_gun_controls_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_gun_controls_node']['field'] = 'reverse_field_gun_controls_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Name';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$cut = strpos($row->title, \']\');
return substr($row->title, $cut+1);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Experience cost */
  $handler->display->display_options['fields']['field_experience_cost']['id'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['table'] = 'field_data_field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['field'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Credit cost */
  $handler->display->display_options['fields']['field_credit_cost']['id'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['table'] = 'field_data_field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['field'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Firing Range */
  $handler->display->display_options['fields']['field_firing_range']['id'] = 'field_firing_range';
  $handler->display->display_options['fields']['field_firing_range']['table'] = 'field_data_field_firing_range';
  $handler->display->display_options['fields']['field_firing_range']['field'] = 'field_firing_range';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_gun_controls_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'module_gun_control' => 'module_gun_control',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['gun_control'] = $view;

  $view = new view();
  $view->name = 'guns';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Guns';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Guns';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_experience_cost' => 'field_experience_cost',
    'field_credit_cost' => 'field_credit_cost',
    'field_caliber' => 'field_caliber',
    'field_he_maximum_damage' => 'field_he_maximum_damage',
    'field_ap_maximum_damage' => 'field_ap_maximum_damage',
    'field_rate_of_fire' => 'field_rate_of_fire',
    'field_180_degree_turn_time' => 'field_180_degree_turn_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_experience_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_credit_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_caliber' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_he_maximum_damage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ap_maximum_damage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rate_of_fire' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_180_degree_turn_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_guns_node']['id'] = 'reverse_field_guns_node';
  $handler->display->display_options['relationships']['reverse_field_guns_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_guns_node']['field'] = 'reverse_field_guns_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Name';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$cut = strpos($row->title, \']\');
return substr($row->title, $cut+1);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Experience cost */
  $handler->display->display_options['fields']['field_experience_cost']['id'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['table'] = 'field_data_field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['field'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Credit cost */
  $handler->display->display_options['fields']['field_credit_cost']['id'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['table'] = 'field_data_field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['field'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Caliber */
  $handler->display->display_options['fields']['field_caliber']['id'] = 'field_caliber';
  $handler->display->display_options['fields']['field_caliber']['table'] = 'field_data_field_caliber';
  $handler->display->display_options['fields']['field_caliber']['field'] = 'field_caliber';
  /* Field: Content: HE Maximum Damage */
  $handler->display->display_options['fields']['field_he_maximum_damage']['id'] = 'field_he_maximum_damage';
  $handler->display->display_options['fields']['field_he_maximum_damage']['table'] = 'field_data_field_he_maximum_damage';
  $handler->display->display_options['fields']['field_he_maximum_damage']['field'] = 'field_he_maximum_damage';
  $handler->display->display_options['fields']['field_he_maximum_damage']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: AP Maximum Damage */
  $handler->display->display_options['fields']['field_ap_maximum_damage']['id'] = 'field_ap_maximum_damage';
  $handler->display->display_options['fields']['field_ap_maximum_damage']['table'] = 'field_data_field_ap_maximum_damage';
  $handler->display->display_options['fields']['field_ap_maximum_damage']['field'] = 'field_ap_maximum_damage';
  $handler->display->display_options['fields']['field_ap_maximum_damage']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Rate of Fire */
  $handler->display->display_options['fields']['field_rate_of_fire']['id'] = 'field_rate_of_fire';
  $handler->display->display_options['fields']['field_rate_of_fire']['table'] = 'field_data_field_rate_of_fire';
  $handler->display->display_options['fields']['field_rate_of_fire']['field'] = 'field_rate_of_fire';
  /* Field: Content: 180 Degree Turn Time */
  $handler->display->display_options['fields']['field_180_degree_turn_time']['id'] = 'field_180_degree_turn_time';
  $handler->display->display_options['fields']['field_180_degree_turn_time']['table'] = 'field_data_field_180_degree_turn_time';
  $handler->display->display_options['fields']['field_180_degree_turn_time']['field'] = 'field_180_degree_turn_time';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_guns_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'ships' => 'ships',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'module_guns' => 'module_guns',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['guns'] = $view;

  $view = new view();
  $view->name = 'hulls';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hulls';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hulls';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'php' => 'php',
    'field_experience_cost' => 'field_experience_cost',
    'field_credit_cost' => 'field_credit_cost',
    'field_combat_capability' => 'field_combat_capability',
    'field_armor' => 'field_armor',
    'field_hangar_capacity' => 'field_hangar_capacity',
    'field_main_turrets' => 'field_main_turrets',
    'field_secondary_gun_turrets' => 'field_secondary_gun_turrets',
    'field_torpedo_tubes' => 'field_torpedo_tubes',
    'field_aa_guns' => 'field_aa_guns',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_experience_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_credit_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_combat_capability' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_armor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hangar_capacity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_main_turrets' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_secondary_gun_turrets' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_torpedo_tubes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aa_guns' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_hulls_node']['id'] = 'reverse_field_hulls_node';
  $handler->display->display_options['relationships']['reverse_field_hulls_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_hulls_node']['field'] = 'reverse_field_hulls_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Name';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$cut = strpos($row->title, \']\');
return substr($row->title, $cut+1);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Experience cost */
  $handler->display->display_options['fields']['field_experience_cost']['id'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['table'] = 'field_data_field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['field'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['label'] = 'Exp cost';
  $handler->display->display_options['fields']['field_experience_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Credit cost */
  $handler->display->display_options['fields']['field_credit_cost']['id'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['table'] = 'field_data_field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['field'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Combat Capability */
  $handler->display->display_options['fields']['field_combat_capability']['id'] = 'field_combat_capability';
  $handler->display->display_options['fields']['field_combat_capability']['table'] = 'field_data_field_combat_capability';
  $handler->display->display_options['fields']['field_combat_capability']['field'] = 'field_combat_capability';
  $handler->display->display_options['fields']['field_combat_capability']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Armor */
  $handler->display->display_options['fields']['field_armor']['id'] = 'field_armor';
  $handler->display->display_options['fields']['field_armor']['table'] = 'field_data_field_armor';
  $handler->display->display_options['fields']['field_armor']['field'] = 'field_armor';
  /* Field: Content: Hangar Capacity */
  $handler->display->display_options['fields']['field_hangar_capacity']['id'] = 'field_hangar_capacity';
  $handler->display->display_options['fields']['field_hangar_capacity']['table'] = 'field_data_field_hangar_capacity';
  $handler->display->display_options['fields']['field_hangar_capacity']['field'] = 'field_hangar_capacity';
  $handler->display->display_options['fields']['field_hangar_capacity']['hide_empty'] = TRUE;
  /* Field: Content: Main Turrets */
  $handler->display->display_options['fields']['field_main_turrets']['id'] = 'field_main_turrets';
  $handler->display->display_options['fields']['field_main_turrets']['table'] = 'field_data_field_main_turrets';
  $handler->display->display_options['fields']['field_main_turrets']['field'] = 'field_main_turrets';
  $handler->display->display_options['fields']['field_main_turrets']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Secondary Gun Turrets */
  $handler->display->display_options['fields']['field_secondary_gun_turrets']['id'] = 'field_secondary_gun_turrets';
  $handler->display->display_options['fields']['field_secondary_gun_turrets']['table'] = 'field_data_field_secondary_gun_turrets';
  $handler->display->display_options['fields']['field_secondary_gun_turrets']['field'] = 'field_secondary_gun_turrets';
  $handler->display->display_options['fields']['field_secondary_gun_turrets']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_gun_turrets']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_gun_turrets']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Torpedo Tubes */
  $handler->display->display_options['fields']['field_torpedo_tubes']['id'] = 'field_torpedo_tubes';
  $handler->display->display_options['fields']['field_torpedo_tubes']['table'] = 'field_data_field_torpedo_tubes';
  $handler->display->display_options['fields']['field_torpedo_tubes']['field'] = 'field_torpedo_tubes';
  $handler->display->display_options['fields']['field_torpedo_tubes']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_torpedo_tubes']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: AA Guns */
  $handler->display->display_options['fields']['field_aa_guns']['id'] = 'field_aa_guns';
  $handler->display->display_options['fields']['field_aa_guns']['table'] = 'field_data_field_aa_guns';
  $handler->display->display_options['fields']['field_aa_guns']['field'] = 'field_aa_guns';
  $handler->display->display_options['fields']['field_aa_guns']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_aa_guns']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_hulls_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'module_hulls' => 'module_hulls',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['hulls'] = $view;

  $view = new view();
  $view->name = 'ships';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nation' => 'field_nation',
    'field_class' => 'field_class',
    'field_tier' => 'field_tier',
    'body' => 'body',
    'field_experience_cost' => 'field_experience_cost',
    'field_credit_cost' => 'field_credit_cost',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tier' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_experience_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_credit_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nation */
  $handler->display->display_options['fields']['field_nation']['id'] = 'field_nation';
  $handler->display->display_options['fields']['field_nation']['table'] = 'field_data_field_nation';
  $handler->display->display_options['fields']['field_nation']['field'] = 'field_nation';
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'field_data_field_class';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  /* Field: Content: Tier */
  $handler->display->display_options['fields']['field_tier']['id'] = 'field_tier';
  $handler->display->display_options['fields']['field_tier']['table'] = 'field_data_field_tier';
  $handler->display->display_options['fields']['field_tier']['field'] = 'field_tier';
  $handler->display->display_options['fields']['field_tier']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: Content: Experience cost */
  $handler->display->display_options['fields']['field_experience_cost']['id'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['table'] = 'field_data_field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['field'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Credit cost */
  $handler->display->display_options['fields']['field_credit_cost']['id'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['table'] = 'field_data_field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['field'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ships' => 'ships',
  );

  /* Display: Ships */
  $handler = $view->new_display('panel_pane', 'Ships', 'panel_pane_1');
  $handler->display->display_options['link_to_view'] = '0';
  $export['ships'] = $view;

  $view = new view();
  $view->name = 'ships_listing_main_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ships listing main menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_tier',
      'rendered' => 0,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tier */
  $handler->display->display_options['fields']['field_tier']['id'] = 'field_tier';
  $handler->display->display_options['fields']['field_tier']['table'] = 'field_data_field_tier';
  $handler->display->display_options['fields']['field_tier']['field'] = 'field_tier';
  $handler->display->display_options['fields']['field_tier']['label'] = '';
  $handler->display->display_options['fields']['field_tier']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tier']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tier']['alter']['text'] = 'Tier [field_tier]';
  $handler->display->display_options['fields']['field_tier']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tier']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Tier (field_tier) */
  $handler->display->display_options['sorts']['field_tier_tid']['id'] = 'field_tier_tid';
  $handler->display->display_options['sorts']['field_tier_tid']['table'] = 'field_data_field_tier';
  $handler->display->display_options['sorts']['field_tier_tid']['field'] = 'field_tier_tid';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ships' => 'ships',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['ships_listing_main_menu'] = $view;

  $view = new view();
  $view->name = 'ships_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ships stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_survivability' => 'field_survivability',
    'field_artillery' => 'field_artillery',
    'field_ship_torpedoes' => 'field_ship_torpedoes',
    'field_ship_aa_guns' => 'field_ship_aa_guns',
    'field_maneurability' => 'field_maneurability',
    'field_concealment' => 'field_concealment',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_survivability' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artillery' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_ship_torpedoes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_ship_aa_guns' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_maneurability' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_concealment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  /* Field: Content: Survivability */
  $handler->display->display_options['fields']['field_survivability']['id'] = 'field_survivability';
  $handler->display->display_options['fields']['field_survivability']['table'] = 'field_data_field_survivability';
  $handler->display->display_options['fields']['field_survivability']['field'] = 'field_survivability';
  $handler->display->display_options['fields']['field_survivability']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_survivability']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_survivability']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Artillery */
  $handler->display->display_options['fields']['field_artillery']['id'] = 'field_artillery';
  $handler->display->display_options['fields']['field_artillery']['table'] = 'field_data_field_artillery';
  $handler->display->display_options['fields']['field_artillery']['field'] = 'field_artillery';
  $handler->display->display_options['fields']['field_artillery']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_artillery']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_artillery']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Torpedoes */
  $handler->display->display_options['fields']['field_ship_torpedoes']['id'] = 'field_ship_torpedoes';
  $handler->display->display_options['fields']['field_ship_torpedoes']['table'] = 'field_data_field_ship_torpedoes';
  $handler->display->display_options['fields']['field_ship_torpedoes']['field'] = 'field_ship_torpedoes';
  $handler->display->display_options['fields']['field_ship_torpedoes']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ship_torpedoes']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ship_torpedoes']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: AA Guns */
  $handler->display->display_options['fields']['field_ship_aa_guns']['id'] = 'field_ship_aa_guns';
  $handler->display->display_options['fields']['field_ship_aa_guns']['table'] = 'field_data_field_ship_aa_guns';
  $handler->display->display_options['fields']['field_ship_aa_guns']['field'] = 'field_ship_aa_guns';
  $handler->display->display_options['fields']['field_ship_aa_guns']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ship_aa_guns']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ship_aa_guns']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Maneurability */
  $handler->display->display_options['fields']['field_maneurability']['id'] = 'field_maneurability';
  $handler->display->display_options['fields']['field_maneurability']['table'] = 'field_data_field_maneurability';
  $handler->display->display_options['fields']['field_maneurability']['field'] = 'field_maneurability';
  $handler->display->display_options['fields']['field_maneurability']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Concealment */
  $handler->display->display_options['fields']['field_concealment']['id'] = 'field_concealment';
  $handler->display->display_options['fields']['field_concealment']['table'] = 'field_data_field_concealment';
  $handler->display->display_options['fields']['field_concealment']['field'] = 'field_concealment';
  $handler->display->display_options['fields']['field_concealment']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ships' => 'ships',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['ships_stats'] = $view;

  $view = new view();
  $view->name = 'skills_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Skills listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Commander Skills';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_skill_tier' => 'field_skill_tier',
    'title' => 'title',
    'body' => 'body',
    'field_effects' => 'field_effects',
    'field_skill_cost' => 'field_skill_cost',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_skill_tier' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_effects' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_skill_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Skill Tier */
  $handler->display->display_options['fields']['field_skill_tier']['id'] = 'field_skill_tier';
  $handler->display->display_options['fields']['field_skill_tier']['table'] = 'field_data_field_skill_tier';
  $handler->display->display_options['fields']['field_skill_tier']['field'] = 'field_skill_tier';
  $handler->display->display_options['fields']['field_skill_tier']['label'] = 'Tier';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: Content: Effects */
  $handler->display->display_options['fields']['field_effects']['id'] = 'field_effects';
  $handler->display->display_options['fields']['field_effects']['table'] = 'field_data_field_effects';
  $handler->display->display_options['fields']['field_effects']['field'] = 'field_effects';
  $handler->display->display_options['fields']['field_effects']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_effects']['multi_type'] = 'ul';
  /* Field: Content: Skill cost */
  $handler->display->display_options['fields']['field_skill_cost']['id'] = 'field_skill_cost';
  $handler->display->display_options['fields']['field_skill_cost']['table'] = 'field_data_field_skill_cost';
  $handler->display->display_options['fields']['field_skill_cost']['field'] = 'field_skill_cost';
  $handler->display->display_options['fields']['field_skill_cost']['label'] = 'Cost';
  /* Sort criterion: Content: Skill Tier (field_skill_tier) */
  $handler->display->display_options['sorts']['field_skill_tier_value']['id'] = 'field_skill_tier_value';
  $handler->display->display_options['sorts']['field_skill_tier_value']['table'] = 'field_data_field_skill_tier';
  $handler->display->display_options['sorts']['field_skill_tier_value']['field'] = 'field_skill_tier_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'skill' => 'skill',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['skills_listing'] = $view;

  $view = new view();
  $view->name = 'torpedoes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Torpedoes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Torpedo Tubes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_experience_cost' => 'field_experience_cost',
    'field_credit_cost' => 'field_credit_cost',
    'field_maximum_damage' => 'field_maximum_damage',
    'field_torpedo_range' => 'field_torpedo_range',
    'field_torpedo_speed' => 'field_torpedo_speed',
    'field_rate_of_fire' => 'field_rate_of_fire',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_experience_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_credit_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maximum_damage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_torpedo_range' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_torpedo_speed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rate_of_fire' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_torpedoes_node']['id'] = 'reverse_field_torpedoes_node';
  $handler->display->display_options['relationships']['reverse_field_torpedoes_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_torpedoes_node']['field'] = 'reverse_field_torpedoes_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Name';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$cut = strpos($row->title, \']\');
return substr($row->title, $cut+1);';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Experience cost */
  $handler->display->display_options['fields']['field_experience_cost']['id'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['table'] = 'field_data_field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['field'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Credit cost */
  $handler->display->display_options['fields']['field_credit_cost']['id'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['table'] = 'field_data_field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['field'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Maximum Damage */
  $handler->display->display_options['fields']['field_maximum_damage']['id'] = 'field_maximum_damage';
  $handler->display->display_options['fields']['field_maximum_damage']['table'] = 'field_data_field_maximum_damage';
  $handler->display->display_options['fields']['field_maximum_damage']['field'] = 'field_maximum_damage';
  $handler->display->display_options['fields']['field_maximum_damage']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Torpedo Range */
  $handler->display->display_options['fields']['field_torpedo_range']['id'] = 'field_torpedo_range';
  $handler->display->display_options['fields']['field_torpedo_range']['table'] = 'field_data_field_torpedo_range';
  $handler->display->display_options['fields']['field_torpedo_range']['field'] = 'field_torpedo_range';
  /* Field: Content: Torpedo Speed */
  $handler->display->display_options['fields']['field_torpedo_speed']['id'] = 'field_torpedo_speed';
  $handler->display->display_options['fields']['field_torpedo_speed']['table'] = 'field_data_field_torpedo_speed';
  $handler->display->display_options['fields']['field_torpedo_speed']['field'] = 'field_torpedo_speed';
  /* Field: Content: Rate of Fire */
  $handler->display->display_options['fields']['field_rate_of_fire']['id'] = 'field_rate_of_fire';
  $handler->display->display_options['fields']['field_rate_of_fire']['table'] = 'field_data_field_rate_of_fire';
  $handler->display->display_options['fields']['field_rate_of_fire']['field'] = 'field_rate_of_fire';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_torpedoes_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'module_torpedoes' => 'module_torpedoes',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['torpedoes'] = $view;

  return $export;
}
