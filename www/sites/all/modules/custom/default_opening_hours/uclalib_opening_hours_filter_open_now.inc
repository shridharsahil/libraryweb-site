<?php
/**
 * @file
 * Views filter plugin to filter by opening hours.
 */

class uclalib_opening_hours_filter_open_now extends views_handler_filter_boolean_operator {
  /**
   * Add this filter to the query.
   */
  public function query() {
    if (isset($this->view->exposed_input['open_now']) && $this->view->exposed_input['open_now']) {

      $this->get_opening_results();

      // Add the list of nids as condition to the query.
      if ($this->opening_results) {
        $nids = array_keys($this->opening_results);
        foreach ($nids as $nid) {
          $this->query->condition('nid', $nid, 'IN', $this->options['group']);
        }
        $this->query->where[$this->options['group']]['type'] = 'OR';
      }
    }
  }

  public function get_opening_results() {
    if (!isset($this->opening_results)) {
    // Get current date and time.
    $date = date_create();
    $time = $date->format('H:i:s');
    // We calculate a time ahead to give a 15 min margin to open.
    // So we will be including nodes that open in 15 min from now.
    $time_ahead = $date->add(DateInterval::createFromDateString('15 minutes'))->format('H:i:s');
    $date = $date->format('Y-m-d');

    // Get the list of all nodes that are currently open.
    $this->opening_results = db_select('opening_hours', 'oh')
      ->fields('oh', array('nid'))
      ->condition('date', $date)
      ->condition('start_time', $time_ahead, '<=')
      ->condition('end_time', $time, '>=')
      ->execute()
      ->fetchAllAssoc('nid');

    }

    return $this->opening_results;
  }


  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);

    $form['value']['#title'] = t('Open Now');
    $form['value']['#type'] = 'checkbox';
    $form['value']['#required'] = FALSE;
    $form['value']['#default_value'] = FALSE;

    $this->get_opening_results();

    if (!$this->opening_results) {
      $form['value']['#disabled'] = TRUE;
      $form['value']['#description'] = t('Everything is closed');
    }
  }

}
