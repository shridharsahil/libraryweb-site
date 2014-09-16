(function ($) {

/**
 * A date range picker implementation for custom Calendar functionality.
 * @author
 *  James Wilson <james@bluesparklabs.com>
 */
Drupal.behaviors.dateRangePicker = {
  attach: function (context) {
    $('.date-range-picker', context).once('date-range-picker', function () {
      var $input = $('.date-input', this);
      var $submit = $('input:button', this);
      $input.autogrowinput({comfortZone: 20, minWidth: 10, maxWidth: 800}).trigger('onChange');
      $input.daterangepicker({
        arrows: false,
        closeOnSelect: true,
        dateFormat: 'DD, MM d, yy', // See http://docs.jquery.com/UI/Datepicker/%24.datepicker.formatDate
        presetRanges: [
          {text: 'Today', dateStart: 'today', dateEnd: 'today' },
          {text: 'This Week',
            dateStart: function() {
              return Date.today().moveToDayOfWeek(0, -1);
            },
            dateEnd: function() {
              return Date.today().moveToDayOfWeek(0, 1);
            }
          },
          {text: 'This Month',
            dateStart: function() {
              return Date.today().moveToFirstDayOfMonth();
            },
            dateEnd: function() {
              return Date.today().moveToLastDayOfMonth();
            }
          },
          {text: 'Next Month',
            dateStart: function() {
              return Date.today().add({month:1}).moveToFirstDayOfMonth();
            },
            dateEnd: function() {
              return Date.today().add({month:1}).moveToLastDayOfMonth();
            }
          },
          {text: 'Next 30 Days', dateStart: 'Today', dateEnd: 'Today+30days' }
        ],
        presets: {
          specificDate: 'Specific Date',
          dateRange: 'Date Range'
        },
        onChange: function() {
          // Trigger the autogrowinput.js script.
          $('.date-range-picker .date-input').trigger('onChange');
        },
        onOpen: function() {
          // Trigger the autogrowinput.js script.
          $('.date-range-picker .date-input').trigger('onChange');
        },
        onClose: function () {
          // Trigger the autogrowinput.js script.
          $('.date-range-picker .date-input').trigger('onChange');

          // A one second delay before the redirect.
          setTimeout( function(text) {
            var dates = $('.date-range-picker .date-input').trigger('onChange').attr('value').split(' - ');
            // Validate and parse first date.
            var date1 = Date.parse(dates[0]);
            if (!date1) {
              alert("Oops, '" + dates[0] + "' was not recognized as a valid date.");
              return false;
            }
            else {
              date_url = date1.toString("yyyy-MM-dd");
            }
            // Validate and parse second date, if it exists.
            if (dates.length > 1) {
              var date2 = Date.parse(dates[1]);
              if (!date2) {
                alert("Oops, '" + dates[1] + "' was not recognized as a valid date.");
                return false;
              }
              else {
                date_url += "--" + date2.toString("yyyy-MM-dd");
              }
            }
	    // Build final URL, including query parameters from Solr facets
            var url = "/" + Drupal.settings.dateRangePicker.base_path + "/" + date_url + window.location.search;
            window.location.href = url;
          }, 1000);
        }
      });
    });
  }
};

})(jQuery);
