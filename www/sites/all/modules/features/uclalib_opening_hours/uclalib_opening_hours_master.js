/**
 * @file uclalib_opening_hours_master.js
 */
(function ($) {

// Initial page load.
$(window).load(function() {
  // Load alert text.
  loadHours();
});

// Function to update alert text.
var loadHours = function () {
  var callback = '/ajax/todays_hours_master';
  $('.pane-todays-hours-master .pane-content').load(callback);

  // Update content on the hour.
  // First, calculate the time until the next hour.
  var d = new Date(),
      hour = new Date(d.getFullYear(), d.getMonth(), d.getDate(), d.getHours() + 1, 0, 0, 0),
      timeRemaining = hour - d;
  // Add between one and three minutes to the time returned to keep
  // all open pages from hitting the server at once.
  timeRemaining += Math.floor((Math.random() * 120000) + 60000);
  if (timeRemaining > 1000) {
    window.setTimeout(loadHours, timeRemaining);
  }
  else {
    // Try again in five minutes if we got a very small number.
    window.setTimeout(loadHours, 300000);
  }
}

})(jQuery);
