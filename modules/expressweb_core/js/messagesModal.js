/* 
* Renders messages as modal
*/
(function ($) {
Drupal.behaviors.messagesModal = {
  attach: function(context) {
    $(window).load(function() {
      $('.modal.messages').modal('show');
      setTimeout(function() { jQuery('.modal.messages').modal('hide')}, 3000);
    });
  }
};
})(jQuery);