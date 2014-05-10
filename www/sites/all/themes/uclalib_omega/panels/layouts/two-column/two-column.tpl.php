<?php
/**
 * @file
 * Template for the Two column symetrical grid layout.
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

  <div class="l-region l-region--main-column">
    <?php if (!empty($content['main'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['main'])?>>
        <?php print $content['main'] ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['left'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['left'])?>>
        <?php print $content['left'] ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['right'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['right'])?>>
        <?php print $content['right'] ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['secondary'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['secondary'])?>>
        <?php print $content['secondary'] ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['below_left'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['below_left'])?>>
        <?php print $content['below_left'] ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['below_right'])): ?>
      <div<?php print drupal_attributes($region_attributes_array['below_right'])?>>
        <?php print $content['below_right'] ?>
      </div>
    <?php endif; ?>

  </div>
</div>
