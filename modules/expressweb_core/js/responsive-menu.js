/* 
* Adds ability to change text next to burger menu 
* when open and close navigation - only for phone
* navigation.
*/
(function ($) {
Drupal.behaviors.responsiveMenu = {
  attach: function(context) {
    var $button_navigation = $('button.navbar-toggle'),
        i = 0;

    $button_navigation.click(function() {
      if (i == '0') {
        $(this).addClass('open-navigation');
        i++;
      } else {
        $(this).removeClass('open-navigation');
        i--;
      }
    });
  }
};
})(jQuery);