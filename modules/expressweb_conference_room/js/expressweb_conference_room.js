/**
 * @file
 * Add conference room funcionallity
 */
(function ($) {
Drupal.behaviors.conference_room = {
  attach: function(context) {
    var $view_full_nodes_row = $('.view-conference-rooms.view-display-id-block .views-row'),
        $view_list_row = $('.view-conference-rooms.view-display-id-block_1 .views-row'),
        $view_list_row_link = $('.view-conference-rooms.view-display-id-block_1 .views-row .views-field-view-node a'),
        $close = $('.node-conference-room .close');

    $view_list_row_link.on('click', function(e) {
      e.preventDefault();
    });

    $view_full_nodes_row.css('display', 'none');

    $view_list_row.click(function() {
      var index = $(this).index();
      $view_full_nodes_row.css('display', 'none');
      $view_full_nodes_row.eq(index).slideDown('fast');
      $view_list_row.addClass('shorten');
    });

    $close.click(function() {
      $view_full_nodes_row.slideUp('fast');
      $view_list_row.removeClass('shorten');
    })
  }
};
})(jQuery);