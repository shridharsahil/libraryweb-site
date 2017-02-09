<div class="header-search-form-wrapper">
  <form class="header-search-form" action="<?php print $block['url']; ?>" method="get" accept-charset="UTF-8">
    <div class="form-wrapper">
      <div class="form-item form-type-textfield">
        <label for="search-staff-directory" class="hide-label">Search the Staff Directory</label>
        <input type="text" class="form-text" id="search-staff-directory" name="search_api_views_fulltext" value="" size="70" maxlength="128"  placeholder="<?php print $block['placeholder']; ?>">
      </div>
      <div class="form-actions">
        <input type="submit" class="form-submit" id="submit" value="<?php print $block['submit']; ?>" >
      </div>
    </div>
  </form>
</div>
<style type="text/css">.form-item .hide-label { display: none; }</style>