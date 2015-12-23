(function ($) {
  Drupal.behaviors.imageScroll = {
    attach: function (context, settings) {
      $('.img-holder').imageScroll();
    }
  }
}(jQuery));