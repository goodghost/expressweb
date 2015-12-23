/**
 * @file
 * Add contact form funcionallity.
 */
(function ($) {
Drupal.behaviors.contact_form = {
  attach: function(context) {
    var $contact_form = $('.node-contact_form-form'),
        $form_text_item = $('.node-contact_form-form .form-type-textfield').not('.tabbable .form-type-textfield');

    $('label', $form_text_item).hide();
    
    $form_text_item.each(function(index) {
      var value = $('label', this).text();
      $('input', this).val(value);

      $('input', this).focus(function() {
        $(this).val('');
      });

      $('input', this).blur(function() {
        if ($(this).val() == '') {
          $(this).val(value);
        }
      });

    }); 

  }
};
})(jQuery);