(function ($) {
  Drupal.behaviors.mobileCollapsible = {
    attach: function (context, settings) {
      $(context).find('.js-mobile-collapsible').mobileCollapsible();
    }
  };
}(jQuery));
