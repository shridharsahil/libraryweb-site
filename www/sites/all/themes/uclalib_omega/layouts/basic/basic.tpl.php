<div<?php print $attributes; ?>>
  <div class="l-header-wrapper">
    <div class="l-header" role="banner">
      <?php print render($page['branding']); ?>
      <?php print render($page['header']); ?>
    </div>
  </div>

  <div class="l-navigation-wrapper">
    <div id="menu" class="l-navigation">
      <?php print render($page['navigation']); ?>
    </div>
  </div>
  <?php print render($page['help']); ?>
  <?php if ($page['highlighted']) : ?>
  <div class="l-highlighted-wrapper">
    <div class="l-highlighted">
      <?php print render($page['highlighted']); ?>
    </div>
  </div>
  <?php endif; ?>

  <div class="l-main-wrapper">
    <div class="l-main">

      <div class="l-content" role="main">
        <a name="main-content"></a>
        <?php print render($page['content']); ?>
      </div>

      <?php print render($page['sidebar_first']); ?>
      <?php print render($page['sidebar_second']); ?>
    </div>
  </div>

  <div class="l-colophon-wrapper">
    <div class="l-colophon" role="contentinfo">
      <?php print render($page['colophon_first']); ?>
      <?php print render($page['colophon_second']); ?>
      <?php print render($page['colophon_third']); ?>
    </div>
  </div>

  <div class="l-footer-wrapper">
    <div class="l-footer" role="contentinfo">
      <?php print render($page['footer']); ?>
    </div>
  </div>
</div>
