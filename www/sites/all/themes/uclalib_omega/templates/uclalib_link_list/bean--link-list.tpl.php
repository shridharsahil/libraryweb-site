<?php
/**
 * @file
 * Display list links in an item_list.
 *
 * Overrides the default bean.tpl.php theme function.
 *
 * @see  bean.tpl.php
 */
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>

    <?php
      $items = array();
      foreach(element_children($content['field_linklist_links']) as $link) {
        $items[] = render($content['field_linklist_links'][$link]);
      }
      print theme('item_list', array('items' => $items, 'attributes' => array('class' => 'menu')));
    ?>

  </div>
</div>
