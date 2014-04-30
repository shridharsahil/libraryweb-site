(function ($) {

/**
 * @file AutoGrowInput.js
 * @author James Padolsey http://james.padolsey.com
 * Original code from Stack Overflow:
 * http://stackoverflow.com/questions/931207/is-there-a-jquery-autogrow-plugin-for-text-fields#answer-931695
 */
$.fn.autogrowinput = function(o) {

  o = $.extend({
    maxWidth: 1000,
    minWidth: 0,
    comfortZone: 70
  }, o);
  this.filter('.date-input').each(function(){
    var minWidth = o.minWidth || $(this).width(),
      val = '',
      input = $(this),
      testSubject = $('<div/>').css({
        position: 'absolute',
        top: -9999,
        left: -9999,
        width: 'auto',
        fontSize: input.css('fontSize'),
        fontFamily: input.css('fontFamily'),
        fontWeight: input.css('fontWeight'),
        letterSpacing: input.css('letterSpacing'),
        textTransform: input.css('textTransform'),
        whiteSpace: 'nowrap'
      }),
      check = function() {
        if (val === (val = input.val())) {return;}

        // Enter new content into testSubject
        var escaped = val.replace(/&/g, '&amp;').replace(/\s/g,' ').replace(/</g, '&lt;').replace(/>/g, '&gt;');
        testSubject.html(escaped);

        // Calculate new width + whether to change
        var testerWidth = testSubject.width(),
          newWidth = (testerWidth + o.comfortZone) >= minWidth ? testerWidth + o.comfortZone : minWidth,
          currentWidth = input.width(),
          isValidWidthChange = (newWidth < currentWidth && newWidth >= minWidth)
                     || (newWidth > minWidth && newWidth < o.maxWidth);

        // Animate width
        if (isValidWidthChange) {
          newWidth += 7;
          input.width(newWidth);
        }

      };
    testSubject.insertAfter(input);
    $(this).bind('keyup blur update', check).bind('keydown', function() {
        setTimeout(check);
    });
  });
  return this;
};

})(jQuery);
