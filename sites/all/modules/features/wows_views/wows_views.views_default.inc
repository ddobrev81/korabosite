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
  $view->name = 'achievements_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Achievements list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Achievements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_type' => 'field_type',
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
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['label'] = 'More info';
  $handler->display->display_options['fields']['field_type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'achievements' => 'achievements',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['achievements_list'] = $view;

  $view = new view();
  $view->name = 'better_tech_tree_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Better tech tree ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_nation_ent_ref_target_id' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Content: Nation ent ref (field_nation_ent_ref) */
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['id'] = 'field_nation_ent_ref_target_id';
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['table'] = 'field_data_field_nation_ent_ref';
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['field'] = 'field_nation_ent_ref_target_id';
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['value'] = array(
    20 => '20',
    3 => '3',
    2 => '2',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['expose']['operator_id'] = 'field_nation_ent_ref_target_id_op';
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['expose']['operator'] = 'field_nation_ent_ref_target_id_op';
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['expose']['identifier'] = 'nation';
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_nation_ent_ref_target_id']['expose']['reduce'] = TRUE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['better_tech_tree_'] = $view;

  $view = new view();
  $view->name = 'dive_bombers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dive bombers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dive bombers';
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
  $handler->display->display_options['relationships']['reverse_field_module_dive_bombers_node']['id'] = 'reverse_field_module_dive_bombers_node';
  $handler->display->display_options['relationships']['reverse_field_module_dive_bombers_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_module_dive_bombers_node']['field'] = 'reverse_field_module_dive_bombers_node';
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
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
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
  /* Field: Content: Cruise speed */
  $handler->display->display_options['fields']['field_cruise_speed']['id'] = 'field_cruise_speed';
  $handler->display->display_options['fields']['field_cruise_speed']['table'] = 'field_data_field_cruise_speed';
  $handler->display->display_options['fields']['field_cruise_speed']['field'] = 'field_cruise_speed';
  /* Field: Content: Maximum Bomb Damage */
  $handler->display->display_options['fields']['field_maximum_bomb_damage']['id'] = 'field_maximum_bomb_damage';
  $handler->display->display_options['fields']['field_maximum_bomb_damage']['table'] = 'field_data_field_maximum_bomb_damage';
  $handler->display->display_options['fields']['field_maximum_bomb_damage']['field'] = 'field_maximum_bomb_damage';
  $handler->display->display_options['fields']['field_maximum_bomb_damage']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Survivability */
  $handler->display->display_options['fields']['field_survivability_dive_bombers']['id'] = 'field_survivability_dive_bombers';
  $handler->display->display_options['fields']['field_survivability_dive_bombers']['table'] = 'field_data_field_survivability_dive_bombers';
  $handler->display->display_options['fields']['field_survivability_dive_bombers']['field'] = 'field_survivability_dive_bombers';
  $handler->display->display_options['fields']['field_survivability_dive_bombers']['settings'] = array(
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_module_dive_bombers_node';
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
    'module_dive_bombers' => 'module_dive_bombers',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['dive_bombers'] = $view;

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
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'strong';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
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
  $view->name = 'equipment_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Equipment list';
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
  $handler->display->display_options['style_plugin'] = 'table';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Effects */
  $handler->display->display_options['fields']['field_effects']['id'] = 'field_effects';
  $handler->display->display_options['fields']['field_effects']['table'] = 'field_data_field_effects';
  $handler->display->display_options['fields']['field_effects']['field'] = 'field_effects';
  $handler->display->display_options['fields']['field_effects']['delta_offset'] = '0';
  /* Field: Content: Credit cost */
  $handler->display->display_options['fields']['field_credit_cost']['id'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['table'] = 'field_data_field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['field'] = 'field_credit_cost';
  $handler->display->display_options['fields']['field_credit_cost']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Credit cost (field_credit_cost) */
  $handler->display->display_options['sorts']['field_credit_cost_value']['id'] = 'field_credit_cost_value';
  $handler->display->display_options['sorts']['field_credit_cost_value']['table'] = 'field_data_field_credit_cost';
  $handler->display->display_options['sorts']['field_credit_cost_value']['field'] = 'field_credit_cost_value';
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
    'equipment' => 'equipment',
  );

  /* Display: Equipment list */
  $handler = $view->new_display('panel_pane', 'Equipment list', 'panel_pane_1');
  $export['equipment_list'] = $view;

  $view = new view();
  $view->name = 'fighters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fighters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fighters';
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
  $handler->display->display_options['relationships']['reverse_field_module_fighters_node']['id'] = 'reverse_field_module_fighters_node';
  $handler->display->display_options['relationships']['reverse_field_module_fighters_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_module_fighters_node']['field'] = 'reverse_field_module_fighters_node';
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
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
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
  /* Field: Content: Cruise speed */
  $handler->display->display_options['fields']['field_cruise_speed']['id'] = 'field_cruise_speed';
  $handler->display->display_options['fields']['field_cruise_speed']['table'] = 'field_data_field_cruise_speed';
  $handler->display->display_options['fields']['field_cruise_speed']['field'] = 'field_cruise_speed';
  /* Field: Content: Average DPS */
  $handler->display->display_options['fields']['field_average_dps']['id'] = 'field_average_dps';
  $handler->display->display_options['fields']['field_average_dps']['table'] = 'field_data_field_average_dps';
  $handler->display->display_options['fields']['field_average_dps']['field'] = 'field_average_dps';
  $handler->display->display_options['fields']['field_average_dps']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Loadout */
  $handler->display->display_options['fields']['field_loadout']['id'] = 'field_loadout';
  $handler->display->display_options['fields']['field_loadout']['table'] = 'field_data_field_loadout';
  $handler->display->display_options['fields']['field_loadout']['field'] = 'field_loadout';
  $handler->display->display_options['fields']['field_loadout']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Survivability */
  $handler->display->display_options['fields']['field_survivability_figthers']['id'] = 'field_survivability_figthers';
  $handler->display->display_options['fields']['field_survivability_figthers']['table'] = 'field_data_field_survivability_figthers';
  $handler->display->display_options['fields']['field_survivability_figthers']['field'] = 'field_survivability_figthers';
  $handler->display->display_options['fields']['field_survivability_figthers']['settings'] = array(
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_module_fighters_node';
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
    'module_fighters' => 'module_fighters',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['fighters'] = $view;

  $view = new view();
  $view->name = 'flags';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Flags';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Signals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
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
  /* Field: Content: Achievement */
  $handler->display->display_options['fields']['field_achievement']['id'] = 'field_achievement';
  $handler->display->display_options['fields']['field_achievement']['table'] = 'field_data_field_achievement';
  $handler->display->display_options['fields']['field_achievement']['field'] = 'field_achievement';
  $handler->display->display_options['fields']['field_achievement']['label'] = 'Rewarded by';
  $handler->display->display_options['fields']['field_achievement']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_achievement']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'flags' => 'flags',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['flags'] = $view;

  $view = new view();
  $view->name = 'flight_control';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Flight control';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Flight Control';
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
  $handler->display->display_options['relationships']['reverse_field_flight_controls_node']['id'] = 'reverse_field_flight_controls_node';
  $handler->display->display_options['relationships']['reverse_field_flight_controls_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_flight_controls_node']['field'] = 'reverse_field_flight_controls_node';
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
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
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
  /* Field: Content: Fighters */
  $handler->display->display_options['fields']['field_fighters']['id'] = 'field_fighters';
  $handler->display->display_options['fields']['field_fighters']['table'] = 'field_data_field_fighters';
  $handler->display->display_options['fields']['field_fighters']['field'] = 'field_fighters';
  $handler->display->display_options['fields']['field_fighters']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fighters']['alter']['text'] = '[field_fighters-value] sq.';
  $handler->display->display_options['fields']['field_fighters']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Torpedo Bombers */
  $handler->display->display_options['fields']['field_torpedo_bombers']['id'] = 'field_torpedo_bombers';
  $handler->display->display_options['fields']['field_torpedo_bombers']['table'] = 'field_data_field_torpedo_bombers';
  $handler->display->display_options['fields']['field_torpedo_bombers']['field'] = 'field_torpedo_bombers';
  $handler->display->display_options['fields']['field_torpedo_bombers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_torpedo_bombers']['alter']['text'] = '[field_torpedo_bombers-value] sq.';
  $handler->display->display_options['fields']['field_torpedo_bombers']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dive Bombers */
  $handler->display->display_options['fields']['field_dive_bombers']['id'] = 'field_dive_bombers';
  $handler->display->display_options['fields']['field_dive_bombers']['table'] = 'field_data_field_dive_bombers';
  $handler->display->display_options['fields']['field_dive_bombers']['field'] = 'field_dive_bombers';
  $handler->display->display_options['fields']['field_dive_bombers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dive_bombers']['alter']['text'] = '[field_dive_bombers-value] sq.';
  $handler->display->display_options['fields']['field_dive_bombers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dive_bombers']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_dive_bombers']['settings'] = array(
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_flight_controls_node';
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
    'module_flight_control' => 'module_flight_control',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['flight_control'] = $view;

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
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'strong';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'strong';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'strong';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
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
  $view->name = 'profile_ranks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile ranks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Profile ranks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Ranks';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: Content: Experience cost */
  $handler->display->display_options['fields']['field_experience_cost']['id'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['table'] = 'field_data_field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['field'] = 'field_experience_cost';
  $handler->display->display_options['fields']['field_experience_cost']['label'] = 'Experience needed';
  $handler->display->display_options['fields']['field_experience_cost']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_experience_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'profile_ranks' => 'profile_ranks',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['profile_ranks'] = $view;

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
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nation */
  $handler->display->display_options['fields']['field_nation']['id'] = 'field_nation';
  $handler->display->display_options['fields']['field_nation']['table'] = 'field_data_field_nation';
  $handler->display->display_options['fields']['field_nation']['field'] = 'field_nation';
  $handler->display->display_options['fields']['field_nation']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'field_data_field_class';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['type'] = 'taxonomy_term_reference_plain';
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
  /* Field: Content: Previous Ship */
  $handler->display->display_options['fields']['field_previous_ship']['id'] = 'field_previous_ship';
  $handler->display->display_options['fields']['field_previous_ship']['table'] = 'field_data_field_previous_ship';
  $handler->display->display_options['fields']['field_previous_ship']['field'] = 'field_previous_ship';
  $handler->display->display_options['fields']['field_previous_ship']['label'] = 'Prev. ship';
  $handler->display->display_options['fields']['field_previous_ship']['settings'] = array(
    'link' => 1,
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
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_nation_ent_ref',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'ship-list-border-bottom';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Class (field_class) */
  $handler->display->display_options['relationships']['field_class_tid']['id'] = 'field_class_tid';
  $handler->display->display_options['relationships']['field_class_tid']['table'] = 'field_data_field_class';
  $handler->display->display_options['relationships']['field_class_tid']['field'] = 'field_class_tid';
  $handler->display->display_options['relationships']['field_class_tid']['required'] = TRUE;
  /* Field: Taxonomy term: Class icon */
  $handler->display->display_options['fields']['field_class_icon']['id'] = 'field_class_icon';
  $handler->display->display_options['fields']['field_class_icon']['table'] = 'field_data_field_class_icon';
  $handler->display->display_options['fields']['field_class_icon']['field'] = 'field_class_icon';
  $handler->display->display_options['fields']['field_class_icon']['relationship'] = 'field_class_tid';
  $handler->display->display_options['fields']['field_class_icon']['label'] = '';
  $handler->display->display_options['fields']['field_class_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_class_icon']['settings'] = array(
    'image_style' => 'tech_tree_class_icon',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_class_icon]  [title] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Nation ent ref */
  $handler->display->display_options['fields']['field_nation_ent_ref']['id'] = 'field_nation_ent_ref';
  $handler->display->display_options['fields']['field_nation_ent_ref']['table'] = 'field_data_field_nation_ent_ref';
  $handler->display->display_options['fields']['field_nation_ent_ref']['field'] = 'field_nation_ent_ref';
  $handler->display->display_options['fields']['field_nation_ent_ref']['label'] = '';
  $handler->display->display_options['fields']['field_nation_ent_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nation_ent_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nation_ent_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nation_ent_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_nation_ent_ref']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_nation_ent_ref']['field_api_classes'] = TRUE;
  /* Field: Content: Tier */
  $handler->display->display_options['fields']['field_tier']['id'] = 'field_tier';
  $handler->display->display_options['fields']['field_tier']['table'] = 'field_data_field_tier';
  $handler->display->display_options['fields']['field_tier']['field'] = 'field_tier';
  $handler->display->display_options['fields']['field_tier']['label'] = '';
  $handler->display->display_options['fields']['field_tier']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tier']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tier']['alter']['text'] = '<h3>Tier [field_tier]</h3>';
  $handler->display->display_options['fields']['field_tier']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_tier']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tier']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Tier (field_tier) */
  $handler->display->display_options['sorts']['field_tier_tid']['id'] = 'field_tier_tid';
  $handler->display->display_options['sorts']['field_tier_tid']['table'] = 'field_data_field_tier';
  $handler->display->display_options['sorts']['field_tier_tid']['field'] = 'field_tier_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ships' => 'ships',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

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
    'field_survivability_description' => 'field_survivability_description',
    'field_artillery' => 'field_artillery',
    'field_artillery_description' => 'field_artillery_description',
    'field_aircraft' => 'field_aircraft',
    'field_aircraft_description' => 'field_aircraft_description',
    'field_ship_torpedoes' => 'field_ship_torpedoes',
    'field_torpedoes_description' => 'field_torpedoes_description',
    'field_ship_aa_guns' => 'field_ship_aa_guns',
    'field_aa_guns_description' => 'field_aa_guns_description',
    'field_maneurability' => 'field_maneurability',
    'field_maneurability_description' => 'field_maneurability_description',
    'field_concealment' => 'field_concealment',
    'field_concealment_description' => 'field_concealment_description',
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
    'field_survivability_description' => array(
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
    'field_artillery_description' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aircraft' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aircraft_description' => array(
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
    'field_torpedoes_description' => array(
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
    'field_aa_guns_description' => array(
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
    'field_maneurability_description' => array(
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
    'field_concealment_description' => array(
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
  /* Field: Content: Survivability description */
  $handler->display->display_options['fields']['field_survivability_description']['id'] = 'field_survivability_description';
  $handler->display->display_options['fields']['field_survivability_description']['table'] = 'field_data_field_survivability_description';
  $handler->display->display_options['fields']['field_survivability_description']['field'] = 'field_survivability_description';
  $handler->display->display_options['fields']['field_survivability_description']['label'] = '';
  $handler->display->display_options['fields']['field_survivability_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_survivability_description']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_survivability_description']['multi_type'] = 'ul';
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
  /* Field: Content: Artillery description */
  $handler->display->display_options['fields']['field_artillery_description']['id'] = 'field_artillery_description';
  $handler->display->display_options['fields']['field_artillery_description']['table'] = 'field_data_field_artillery_description';
  $handler->display->display_options['fields']['field_artillery_description']['field'] = 'field_artillery_description';
  $handler->display->display_options['fields']['field_artillery_description']['label'] = '';
  $handler->display->display_options['fields']['field_artillery_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artillery_description']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_artillery_description']['multi_type'] = 'ul';
  /* Field: Content: Aircraft */
  $handler->display->display_options['fields']['field_aircraft']['id'] = 'field_aircraft';
  $handler->display->display_options['fields']['field_aircraft']['table'] = 'field_data_field_aircraft';
  $handler->display->display_options['fields']['field_aircraft']['field'] = 'field_aircraft';
  $handler->display->display_options['fields']['field_aircraft']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_aircraft']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aircraft']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Aircraft description */
  $handler->display->display_options['fields']['field_aircraft_description']['id'] = 'field_aircraft_description';
  $handler->display->display_options['fields']['field_aircraft_description']['table'] = 'field_data_field_aircraft_description';
  $handler->display->display_options['fields']['field_aircraft_description']['field'] = 'field_aircraft_description';
  $handler->display->display_options['fields']['field_aircraft_description']['label'] = '';
  $handler->display->display_options['fields']['field_aircraft_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aircraft_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_aircraft_description']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aircraft_description']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_aircraft_description']['multi_type'] = 'ul';
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
  /* Field: Content: Torpedoes description */
  $handler->display->display_options['fields']['field_torpedoes_description']['id'] = 'field_torpedoes_description';
  $handler->display->display_options['fields']['field_torpedoes_description']['table'] = 'field_data_field_torpedoes_description';
  $handler->display->display_options['fields']['field_torpedoes_description']['field'] = 'field_torpedoes_description';
  $handler->display->display_options['fields']['field_torpedoes_description']['label'] = '';
  $handler->display->display_options['fields']['field_torpedoes_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_torpedoes_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_torpedoes_description']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_torpedoes_description']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_torpedoes_description']['multi_type'] = 'ul';
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
  /* Field: Content: AA Guns description */
  $handler->display->display_options['fields']['field_aa_guns_description']['id'] = 'field_aa_guns_description';
  $handler->display->display_options['fields']['field_aa_guns_description']['table'] = 'field_data_field_aa_guns_description';
  $handler->display->display_options['fields']['field_aa_guns_description']['field'] = 'field_aa_guns_description';
  $handler->display->display_options['fields']['field_aa_guns_description']['label'] = '';
  $handler->display->display_options['fields']['field_aa_guns_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_guns_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_aa_guns_description']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_guns_description']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_aa_guns_description']['multi_type'] = 'ul';
  /* Field: Content: Maneurability */
  $handler->display->display_options['fields']['field_maneurability']['id'] = 'field_maneurability';
  $handler->display->display_options['fields']['field_maneurability']['table'] = 'field_data_field_maneurability';
  $handler->display->display_options['fields']['field_maneurability']['field'] = 'field_maneurability';
  $handler->display->display_options['fields']['field_maneurability']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Maneurability description */
  $handler->display->display_options['fields']['field_maneurability_description']['id'] = 'field_maneurability_description';
  $handler->display->display_options['fields']['field_maneurability_description']['table'] = 'field_data_field_maneurability_description';
  $handler->display->display_options['fields']['field_maneurability_description']['field'] = 'field_maneurability_description';
  $handler->display->display_options['fields']['field_maneurability_description']['label'] = '';
  $handler->display->display_options['fields']['field_maneurability_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maneurability_description']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_maneurability_description']['multi_type'] = 'ul';
  /* Field: Content: Concealment */
  $handler->display->display_options['fields']['field_concealment']['id'] = 'field_concealment';
  $handler->display->display_options['fields']['field_concealment']['table'] = 'field_data_field_concealment';
  $handler->display->display_options['fields']['field_concealment']['field'] = 'field_concealment';
  $handler->display->display_options['fields']['field_concealment']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Concealment description */
  $handler->display->display_options['fields']['field_concealment_description']['id'] = 'field_concealment_description';
  $handler->display->display_options['fields']['field_concealment_description']['table'] = 'field_data_field_concealment_description';
  $handler->display->display_options['fields']['field_concealment_description']['field'] = 'field_concealment_description';
  $handler->display->display_options['fields']['field_concealment_description']['label'] = '';
  $handler->display->display_options['fields']['field_concealment_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concealment_description']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_concealment_description']['multi_type'] = 'ul';
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
  $view->name = 'tech_tree';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tech Tree';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_class',
      'rendered' => 0,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '10';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Tier */
  $handler->display->display_options['fields']['field_tier']['id'] = 'field_tier';
  $handler->display->display_options['fields']['field_tier']['table'] = 'field_data_field_tier';
  $handler->display->display_options['fields']['field_tier']['field'] = 'field_tier';
  $handler->display->display_options['fields']['field_tier']['label'] = '';
  $handler->display->display_options['fields']['field_tier']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tier']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'field_data_field_class';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['exclude'] = TRUE;
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
  /* Filter criterion: Content: Nation (field_nation) */
  $handler->display->display_options['filters']['field_nation_tid']['id'] = 'field_nation_tid';
  $handler->display->display_options['filters']['field_nation_tid']['table'] = 'field_data_field_nation';
  $handler->display->display_options['filters']['field_nation_tid']['field'] = 'field_nation_tid';
  $handler->display->display_options['filters']['field_nation_tid']['value'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    20 => '20',
  );
  $handler->display->display_options['filters']['field_nation_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nation_tid']['expose']['operator_id'] = 'field_nation_tid_op';
  $handler->display->display_options['filters']['field_nation_tid']['expose']['label'] = 'Nation';
  $handler->display->display_options['filters']['field_nation_tid']['expose']['operator'] = 'field_nation_tid_op';
  $handler->display->display_options['filters']['field_nation_tid']['expose']['identifier'] = 'field_nation_tid';
  $handler->display->display_options['filters']['field_nation_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_nation_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_nation_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_nation_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nation_tid']['vocabulary'] = 'nation';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['tech_tree'] = $view;

  $view = new view();
  $view->name = 'torpedo_bombers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Torpedo bombers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Torpedo bombers';
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
  $handler->display->display_options['relationships']['reverse_field_module_torpedo_bombers_node']['id'] = 'reverse_field_module_torpedo_bombers_node';
  $handler->display->display_options['relationships']['reverse_field_module_torpedo_bombers_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_module_torpedo_bombers_node']['field'] = 'reverse_field_module_torpedo_bombers_node';
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
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
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
  /* Field: Content: Cruise speed */
  $handler->display->display_options['fields']['field_cruise_speed']['id'] = 'field_cruise_speed';
  $handler->display->display_options['fields']['field_cruise_speed']['table'] = 'field_data_field_cruise_speed';
  $handler->display->display_options['fields']['field_cruise_speed']['field'] = 'field_cruise_speed';
  /* Field: Content: Maximum Torpedo Damage */
  $handler->display->display_options['fields']['field_maximum_torpedo_damage']['id'] = 'field_maximum_torpedo_damage';
  $handler->display->display_options['fields']['field_maximum_torpedo_damage']['table'] = 'field_data_field_maximum_torpedo_damage';
  $handler->display->display_options['fields']['field_maximum_torpedo_damage']['field'] = 'field_maximum_torpedo_damage';
  $handler->display->display_options['fields']['field_maximum_torpedo_damage']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Survivability */
  $handler->display->display_options['fields']['field_survivability_torp_bombers']['id'] = 'field_survivability_torp_bombers';
  $handler->display->display_options['fields']['field_survivability_torp_bombers']['table'] = 'field_data_field_survivability_torp_bombers';
  $handler->display->display_options['fields']['field_survivability_torp_bombers']['field'] = 'field_survivability_torp_bombers';
  $handler->display->display_options['fields']['field_survivability_torp_bombers']['settings'] = array(
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_module_torpedo_bombers_node';
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
    'module_torpedo_bombers' => 'module_torpedo_bombers',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['torpedo_bombers'] = $view;

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
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'strong';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
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
