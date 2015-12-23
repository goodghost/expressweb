/**
 * @file
 * Add newsletter funcionallity
 */
(function ($) {
Drupal.behaviors.newsletter = {
  attach: function(context) {
    var $form = $('#newsletter-form');
    $form.appendTo('body');
  }
};
})(jQuery);