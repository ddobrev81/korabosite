<?php  ?>
<?php 
// MOVE THIS LOGIC TO THE PLUGIN
//dpm($data);

?>
<br>
<table style="width:100%;border-style: none;">
  <tr>
    <td style="width:25%; font-size:40px;text-align: center; border-top: none; border-right: none;">
        <b>
        <?php
          print $data['#content']['player_stats']['total'];
        ?>
        </b> 
      </td>
      <td style="width:25%; font-size:40px;text-align: center; border-top: none; border-right: none;">
        <b>
        <?php
          print $data['#content']['player_stats']['win_percent'].' %';
        ?>
        </b> 
      </td>
      <td style="width:25%; font-size:40px;text-align: center; border-top: none; border-right: none;">
        <b>
        <?php
          print $data['#content']['player_stats']['average_exp'];
        ?>
        </b> 
      <td style="width:25%; font-size:40px;text-align: center; border-top: none; border-right: none;">
        <b>
        <?php
          print $data['#content']['player_stats']['average_dmg'];
        ?>
        </b> 
      </td>
  </tr>
    <tr>
      <td style="width:25%; text-align: center; border-top: none; border-right: none;">
        Battles
      </td>
      <td style="width:25%; text-align: center; border-top: none; border-right: none;">
        Wins(%)
      </td>
      <td style="width:25%; text-align: center; border-top: none; border-right: none;">
        Avg exp
      </td>
      <td style="width:25%; text-align: center; border-top: none; border-right: none;">
        Avg dmg
      </td>
    </tr>  
</table>
<div style="float:left;width:45%;">
  <h2>Player Stats</h2>
  <table style="width:100%;">
    <tr>
      <td>
        <b>
        Name
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['player_stats']['nickname'];
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
          print $data['#content']['player_stats']['total'];
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
          print $data['#content']['player_stats']['wins'];
          print '&nbsp&nbsp<b style="color:green">(&nbsp' .$data['#content']['player_stats']['win_percent'].' %)</b>';
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
          print $data['#content']['player_stats']['losses'];
          print '&nbsp&nbsp<b style="color:red">(&nbsp' .$data['#content']['player_stats']['loss_percent'].' %)</b>';
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
          print $data['#content']['player_stats']['draws'];
          print '&nbsp&nbsp(&nbsp' .$data['#content']['player_stats']['draw_percent'].' %)';
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
          print $data['#content']['player_stats']['survived_battles'];
          print '&nbsp&nbsp(&nbsp' .$data['#content']['player_stats']['battles_survived_percent'].' %)';
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
          print $data['#content']['player_stats']['survived_wins'];
          print '&nbsp&nbsp(&nbsp' .$data['#content']['player_stats']['wins_survived_percent'].' %)';
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
          print $data['#content']['player_stats']['frags'];
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
          print $data['#content']['player_stats']['max_frags_battle'];
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
          print $data['#content']['player_stats']['capture_points'];
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
          print $data['#content']['player_stats']['damage_dealt'];
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
          print $data['#content']['player_stats']['average_dmg'];
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
          print $data['#content']['player_stats']['max_damage_dealt'];
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
          print $data['#content']['player_stats']['xp'];
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
          print $data['#content']['player_stats']['average_exp'];
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
          print $data['#content']['player_stats']['max_xp'];
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
          print $data['#content']['player_stats']['distance'].' km';
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
          print $data['#content']['player_stats']['planes_killed'];
        ?>
      </td>
    </tr>
  </table>
</div>
<div style="float:right;width:45%;">
<div>
  <h2>Main Battery</h2>
  <table style="width:100%;">
    <tr>
      <td>
        <b>
        Total shots:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['player_stats']['main_battery']['shots'];
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
          print $data['#content']['player_stats']['main_battery']['hits'];
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
          print $data['#content']['player_stats']['main_battery']['main_bat_hit_ratio'].'%';
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
          print $data['#content']['player_stats']['main_battery']['frags'];
        ?>
      </td>
    </tr>
  </table>
</div>
<div>
  <h2>Secondary Battery</h2>
  <table style="width:100%;">
    <tr>
      <td>
        <b>
        Total shots:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['player_stats']['second_battery']['shots'];
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
          print $data['#content']['player_stats']['second_battery']['hits'];
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
          print $data['#content']['player_stats']['second_battery']['sec_bat_hit_ratio'].'%';
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
          print $data['#content']['player_stats']['second_battery']['frags'];
        ?>
      </td>
    </tr>
  </table>
</div>
<div>
  <h2>Torpedoes</h2>
  <table style="width:100%;">
    <tr>
      <td>
        <b>
        Total shots:
        </b> 
      </td>
      <td>
        <?php
          print $data['#content']['player_stats']['torpedoes']['shots'];
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
          print $data['#content']['player_stats']['torpedoes']['hits'];
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
          print $data['#content']['player_stats']['torpedoes']['torpedoes_hit_ratio'].'%';
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
          print $data['#content']['player_stats']['torpedoes']['frags'];
        ?>
      </td>
    </tr>
  </table>
</div>
</div>
<p>
<div style="clear:left;">
  <h2>Ships</h2>
  <table>
    <thead>
      <td>
        <b>
          Name
        </b>
      </td>
      <td>
        <b>
          Wins (%)
        </b>
      </td>
      <td>
        <b>
          Losses (%)
        </b>
      </td>
      <td>
        <b>
          Average damage
        </b>
      </td>
      <td>
        <b>
          Average exp
        </b>
      </td>
      <td>
        <b>
          Battles
        </b>
      </td>
    </thead>
    <tbody>
    <?php foreach($data['#content']['player_ships'] as $name => $ship) { ?>
    <tr>
      <td>
        <?php
          $link = strtolower(str_replace(' ', '-', str_replace('.', '', $name)));
          print '<a href="/ship/'.$link.'">'.$name.'</a>';
        ?>
      </td>
      <td>
        <?php
          print $ship['wins'];
          print '&nbsp&nbsp<b style="color:green">(&nbsp' .$ship['wins_ratio'].' %)</b>';
        ?>
      </td>
      <td>
        <?php
          print $ship['losses'];
          print '&nbsp&nbsp<b style="color:red">(&nbsp' .$ship['losses_ratio'].' %)</b>';
        ?>
      </td>
      <td>
        <?php
          print $ship['average_damage'];
        ?>
      </td>
      <td>
        <?php
          print $ship['average_xp'];
        ?>
      </td>
      <td>
        <?php
          print $ship['battles'];
        ?>
      </td>
    </tr>
    <?php } ?>
    </tbody>
  </table>
</div>