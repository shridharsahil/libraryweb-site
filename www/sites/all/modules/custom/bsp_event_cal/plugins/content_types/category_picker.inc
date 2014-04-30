<?php
/**
 * @file
 * Provides the Event Category picker.
 */

$plugin = array(
  'title' => t('Event Category Picker'),
  'description' => t('Browse events by category'),
  'single' => TRUE,
  'content_types' => array('bsp_event_cal_category_picker_pane'),
  'render callback' => 'category_picker_content_type_render',
  'defaults' => array(),
  'edit form' => 'category_picker_content_type_edit_form',
  'category' => array(t('Calendar'), -9),
);

/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time.
 * @param $args
 * @param $context
 *   Context - in this case we don't have any.
 *
 * @return
 *   An object with at least title and content members.
 */
function category_picker_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();

  $block->title = check_plain("Categories");

  // Find the event category taxonomy
  $result = db_select('taxonomy_vocabulary', 'tv')
    ->fields('tv', array('vid'))
    ->condition('machine_name', "event_categories")
    ->execute()
    ->fetchAssoc();

  // Get the term tree for the taxonomy we found
  $taxonomy = taxonomy_get_tree($result['vid']);

  // Get the active category (if any) from the URL
  $arguments = explode('/', $_GET['q']);
  $active_term_id = 0;
  if (isset($arguments[2]) && is_numeric($arguments[2])) {
    $active_term_id = $arguments[2];
  }
  // Get the active queries (if any) from the URL
  $query = _get_url_query();

  // The requested date range.
  $date_range = NULL;
  if (!empty($arguments[1])) {
    $date_range = $arguments[1];
  }
  else {
    $date_range = date('Y-m');
  }

  $taxonomy = taxonomy_get_nested_tree($taxonomy);
  $all = new stdClass;
  $all->name = t("All");
  $all_array = array($all);
  $taxonomy = array_merge($all_array, $taxonomy);

  $taxonomy_menu = taxonomy_nested_tree_output($taxonomy, $date_range, $query, $active_term_id);

  $block->content = $taxonomy_menu;

  return $block;
}

/**
 * 'Edit form' callback for the content type.
 */
function category_picker_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Get nested array of taxonomy terms
 */
function taxonomy_get_nested_tree($terms = array(), $max_depth = NULL, $parent = 0, $parents_index = array(), $depth = 0) {
  $return = array();
  if (is_int($terms)) {
    $terms = taxonomy_get_tree($terms);
  }

  foreach($terms as $term) {
    foreach($term->parents as $term_parent) {
      if ($term_parent == $parent) {
        $return[$term->tid] = $term;
      }
      else {
        $parents_index[$term_parent][$term->tid] = $term;
      }
    }
  }

  foreach($return as &$term) {
    if (isset($parents_index[$term->tid]) && (is_null($max_depth) || $depth < $max_depth)) {
      $term->children = taxonomy_get_nested_tree($parents_index[$term->tid], $max_depth, $term->tid, $parents_index, $depth + 1);
    }
  }

  return $return;
}

/**
 * Build a menu tree based on a nested array of taxonomy terms
 */
function taxonomy_nested_tree_output($tree, $current_date_string, $query = array(), $active_term_id = 0) {
  if (!empty($tree) && is_array($tree)) {
    $output = '<ul class="taxonomy-tree">';
    foreach ($tree as $term) {
      $output .= '<li class="taxonomy-term">';
      if (isset($term->tid)) {
        $term_entity = entity_load('taxonomy_term', array($term->tid));
        $term_entity[$term->tid]->field_icon['und'][0]['alt'] = $term->name;
        $term_entity[$term->tid]->field_icon['und'][0]['title'] = $term->name;
        if (array_key_exists('uri', $term_entity[$term->tid]->field_icon['und'][0])) {
          $term_entity[$term->tid]->field_icon['und'][0]['path'] = $term_entity[$term->tid]->field_icon['und'][0]['uri'];
          $output .= theme('image', $term_entity[$term->tid]->field_icon['und'][0]);
        }
        $classes = array('category-link');
        $output .= l($term->name, variable_get('bsp_event_cal_base_path', 'calendar') . '/' . $current_date_string . '/' . $term->tid, array('attributes' => array('class' => $classes), 'query' => $query));
      }
      else {
        $classes = array('category-link');
        if ($active_term_id == 0) {
          $classes[] = 'active';
        }
        $output .= l($term->name, variable_get('bsp_event_cal_base_path', 'calendar') . '/' . $current_date_string, array('attributes' => array('class' => $classes), 'query' => $query));
      }
      if (isset($term->children)) {
        $output .= taxonomy_nested_tree_output($term->children, $current_date_string, $query);
      }
      $output .= '</li>';
    }
    $output .= '</ul>';
  }
  return $output;
}

/**
 * helper function to get current query terms as array.
 */
function _get_url_query() {
  $url = $_SERVER['REQUEST_URI'];
  $parts = parse_url($url);

  if (isset($parts['query'])) {
    parse_str(urldecode($parts['query']), $parts['query']);
    return($parts['query']);
  }

  return array();
}

