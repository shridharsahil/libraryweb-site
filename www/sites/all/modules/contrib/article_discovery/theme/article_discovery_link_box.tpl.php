<?php
/**
 * @file
 * Formats the link to the article.  Takes several parameters into account.
 *
 * @param $data
 *   $data is an associative array of extra data regarding the record.
 *   $data['new-window'] => make the link with target="_blank".
 *   $data['text'] => the text for the link.
 *   $data['link'] => the url for the link.
 *   $data['fulltext'] => Does the record claim to be be full text?
 */
 
$data = $variables['data'];
?>
<div class="article-discovery-link">
  <div class="article-discovery-link-inner">
<?php
  print l(
    $data['text'],
    $data['link'],
    array(
      'html' => TRUE,
      'attributes' => $data['attributes'],
    )
  );
?>
    <?php if ($data['fulltext']): ?>
      <?php print t('Full Text Online'); ?>
    <?php else: ?>
      <?php print t('Citation Online (no full text online)'); ?>
    <?php endif; ?>
  </div>
</div>
