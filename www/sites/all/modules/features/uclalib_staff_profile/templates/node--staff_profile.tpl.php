<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Article" it would result in "node-article". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. page, article, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
//dpm($variables);

drupal_set_title(t('Staff Directory'));


?>

<div class="panel-pane pane-custom pane-1 pane-style-background-grayone">
  <div class="panel-pane pane-bean-showcase pane-bean-sample-image-showcase">
    <div class="pane-content">
      <div class="entity entity-bean bean-showcase clearfix">
        <div class="content">
          <div class="field__items clearfix">
            <div class="field__item one">
              <div class="field-collection-view clearfix view-mode-full">
                <div class="field field--name-field-showcase-image field--type-image field--label-hidden"><div class="field__items">
                    <div class="field__item even"><?php echo render($content['field_staff_image_thumbnail']);?></div>
                    <div class="field field--name-field-showcase-image field--type-image field--label-hidden"><div class="field__items">
                        <div class="contact">
                          <div class="field__item even">
                            <br />
                            <strong>Phone</strong>
                            <?php echo render($content['field_staff_phone']);?>
                            <strong>Email</strong> <?php echo render($content['field_staff_email']);?>
                          <div class="field field--name-field-showcase-image field--type-image field--label-hidden"><div class="field__items">
                              <div class="field__item even"><div class="field__items"><div class="field__item even">
                                    <?php
                                    print '<strong>Location</strong>'; // change to any HTML
                                    print render($content['field_staff_location']);
                                    ?>
                                    <?php 
                                    print '<strong>Department</strong>'; // change to any HTML
                                    print render($content['field_staff_departments']);
                                    ?>
<!-- social icons reused from BS -->
                                    <div class="panel-pane pane-entity-field pane-node-field-location-social-links">

                                      <div class="pane-content">

            <?php foreach ((array)$field_location_social_links as $item) { ?>

              <?php $content['field_location_social_links']['#label_display'] = 'hidden';
                                        print '<strong>Connect with me</strong>'; // change to any HTML
                                        print render($content['field_location_social_links']);
                                        break;

                                        ?>
            <?php } ?>

                                        </div>
</div>

                                      <br />



                                    </div></div></div></div></div>
                          </div></div></div></div></div>
                </div></div></div>


          <div class="field__item two">
            <h2 class="pane-title left"><strong>
                <?php echo render($content['uclalib_staff_name']);?>

              </strong></h2>
            <h3 class="pane-title left"><strong> <?php echo render($content['field_staff_job_title']);?></strong></h3>
<br />
            <?php foreach ((array)$field_staff_area_of_expertise as $item) { ?>

              <?php $content['field_staff_area_of_expertise']['#label_display'] = 'hidden';
              print '<strong>Ask me about</strong>'; // change to any HTML
              print render($content['field_staff_area_of_expertise']);
              break;

             ?>
            <?php } ?>
            <br />
            <?php foreach ((array)$field_staff_acad_dept_liaison as $item) { ?>

              <?php $content['field_staff_acad_dept_liaison']['#label_display'] = 'hidden';

              print '<strong>Subject Specialty Areas</strong>'; // change to any HTML
              print render($content['field_staff_acad_dept_liaison']);
              break;

              ?>
            <?php } ?>
            <br />
            <?php foreach ((array)$field_text_block as $item) { ?>
              <?php 
              $content['field_text_block']['#label_display'] = 'hidden';

              print '<strong>Biography</strong><br />'; // change to any HTML
              print render($content['field_text_block']);

              ?>
            <?php } ?>


          </div></div></div></div></div></div></div>


