<?php
/**
 * @file
 * Handler to display today's opening hours for a node.
 */

class uclalib_opening_hours_field_opening_hours_today extends views_handler_field {
  public function render($values) {
    $date = date_create()->format('Y-m-d');
    $nid = $this->get_value($values);
    $result = db_select('opening_hours', 'oh')
      ->condition('nid', $nid)
      ->condition('date', $date)
      ->fields('oh', array('start_time', 'end_time'))
      ->execute()
      ->fetchAssoc();

    if (isset($result['start_time']) && isset($result['end_time'])) {
      $start_time = _uclalib_opening_hours_short_time($result['start_time']);
      $end_time = _uclalib_opening_hours_short_time($result['end_time']);
      $hours = _uclalib_opening_hours_combine_start_end_times($start_time, $end_time);
      return $hours;
    }

    return '';
  }
}
