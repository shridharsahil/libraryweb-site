<?php
/**
 * @file
 * Handler to display the current week's opening hours for a node.
 */

class uclalib_opening_hours_field_opening_hours_week extends views_handler_field {
  function init(&$view, &$options) {
    parent::init($view, $options);

    // Ensure nid and title are in the values.
    $this->additional_fields['nid'] = array('table' => 'node', 'field' => 'nid');
    $this->additional_fields['title'] = array('table' => 'node', 'field' => 'title');
  }

  public function render($values) {
    // Create a dummy node object.
    $node = new stdClass();
    $node->nid = $this->get_value($values, 'nid');
    $node->title = $this->get_value($values, 'title');

    // Render the table, it only needs nid and title.
    $output = uclalib_opening_hours_generate_table($node);

    return $output;
  }
}
