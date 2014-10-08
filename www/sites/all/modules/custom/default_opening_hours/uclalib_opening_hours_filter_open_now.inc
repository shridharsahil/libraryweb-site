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

    // See if the "open now filter" exists on this view.
    if (isset($this->view->filter['open_now']) && $this->view->filter['open_now']->value) {

      // The "open now" filter exists, if it's exposed, we also need to check if the exposed checkbox is checked.
      if ($this->view->filter['open_now']->options['exposed']) {

        // The filter is exposed, check if it has been checked.
        if (!isset($this->view->exposed_input['open_now']) || (isset($this->view->exposed_input['open_now']) && !$this->view->exposed_input['open_now'])) {

          // The filter checkbox is not checked, don't add our filtering.
          return;
        }
      }

      // We got this far, so it's time to limit the query results to items that are open now.
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
    // 2014-10-07 akohler: Temporarily disabled time_ahead, as it's buggy (the $date->add modifies
    //   $date, so from 23:45-23:59 $date used in the query is tomorrow, not today).
    //   Also, checking on OP-495 to see if we really want this 15 minute opening lead time.
    //$time_ahead = $date->add(DateInterval::createFromDateString('15 minutes'))->format('H:i:s');
    $date = $date->format('Y-m-d');

    // Get the list of all nodes that are currently open.
    $this->opening_results = db_select('opening_hours', 'oh')
      ->fields('oh', array('nid'))
      ->condition('date', $date)
      //->condition('start_time', $time_ahead, '<=')
      ->condition('start_time', $time, '<=')
      ->condition('end_time', $time, '>=')
      ->execute()
      ->fetchAllAssoc('nid');

    }

    return $this->opening_results;
  }


  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);

    $params = uclalib_opening_hours_get_params();

    // First time the view is loaded (or user click the Reset button), URL doesn't have parameters
    if (!$params) {
      $value = 0; // checkbox unchecked by default
    }
    // If URL has parameters.
    else {
      // If our filter is present in the URL as parameter and its value is '1'
      if (isset($params['open_now']) && $params['open_now'] == 1) {
        $value = 1;
      }
      else {
        $value = 0;
      }
    }

    $form['value']['#title'] = t('Open Now');
    $form['value']['#type'] = 'checkbox';
    $form['value']['#required'] = FALSE;
    $form['value']['#default_value'] = isset($this->value) ? $this->value : NULL;
    $form['value']['#value'] = $value;

    $this->get_opening_results();

    if (!$this->opening_results) {
      $form['value']['#disabled'] = TRUE;
      $form['value']['#description'] = t('Everything is closed');
    }
  }

}

function uclalib_opening_hours_get_params() {
  global $base_url;
  $query = array();

  $url = $base_url.request_uri();
  $url = parse_url($url);

  if(isset($url['query'])) {
    parse_str($url['query'],$query);
  }

  return $query;
}

