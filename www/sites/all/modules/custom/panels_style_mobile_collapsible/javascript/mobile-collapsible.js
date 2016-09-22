// jQuery plugin to make elements collapsible on mobile.
// Usage example with default options:
// $( ".js-mobile-collapsible" ).mobileCollapsible({
//     breakpoint: "400px",
//     activeClass: "is-mobile"
// });

(function( $ ) {

  $.fn.mobileCollapsible = function( options ) {

    return this.each(function() {
      new mobileCollapsible( this, options );
    });

  };

  function mobileCollapsible( element, options ) {
      this.element = element;
      this.options = $.extend( {}, $.fn.mobileCollapsible.defaults, options );

      this.init();
  }

  mobileCollapsible.prototype.init = function () {
    var mc = this;
    mc.media = window.matchMedia( mc.options.breakpoint );
    mc.media.addListener(function(data) {
      mc.checkBreakpoint( data );
    });
    mc.checkBreakpoint( mc.media );

    $(mc.element).find('.mobile-collapsible__title').on('click', function(e) {
      e.preventDefault();
      mc.toggle();
    });
  }

  mobileCollapsible.prototype.checkBreakpoint = function( media ) {
    if(media.matches) {
      this.addCollapsibility();
    }
    else {
      this.removeCollapsibility();
    }
  }

  mobileCollapsible.prototype.addCollapsibility = function() {
    $(this.element).addClass(this.options.activeClass);
  }

  mobileCollapsible.prototype.removeCollapsibility = function() {
    $(this.element).removeClass(this.options.activeClass);
  }

  mobileCollapsible.prototype.toggle = function() {
    $(this.element).toggleClass(this.options.openClass);
  }

  $.fn.mobileCollapsible.defaults = {
    breakpoint: '(max-width: 600px)',
    activeClass: 'is-mobile',
    openClass: 'is-open'
  };

}( jQuery ));
