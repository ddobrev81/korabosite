<?php

$plugin = array(
  'title' => t('Stats results pane'),
  'description' => t('Stats results pane'),
  'category' => 'Widgets',
  'icon' => '',
  'render callback' => 'stats_block',
  'defaults' => array(),
);

function stats_block() {
  // get the url args
  // get the wg id
  // pull player data
  // make the data easy to work in template file
  // call theme function with the tmeplate file
  // build the block
  
  $region = arg(1);
  $player_name = arg(2);
  $player_id = _wargaming_stats_get_user_id($player_name, $region);
//  dpm($player_id);
  $args['player_id'] = $player_id;
  $args['region'] = $region;
  $data = array();
  
  $wg_data = _wargaming_stats_curl_request('get_player_data_by_id', $args);
  if ($wg_data['status'] == 'ok' && $wg_data['meta']['count'] === 1) {
    $data = _build_table_player_stats($wg_data, $player_id);
  }
  else {
    drupal_set_message(t("Sum Tin Wong!"), 'warning');
  }
//  dpm($data,'$data');
//  drupal_goto();
  
  if ($data['player_stats']['battles'] < 1) {
    drupal_set_message('Player has 0 battles!', 'error');
    drupal_goto();
  }
//  dpm($player_data);
 // $ship_name = _wargaming_stats_get_ship_name_by_id('4293867504');
 // dpm($ship_name);
  
  $ship_data = _build_table_player_ships($player_id, $region);
  $data = array_merge($data, $ship_data);
  //dpm($data,'$data after merge');
// player id 500158233
  $content = array(
    '#theme' => 'stats_block',
    '#content' => $data,
  );

  $block = new stdClass();
  $block->content = $content;
  $block->title = '';
  $block->id = 'stats_block';

  return $block;
}

function _build_table_player_stats($player_data, $player_id) {
  $stats_data = $player_data['data'][$player_id];
//  dpm($stats_data,'$player_data');
  $render_data = array();
  // Player stats
  $render_data['player_stats']['nickname'] = $stats_data['nickname'];
  $render_data['player_stats']['wins'] = $stats_data['statistics']['pvp']['wins'];
  $render_data['player_stats']['losses'] = $stats_data['statistics']['pvp']['losses'];
  $render_data['player_stats']['draws'] = $stats_data['statistics']['pvp']['draws'];
  $render_data['player_stats']['survived_wins'] = $stats_data['statistics']['pvp']['survived_wins'];
  $render_data['player_stats']['frags'] = $stats_data['statistics']['pvp']['frags'];
  $render_data['player_stats']['max_frags_battle'] = $stats_data['statistics']['pvp']['max_frags_battle'];
  $render_data['player_stats']['capture_points'] = $stats_data['statistics']['pvp']['capture_points'];
  $render_data['player_stats']['survived_battles'] = $stats_data['statistics']['pvp']['survived_battles'];
  $render_data['player_stats']['damage_dealt'] = $stats_data['statistics']['pvp']['damage_dealt'];
  $render_data['player_stats']['max_damage_dealt'] = $stats_data['statistics']['pvp']['max_damage_dealt'];
  $render_data['player_stats']['xp'] = $stats_data['statistics']['pvp']['xp'];
  $render_data['player_stats']['max_xp'] = $stats_data['statistics']['pvp']['max_xp'];
  $render_data['player_stats']['distance'] = $stats_data['statistics']['distance'];
  $render_data['player_stats']['planes_killed'] = $stats_data['statistics']['pvp']['planes_killed'];
  $render_data['player_stats']['battles'] = $stats_data['statistics']['battles'];
  // Main battery stats
  $render_data['player_stats']['main_battery']['shots'] = $stats_data['statistics']['pvp']['main_battery']['shots'];
  $render_data['player_stats']['main_battery']['hits'] = $stats_data['statistics']['pvp']['main_battery']['hits'];
  $render_data['player_stats']['main_battery']['frags'] = $stats_data['statistics']['pvp']['main_battery']['frags'];
  // Secondary battery stats
  $render_data['player_stats']['second_battery']['shots'] = $stats_data['statistics']['pvp']['second_battery']['shots'];
  $render_data['player_stats']['second_battery']['hits'] = $stats_data['statistics']['pvp']['second_battery']['hits'];
  $render_data['player_stats']['second_battery']['frags'] = $stats_data['statistics']['pvp']['second_battery']['frags'];
  // Torpedoes stats
  $render_data['player_stats']['torpedoes']['shots'] = $stats_data['statistics']['pvp']['torpedoes']['shots'];
  $render_data['player_stats']['torpedoes']['hits'] = $stats_data['statistics']['pvp']['torpedoes']['hits'];
  $render_data['player_stats']['torpedoes']['frags'] = $stats_data['statistics']['pvp']['torpedoes']['frags'];
  // Calculated stats
  $render_data['player_stats']['total'] = $stats_data['statistics']['pvp']['wins'] + $stats_data['statistics']['pvp']['losses'] + $stats_data['statistics']['pvp']['draws'];
  $render_data['player_stats']['win_percent'] = round($stats_data['statistics']['pvp']['wins'] / $render_data['player_stats']['total'], 2) * 100;
  $render_data['player_stats']['loss_percent'] = round($stats_data['statistics']['pvp']['losses'] / $render_data['player_stats']['total'], 2) * 100;
  $render_data['player_stats']['draw_percent'] = round($stats_data['statistics']['pvp']['draws'] / $render_data['player_stats']['total'], 2) * 100;
  $render_data['player_stats']['battles_survived_percent'] = round($stats_data['statistics']['pvp']['survived_battles'] / $render_data['player_stats']['total'], 2) * 100;
  $render_data['player_stats']['wins_survived_percent'] = round($stats_data['statistics']['pvp']['survived_wins'] / $render_data['player_stats']['total'], 2) * 100;
  $render_data['player_stats']['average_dmg'] = round($stats_data['statistics']['pvp']['damage_dealt'] / $render_data['player_stats']['total'], 0);
  $render_data['player_stats']['average_exp'] = round($stats_data['statistics']['pvp']['xp'] / $render_data['player_stats']['total'], 0);
  if ($stats_data['statistics']['pvp']['main_battery']['shots'] > 0) {
    $render_data['player_stats']['main_battery']['main_bat_hit_ratio'] = round($stats_data['statistics']['pvp']['main_battery']['hits'] / $stats_data['statistics']['pvp']['main_battery']['shots'], 2) * 100;
  }
  else {
    $render_data['player_stats']['main_battery']['main_bat_hit_ratio'] = 0;
  }
  if ($stats_data['statistics']['pvp']['second_battery']['shots'] > 0) {
    $render_data['player_stats']['second_battery']['sec_bat_hit_ratio'] = round($stats_data['statistics']['pvp']['second_battery']['hits'] / $stats_data['statistics']['pvp']['second_battery']['shots'], 2) * 100;
  }
  else {
    $render_data['player_stats']['second_battery']['sec_bat_hit_ratio'] = 0;
  }
  if ($stats_data['statistics']['pvp']['torpedoes']['shots'] > 0) {
    $render_data['player_stats']['torpedoes']['torpedoes_hit_ratio'] = round($stats_data['statistics']['pvp']['torpedoes']['hits'] / $stats_data['statistics']['pvp']['torpedoes']['shots'], 2) * 100;
  }
  else {
    $render_data['player_stats']['torpedoes']['torpedoes_hit_ratio'] = 0;
  }
  return $render_data;
}


function _build_table_player_ships($player_id, $region) {
  //call api to get ship list
  //return the relevant data
  $args['player_id'] = $player_id;
  $args['region'] = $region;
  $ship_data = _wargaming_stats_curl_request('get_player_ship_data', $args);
  //dpm($ship_data,'$ship_data');
  foreach ($ship_data['data'][$player_id] as $ship) {
    dpm($ship);
    if ($ship['pvp']['battles'] < 1) {
      continue;
    }
    $ship_name = _wargaming_stats_get_ship_name_by_id($ship['ship_id']);
    $render_data['player_ships'][$ship_name]['wins'] = $ship['pvp']['wins'];
    $render_data['player_ships'][$ship_name]['losses'] = $ship['pvp']['losses'];
    $render_data['player_ships'][$ship_name]['battles'] = $ship['pvp']['battles'];
    $render_data['player_ships'][$ship_name]['wins_ratio'] = round($ship['pvp']['wins'] / $ship['pvp']['battles'], 2) * 100;
    $render_data['player_ships'][$ship_name]['losses_ratio'] = round($ship['pvp']['losses'] / $ship['pvp']['battles'], 2) * 100;
    $render_data['player_ships'][$ship_name]['average_xp'] = round($ship['pvp']['xp'] / $ship['battles'], 0);
    $render_data['player_ships'][$ship_name]['average_damage'] = round($ship['pvp']['damage_dealt'] / $ship['battles'], 0);
  }
  return $render_data;
}
