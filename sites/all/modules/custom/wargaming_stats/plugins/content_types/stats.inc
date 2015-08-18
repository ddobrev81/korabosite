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
  
  $data = _wargaming_stats_curl_request('get_player_data_by_id', $args);
  $data = json_decode($data, TRUE);
  if ($data['status'] == 'ok' && $data['meta']['count'] === 1) {
    $player_data = $data['data'][$player_id];
  }
  else {
    drupal_set_message(t("Sum Tin Wong!"), 'warning');
  }
  if ($player_data['statistics']['battles'] < 1) {
    drupal_set_message('Player has 0 battles!', 'error');
    drupal_goto();
  }
//  dpm($player_data);
  
  
  $data = array();

  $content = array(
    '#theme' => 'stats_block',
    '#content' => $player_data,
  );

  $block = new stdClass();
  $block->content = $content;
  $block->title = '';
  $block->id = 'stats_block';

  return $block;
}