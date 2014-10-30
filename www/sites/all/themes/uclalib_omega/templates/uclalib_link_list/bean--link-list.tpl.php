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

  <?php if (isset($content['field_introduction'])) { ?>
    <div class="link-list-intro"><?php print $content['field_introduction'][0]['#markup']; ?></div>
  <?php } ?>

    <?php
      $items = array();
      foreach(element_children($content['field_linklist_links']) as $link) {
        //dpm($link);
        //
        $class = 'no-description';
        if (isset($content['field_linklist_links'][$link]['field_link_description'])) {
          $class = 'with-description';
        }
        //dpm($content['field_linklist_links'][$link]);
        $items[] = array(
          'data' => render($content['field_linklist_links'][$link]),
          'class' => $class,
        );
      }
      print theme('item_list', array('items' => $items, 'attributes' => array('class' => 'menu')));
    ?>

  </div>
</div>
