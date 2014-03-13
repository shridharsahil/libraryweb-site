<?php
/**
 * @file
 * File description goes here
 */

class uclalib_destination_field_facilities_icons extends views_handler_field_entity {
  function construct() {
    parent::construct();
  }
  function render($values) {
    if ($node = $this->get_value($values)) {
      $vocs = array(
        'field_amenities',
        'field_study_areas',
        'field_equipment',
      );

      $tids = uclalib_destination_fetch_facilities_tids($node, $vocs);
      $output = '';
      if (!empty($tids)) {
        $view = views_get_view('at_this_location_block');
        $view->set_display('panel_pane_3');
        $args = array(
          implode('+', $tids),
        );
        $view->set_arguments($args);
        $output .= $view->preview();
      }

      return $output;
    }
  }
}