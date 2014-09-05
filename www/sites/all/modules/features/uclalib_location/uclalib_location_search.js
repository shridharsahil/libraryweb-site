/**
 * @file uclalib_location_search.js
 */
(function ($) {

// Initial page load.
$(window).load( function() {

  // Submit locations form when 'open now' checkbox is changed.
  $('#edit-open-now').css('border', '2px solid red');
  $('#edit-open-now').change(function() {
    $(this).closest("form").submit();
  });

});

})(jQuery);
