<?php
/**
 * @file
 * Template for the Homepage layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<div<?php print $attributes ?>>

  <?php if (!empty($content['top'])): ?>
    <div<?php print drupal_attributes($region_attributes_array['top'])?>>
      <?php print $content['top'] ?>
    </div>
  <?php endif; ?>

  <div class="homepage-top">
    <div class="homepage-top-left">
      <?php if (!empty($content['top_left_main'])): ?>
        <div<?php print drupal_attributes($region_attributes_array['top_left_main'])?>>
          <?php print $content['top_left_main'] ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($content['top_left_bottom_left'])): ?>
        <div<?php print drupal_attributes($region_attributes_array['top_left_bottom_left'])?>>
          <?php print $content['top_left_bottom_left'] ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($content['top_left_bottom_right'])): ?>
        <div<?php print drupal_attributes($region_attributes_array['top_left_bottom_right'])?>>
          <?php print $content['top_left_bottom_right'] ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($content['top_left_bottom_after'])): ?>
        <div<?php print drupal_attributes($region_attributes_array['top_left_bottom_after'])?>>
          <?php print $content['top_left_bottom_after'] ?>
        </div>
      <?php endif; ?>
    </div> <!-- homepage-top-left -->
    <div class="homepage-top-right-sidebar">
      <?php if (!empty($content['top_right_sidebar'])): ?>
        <div<?php print drupal_attributes($region_attributes_array['top_right_sidebar'])?>>
          <?php print $content['top_right_sidebar'] ?>
        </div>
      <?php endif; ?>
    </div> <!-- homepage-top-right-sidebar -->
  </div> <!-- homepage-top -->

  <div class="homepage-bottom">
    <?php if (!empty($content['bottom_left'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['bottom_left'])?>>
        <?php print $content['bottom_left'] ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($content['bottom_right'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['bottom_right'])?>>
        <?php print $content['bottom_right'] ?>
      </div>
    <?php endif; ?>
  </div> <!-- homepage-bottom -->
</div>
