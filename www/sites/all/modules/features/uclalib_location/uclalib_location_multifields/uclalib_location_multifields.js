/**
 * @file uclalib_location_multifields.js
 */
(function ($) {

var markUrlRequired = function (e) {
  var selectElement = $(e.target);

  // get this select element's delta.
  var regex = /edit-field-location-social-links-und-(\d*)-field-social-type-und/ig;
  var delta = regex.exec(selectElement.attr('id'))[1];

  $('label[for=edit-field-location-social-links-und-' + delta + '-field-social-link-und-0]').once(function() {
    $(this).append('<span class="form-required" title="This field is required.">*</span>');
  });

  if ($(e.target).val() == '_none') {
    // URL field is not required.
    $('label[for=edit-field-location-social-links-und-' + delta + '-field-social-link-und-0] .form-required').hide();
  }
  else {
    // URL field is required.
    $('label[for=edit-field-location-social-links-und-' + delta + '-field-social-link-und-0] .form-required').show();
  }
}

var addSocialBehavior = function () {
  $.each($(':input[name^="field_location_social_links"][id*="social-type-und"]'), function(index, param) {
    $(this).change(markUrlRequired);
    $(this).trigger("change");
  });
}

// Initial page load.
$(window).load( function() {
  addSocialBehavior();
  $( document ).ajaxComplete(addSocialBehavior);
});

})(jQuery);
