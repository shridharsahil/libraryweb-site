<?php
/**
 * @file panels-pane.tpl.php
 * Main panel pane template
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 * - $links: Any links associated with the content
 * - $more: An optional 'more' link (destination only)
 * - $admin_links: Administrative links associated with the content
 * - $feeds: Any feed icons or associated with the content
 * - $display: The complete panels display object containing all kinds of
 *   data including the contexts and all of the other panes being displayed.
 */
?>
<div class="<?php print $classes; ?> js-mobile-collapsible<?php if(!$collapsed):?> is-open<?php endif; ?>">

  <?php if ($title): ?>
    <h2 class="mobile-collapsible__title<?php if($panel_pane_classes): ?> pane-title<?php endif; ?>"><?php print $title; ?></h2>
  <?php endif; ?>


  <div class="mobile-collapsible__content<?php if($panel_pane_classes): ?> pane-content<?php endif; ?>">
    <?php print render($content); ?>
  </div>

</div>
