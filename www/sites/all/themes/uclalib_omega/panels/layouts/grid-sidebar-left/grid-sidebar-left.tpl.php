<?php
/**
 * @file
 * Template for the Golden layout.
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

  <?php if (!empty($content['sidebar_left'])): ?>
    <div<?php print drupal_attributes($region_attributes_array['sidebar_left'])?>>
      <?php print $content['sidebar_left'] ?>
    </div>
  <?php endif; ?>

  <div class="l-region l-region--main-column">
    <?php if (!empty($content['main'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['main'])?>>
        <?php print $content['main'] ?>
      </div>
    <?php endif; ?>

    <div class="content-top">
    <?php if (!empty($content['content_top_left'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['content_top_left'])?>>
        <?php print $content['content_top_left'] ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($content['content_top_right'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['content_top_right'])?>>
        <?php print $content['content_top_right'] ?>
      </div>
    <?php endif; ?>
    </div>

    <div class="content-middle">
    <?php if (!empty($content['content_middle_left'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['content_middle_left'])?>>
        <?php print $content['content_middle_left'] ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($content['content_middle_right'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['content_middle_right'])?>>
        <?php print $content['content_middle_right'] ?>
      </div>
    <?php endif; ?>
    </div>

    <div class="content-bottom">
    <?php if (!empty($content['content_bottom_left'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['content_bottom_left'])?>>
        <?php print $content['content_bottom_left'] ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($content['content_bottom_right'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['content_bottom_right'])?>>
        <?php print $content['content_bottom_right'] ?>
      </div>
    <?php endif; ?>
    </div>

  </div>

</div>
