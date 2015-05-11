<?php
/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
  
<?php //dpm($view);
// Japan Tech Tree
if ($view->exposed_data['nation'] == 2):
?>  
  <table>
    
    <?php //table header?> 
    <tr>
      <td></td>
      <td>Battleships</td>
      <td></td>
      <td>Cruisers</td>
      <td></td>
      <td>Destroyers</td>
      <td></td>
      <td>Carriers</td>
      <td></td>
    </tr>
    
    <?php //tier 1 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>I</td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Katori ?> 
      <?php $node = node_load(9);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/katori"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 1 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 1 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>II</td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Chikuma ?> 
      <?php $node = node_load(16);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/chikuma"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Umikaze ?> 
      <?php $node = node_load(155);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/umikaze"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>III</td>
      <?php //Kawachi ?> 
      <?php $node = node_load(99); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/kawachi"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Tatsuta ?> 
      <?php $node = node_load(41); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/tatsuta"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Wakatake ?> 
      <?php $node = node_load(163); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/wakatake"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>IV</td>
      <?php //Myogi ?> 
      <?php $node = node_load(108); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/myogi"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Kuma ?> 
      <?php $node = node_load(49); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/kuma"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Yubari ?>
      <?php $node = node_load(559); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/yubari"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>gd</div>
      </td>
      <?php //Isokaze ?> 
      <?php $node = node_load(172); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/isokaze"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>V</td>
      <?php //Kongo ?> 
      <?php $node = node_load(118); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/kongo"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Minekaze ?> 
      <?php $node = node_load(181); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/minekaze"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>    
    
    <?php //tier 6 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VI</td>
      <?php //Fuso ?> 
      <?php $node = node_load(126); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/fuso"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Aoba ?> 
      <?php $node = node_load(57); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/aoba"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Mutsuki ?> 
      <?php $node = node_load(193); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/mutsuki"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 6 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 6 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr> 
    
    <?php //tier 7 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VII</td>
      <?php //Nagato ?> 
      <?php $node = node_load(133); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/nagato"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Mogami ?> 
      <?php $node = node_load(68); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/mogami"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Hatsuharu ?> 
      <?php $node = node_load(202); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/hatsuharu"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 7 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 7 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr> 
    
    <?php //tier 8 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VIII</td>
      <?php //Amagi ?> 
      <?php $node = node_load(142); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/amagi"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Myoko ?> 
      <?php $node = node_load(76); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/myoko"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Kitakami ?>
      <?php $node = node_load(527); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/kitakami"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>gd</div>
      </td>
      <?php //Fubuki ?> 
      <?php $node = node_load(213); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/fubuki"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 8 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 8 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>   
    
    <?php //tier 9 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>IX</td>
      <?php //battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Ibuki ?> 
      <?php $node = node_load(85); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/ibuki"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Kagero ?> 
      <?php $node = node_load(223); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/kagero"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 9 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 9 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>      
    
    <?php //tier 10 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>X</td>
      <?php //Yamato ?> 
      <?php $node = node_load(147); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/yamato"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Senjo ?> 
      <?php $node = node_load(91); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/senjo"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Shimakaze ?> 
      <?php $node = node_load(230); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/shimakaze"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    </tr>      
  </table>
<?php endif; ?>  
  
  
  
 <?php
 // USA Tech Tree
  if ($view->exposed_data['nation'] == 1):
?>  
  <table>
    
    <?php //table header?> 
    <tr>
      <td></td>
      <td>Battleships</td>
      <td></td>
      <td>Cruisers</td>
      <td></td>
      <td>Destroyers</td>
      <td></td>
      <td>Carriers</td>
      <td></td>
    </tr>
    
    <?php //tier 1 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>I</td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Erie ?> 
      <?php $node = node_load(239);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/erie"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 1 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 1 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>II</td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Chester ?> 
      <?php $node = node_load(255);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/chester"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Albany ?>
      <?php $node = node_load(521);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/albany"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Sampson ?> 
      <?php $node = node_load(335);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/sampson"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>III</td>
      <?php //Battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //St.Louis ?> 
      <?php $node = node_load(263);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/st-louis"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Wickes ?> 
      <?php $node = node_load(343);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/wickes"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>IV</td>
      <?php //battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Phoenix ?> 
      <?php $node = node_load(273);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/phoenix"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Clemson ?> 
      <?php $node = node_load(352);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/clemson"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Langley ?> 
      <?php $node = node_load(416);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/langley"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>V</td>
      <?php //battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Omaha ?> 
      <?php $node = node_load(283);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/omaha"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Nicholas ?> 
      <?php $node = node_load(361);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/nicholas"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Independence ?> 
      <?php $node = node_load(428);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/independence"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>    
    
    <?php //tier 6 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VI</td>
      <?php //battleship ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cleveland ?> 
      <?php $node = node_load(291);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/cleveland"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Farragut ?> 
      <?php $node = node_load(371);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/farragut"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Saipan ?> 
      <?php $node = node_load(440);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/saipan"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 6 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 6 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr> 
    
    <?php //tier 7 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VII</td>
      <?php //battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //pensacola ?> 
      <?php $node = node_load(299);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/pensacola"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //atlanta ?>
      <?php $node = node_load(326);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/atlanta"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left;"><?php print $node->field_credit_cost['und'][0]['value']; ?> gd</div>
      </td>
      <?php //Mahan ?> 
      <?php $node = node_load(380);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/mahan"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Sims ?> 
      <?php $node = node_load(553);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/sims"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>gd</div>
      </td>
      <?php //Ranger ?> 
      <?php $node = node_load(453);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/ranger"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 7 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 7 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr> 
    
    <?php //tier 8 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VIII</td>
      <?php //battleship ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //New Orleans ?> 
      <?php $node = node_load(307);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="font-size:10px;" href="ship/new-orleans"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Benson ?> 
      <?php $node = node_load(390);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/benson"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Lexington ?> 
      <?php $node = node_load(467);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/lexington"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 8 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 8 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>   
    
    <?php //tier 9 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>IX</td>
      <?php //battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Baltimore ?> 
      <?php $node = node_load(315);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/baltimore"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Fletcher ?> 
      <?php $node = node_load(399);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/fletcher"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 9 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 9 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>      
    
    <?php //tier 10 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>X</td>
      <?php //battleship ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Des moines ?> 
      <?php $node = node_load(320);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 70%;">
          <a style="margin-left: 1px;" href="ship/des-moines"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Gearing ?> 
      <?php $node = node_load(405);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/gearing"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Essex ?> 
      <?php $node = node_load(481);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/essex"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>cr</div>
        <div style="float:right; font-size:10px;"><?php print $node->field_experience_cost['und'][0]['value'];?> exp</div>
      </td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
      
  </table>
<?php endif; ?>  
  
  
   <?php
 // USSR Tech Tree
  if ($view->exposed_data['nation'] == 3):
?>  
  <table>
    
    <?php //table header?> 
    <tr>
      <td></td>
      <td>Battleships</td>
      <td></td>
      <td>Cruisers</td>
      <td></td>
      <td>Destroyers</td>
      <td></td>
      <td>Carriers</td>
      <td></td>
    </tr>
    
    <?php //tier 1 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>I</td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruiser ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 1 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 1 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>II</td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cruiser ?> 
      <td></td>
      <?php //Albany ?>
      <td></td>
      <?php //destr ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>III</td>
      <?php //Battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Aurora ?>
      <?php $node = node_load(486); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/aurora"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="clear: both;font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>gd</div>
      </td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>IV</td>
      <?php //battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>V</td>
      <?php //battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Murmanks ?>
      <?php $node = node_load(516); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/murmansk"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="clear: both;font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>gd</div>
      </td>
      <?php //des ?> 
      <td></td>
      <?php //Gremyashchy ?> 
      <?php $node = node_load(547); ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/gremyashchy"><strong><?php print $node->title; ?></strong></a>
        </div>
      </td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>    
    
    <?php //tier 6 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VI</td>
      <?php //battleship ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 6 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 6 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr> 
    
    <?php //tier 7 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VII</td>
      <?php //battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //cr pre ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 7 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 7 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr> 
    
    <?php //tier 8 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VIII</td>
      <?php //battleship ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 8 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 8 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>   
    
    <?php //tier 9 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>IX</td>
      <?php //battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 9 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 9 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>      
    
    <?php //tier 10 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>X</td>
      <?php //battleship ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
      
  </table>
<?php endif; ?>  

     <?php
 // UK Tech Tree
  if ($view->exposed_data['nation'] == 20):
?>  
  <table>
    
    <?php //table header?> 
    <tr>
      <td></td>
      <td>Battleships</td>
      <td></td>
      <td>Cruisers</td>
      <td></td>
      <td>Destroyers</td>
      <td></td>
      <td>Carriers</td>
      <td></td>
    </tr>
    
    <?php //tier 1 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>I</td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruiser ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 1 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 1 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>II</td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cruiser ?> 
      <td></td>
      <?php //crus prem ?>
      <td></td>
      <?php //destr ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 2 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>III</td>
      <?php //Battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //cr prem ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 3 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>IV</td>
      <?php //battleship ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 4 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>V</td>
      <?php //battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //cruiser ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //des prem ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 5 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>    
    
    <?php //tier 6 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VI</td>
      <?php //battleship ?> 
      <td></td>
      <?php //warspite ?> 
      <?php $node = node_load(541);
      ?>
      <td>
        <div style="float:left;">
        <?php $tier = taxonomy_term_load($node->field_tier['und'][0]['tid']);
          print $tier->field_roman_letter['und'][0]['value'];
        ?>
        </div>
        <div style="float:right;">
          <?php $class = taxonomy_term_load($node->field_class['und'][0]['tid']); ?>
          <img src="<?php print image_style_url('tech_tree_class_icon', $class->field_class_icon['und'][0]['filename']); ?>">
        </div>
        <div style="clear: both;margin-left: auto; margin-right: auto; width: 60%;">
          <a style="margin-left: 1px;" href="ship/warspite"><strong><?php print $node->title; ?></strong></a>
        </div>
        <div style="float:left; font-size:10px;"><?php print $node->field_credit_cost['und'][0]['value']; ?>gd</div>
      </td>
      <?php //cr ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 6 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 6 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr> 
    
    <?php //tier 7 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VII</td>
      <?php //battleship ?> 
      <td>
      </td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //cr pre ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 7 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 7 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr> 
    
    <?php //tier 8 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>VIII</td>
      <?php //battleship ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 8 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 8 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>   
    
    <?php //tier 9 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>IX</td>
      <?php //battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 9 row arrows 1?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
    
    <?php //tier 9 row arrows 2?> 
    <tr>
      <?php //tier ?> 
      <td></td>
      <?php //Battleships ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //Cruisers ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //Destro ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //Carriers ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>      
    
    <?php //tier 10 row 1?> 
    <tr>
      <?php //tier ?> 
      <td>X</td>
      <?php //battleship ?> 
      <td></td>
      <?php //BSprems ?> 
      <td></td>
      <?php //cr ?> 
      <td></td>
      <?php //Cruisers prems ?>
      <td></td>
      <?php //des ?> 
      <td></td>
      <?php //Destro prems ?> 
      <td></td>
      <?php //ca ?> 
      <td></td>
      <?php //ca prems ?> 
      <td></td>
    </tr>
      
  </table>
<?php endif; ?> 