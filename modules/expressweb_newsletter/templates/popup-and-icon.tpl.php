<div class="wrapper">
  <!-- Icon trigger newsletter form -->
  <div class="icon">
    <i class="newsletter-icon fa fa-envelope-o" data-toggle="modal" data-target="#newsletter-form"></i>
  </div>


  <!-- Modal -->
  <div class="modal fade" id="newsletter-form" tabindex="-1" role="dialog" aria-labelledby="myModalLabel">
    <div class="modal-dialog" role="document">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title" id="myModalLabel"><?php print t('Newsletter'); ?></h4>
        </div>
        <div class="modal-body">
          <div class="top-description">
            <?php print t("Subscribe to our newsletter. This way you'll be inform about news and special offers."); ?>
          </div>
          <?php print drupal_render($form); ?>
        </div>
      </div>
    </div>
  </div>
</div>