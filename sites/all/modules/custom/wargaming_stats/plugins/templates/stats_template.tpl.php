<?php  ?>
<?php 
//dpm($data);
$total = $data['#content']['statistics']['pvp']['wins'] + $data['#content']['statistics']['pvp']['losses'] + $data['#content']['statistics']['pvp']['draws'];
$win_percent = round($data['#content']['statistics']['pvp']['wins'] / $total, 2) * 100;
$loss_percent = round($data['#content']['statistics']['pvp']['losses'] / $total, 2) * 100;
$draw_percent = round($data['#content']['statistics']['pvp']['draws'] / $total, 2) * 100;
$battles_survived = round($data['#content']['statistics']['pvp']['survived_battles'] / $total, 2) * 100;
$wins_survived = round($data['#content']['statistics']['pvp']['survived_wins'] / $total, 2) * 100;
$average_dmg = round($data['#content']['statistics']['pvp']['damage_dealt'] / $total, 0);
$average_exp = round($data['#content']['statistics']['pvp']['xp'] / $total, 0);
if ($data['#content']['statistics']['pvp']['main_battery']['shots'] > 0) {
  $main_bat_hit_ratio = round($data['#content']['statistics']['pvp']['main_battery']['hits'] / $data['#content']['statistics']['pvp']['main_battery']['shots'], 2) * 100;
} else {
  $main_bat_hit_ratio = 0;
}
if ($data['#content']['statistics']['pvp']['second_battery']['shots'] > 0) {
  $sec_bat_hit_ratio = round($data['#content']['statistics']['pvp']['second_battery']['hits'] / $data['#content']['statistics']['pvp']['second_battery']['shots'], 2) * 100;
} else {
  $sec_bat_hit_ratio = 0;
}
if ($data['#content']['statistics']['pvp']['torpedoes']['shots'] > 0) {
  $torpedoes_hit_ratio = round($data['#content']['statistics']['pvp']['torpedoes']['hits'] / $data['#content']['statistics']['pvp']['torpedoes']['shots'], 2) * 100; 
} else {
  $torpedoes_hit_ratio = 0;
}
?>
<div style="float:left;width:45%;">
  <h2>Player stats</h2>
  <table style="width:100%;">
    <tr>
      <td>
        <b>
        Name
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['nickname'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Battles:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['battles'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Wins (%):
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['wins'];
          print '&nbsp&nbsp<b style="color:green">(&nbsp' .$win_percent.' %)</b>';
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Losses (%):
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['losses'];
          print '&nbsp&nbsp<b style="color:red">(&nbsp' .$loss_percent.' %)</b>';
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Draws (%):
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['draws'];
          print '&nbsp&nbsp<b>(&nbsp' .$draw_percent.' %)</b>';
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Battles survived (%):
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['survived_battles'];
          print '&nbsp&nbsp<b>(&nbsp' .$battles_survived.' %)</b>';
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Wins survived (%):
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['survived_wins'];
          print '&nbsp&nbsp<b>(&nbsp' .$wins_survived.' %)</b>';
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Frags:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['frags'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Max frags in battle:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['max_frags_battle'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Capture points:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['capture_points'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Total damage dealt:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['damage_dealt'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Average damage per battle:
        </b> 
      </td>
      <td>
        <?php
          print $average_dmg;
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Maximum damage dealt:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['max_damage_dealt'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Total experience:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['xp'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Average experience per battle:
        </b> 
      </td>
      <td>
        <?php
          print $average_exp;
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Maximum base experience:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['max_xp'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Distance traveled:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['distance'].' km';
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Planes destroyed:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['planes_killed'];
        ?>
      </td>
    </tr>
  </table>
</div>
<div style="float:right;width:45%;">
<div>
  <h2>Main Battery stats</h2>
  <table style="width:100%;">
    <tr>
      <td>
        <b>
        Total shots:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['main_battery']['shots'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Total hits:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['main_battery']['hits'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Hit ratio:
        </b> 
      </td>
      <td>
        <?php
          print $main_bat_hit_ratio.'%';
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Frags:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['main_battery']['frags'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Max frags in battle:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['main_battery']['max_frags_battle'];
        ?>
      </td>
  </table>
</div>
<div>
  <h2>Secondary Battery stats</h2>
  <table style="width:auto;">
    <tr>
      <td>
        <b>
        Total shots:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['second_battery']['shots'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Total hits:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['second_battery']['hits'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Hit ratio:
        </b> 
      </td>
      <td>
        <?php
          print $sec_bat_hit_ratio.'%';
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Frags:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['second_battery']['frags'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Max frags in battle:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['second_battery']['max_frags_battle'];
        ?>
      </td>
  </table>
</div>
<div>
  <h2>Torpedoes stats</h2>
  <table style="width:auto;">
    <tr>
      <td>
        <b>
        Total shots:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['torpedoes']['shots'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Total hits:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['torpedoes']['hits'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Hit ratio:
        </b> 
      </td>
      <td>
        <?php
          print $torpedoes_hit_ratio.'%';
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Frags:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['torpedoes']['frags'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Max frags in battle:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['torpedoes']['max_frags_battle'];
        ?>
      </td>
  </table>
</div>
<div>
  <h2>Aircraft stats</h2>
  <table style="width:auto;">
    <tr>
      <td>
        <b>
        Frags:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['aircraft']['frags'];
        ?>
      </td>
    </tr>
    <tr>
      <td>
        <b>
        Max frags in battle:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['statistics']['pvp']['aircraft']['max_frags_battle'];
        ?>
      </td>
  </table>
</div>   
</div>