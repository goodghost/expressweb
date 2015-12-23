<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
<?php 
/*
* ------------------------------------------------------------------------------------------------------
* ------------------------------------------------------------------------------------------------------ 
* Default (0) style
* ------------------------------------------------------------------------------------------------------
* ------------------------------------------------------------------------------------------------------
*/ 
?>
<?php if ($contact_style == '0') : ?>
  <?php print $user_picture; ?>
  <?php if (!$teaser) : ?>
    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <div class="container">
      <?php /* Address, phones and mails */ ?>
      <div class="tele-address">
        <?php if (!empty($content['field_street_and_number']) || !empty($content['field_postal_code']) || !empty($content['field_city'])) : ?>
          <h4><?php print t('Address data'); ?>:</h4>
          <div class="address-data">
            <?php print render($content['field_contact_company_name']); ?>
            <?php print render($content['field_street_and_number']); ?>
            <?php if (!empty($content['field_postal_code']) || !empty($content['field_city'])) : ?>
              <div class="comma">,</div>
            <?php endif; ?>
            <?php print render($content['field_postal_code']); ?>
            <?php print render($content['field_city']); ?>
          </div>
        <?php endif; ?>

        <?php /* Phones and fax */ ?>
        <?php if (!empty($content['field_phone']) || !empty($content['field_fax'])) : ?>
          <div class="phones fax">
            <?php print render($content['field_phone']); ?>
            <?php print render($content['field_fax']); ?>
          </div>
        <?php endif; ?>

        <?php /* Mails */ ?>
        <?php if (!empty($content['field_mail'])) : ?>
          <div class="mails">
            <?php print render($content['field_mail']); ?>
          </div>
        <?php endif; ?>
      </div>

      <?php /* Opening hours */ ?>
      <?php if (!empty($opening_hours)) : ?>
        <div class="opening-hours">
          <h4><?php print t('Opening hours'); ?>:</h4>
          <?php foreach ($opening_hours as $key => $value) : ?>
            <div class="days">
              <?php print $key; ?>: <?php print $value; ?>
            </div>
          <?php endforeach; ?>
        </div>
      <?php endif; ?>

      <?php /* Company data */ ?>
      <?php if (!empty($content['field_nip']) || !empty($content['field_regon']) || !empty($content['field_krs'])) : ?>
        <div class="company-data">
          <h4><?php print t('Company data'); ?>:</h4>
          <?php print render($content['field_nip']); ?>
          <?php print render($content['field_regon']); ?>
          <?php print render($content['field_krs']); ?>
        </div>
      <?php endif; ?>

      <?php /* Payment data */ ?>
      <?php if (!empty($content['field_bank_account_number']) || !empty($content['field_iban']) || !empty($content['field_swift_code_bic'])) : ?>
        <div class="payment-data">
          <h4><?php print t('Payment data'); ?>:</h4>
          <?php print render($content['field_bank_account_number']); ?>
          <?php print render($content['field_iban']); ?>
          <?php print render($content['field_swift_code_bic']); ?>
        </div>
      <?php endif; ?>

      <?php /* Payment info */ ?>
      <?php if (isset($payment_info)) : ?>
        <div class="payment-info">
          <div class="payment"><?php print $payment_info; ?></div>
        </div>
      <?php endif; ?>

      <?php /* Body */ ?>
      <?php if (!empty($body)) : ?>
        <div class="body">
          <?php print $body; ?>
        </div>
      <?php endif; ?>

      <?php /* Google Map */ ?>
      <?php if (isset($map)) : ?>
        <h4><?php print t('Map'); ?>
        <div class="map" id="map-canvas"></div>
      <?php endif; ?>

      <?php /* Contact form */ ?>
      <?php if (isset($contact_form)) : ?>
        <div class="contact-form">
          <?php print drupal_render($contact_form); ?>
        </div>
      <?php endif; ?>
    </div>

    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
    ?>
  </div>
  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>
<?php 
/*
* ------------------------------------------------------------------------------------------------------
* ------------------------------------------------------------------------------------------------------ 
* Zagron (1) style
* ------------------------------------------------------------------------------------------------------
* ------------------------------------------------------------------------------------------------------
*/ 
?>
<?php elseif ($contact_style == '1') : ?>
  <?php print $user_picture; ?>
  <?php if (!$teaser) : ?>
    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
     <?php if (!empty($merged_address)) : ?>
      <div class="address-data">
        <?php print render($content['field_contact_company_name']); ?>
        <?php print $merged_address; ?>
      </div>
    <?php endif; ?>

    <div class="outer-container">
      <div class="container">
        <?php /* Phones/fax and mails and coordinates */ ?>
        <div class="row">
          <?php /* Phones and fax */ ?>
          <?php if (!empty($content['field_phone']) || !empty($content['field_fax'])) : ?>
            <div class="phones fax col-xs-12 col-md-4">
              <i class="fa fa-phone"></i>
              <div class="item">
                <h4><?php print t('Telephone / Fax'); ?></h4>
                <?php print render($content['field_phone']); ?>
                <?php print render($content['field_fax']); ?>
              </div>
            </div>
          <?php endif; ?>

          <?php /* Mails */ ?>
          <?php if (!empty($content['field_mail'])) : ?>
            <div class="mails col-xs-12 col-md-4">
              <i class="fa fa-envelope"></i>
              <div class="item">
                <h4><?php print t('E-mail'); ?></h4>
                <?php print render($content['field_mail']); ?>
              </div>
            </div>
          <?php endif; ?>

          <?php /* GPS Coordinates */ ?>
          <?php if (!empty($latitude) || !empty($longitude)) : ?>
            <div class="gps col-xs-12 col-md-4">
              <i class="fa fa-map-marker"></i>
              <div class="item">
                <h4><?php print t('GPS Coordinates'); ?></h4>
                <div class='latitude'>
                  N: <?php print $latitude; ?>
                </div>
                <div class='longitude'>
                  E: <?php print $longitude; ?>
                </div>
              </div>
            </div>
          <?php endif; ?>
        </div>
      </div>
    </div>
    <?php /* Google Map */ ?>
    <?php if (isset($map)) : ?>
      <div class="map" id="map-canvas"></div>
    <?php endif; ?>

    <div class="container">
      <?php /* Contact form */ ?>
      <?php if (isset($contact_form)) : ?>
        <div class="contact-form">
          <h3><?php print t('Contact form'); ?></h3>
          <?php print drupal_render($contact_form); ?>
        </div>
      <?php endif; ?>

      <a class="more-info" role="button" data-toggle="collapse" href="#collapseExample" aria-expanded="false" aria-controls="collapseExample">
        <span><?php print t('More info'); ?></span>
      </a>
      
      <div class="collapse in" id="collapseExample">
        <?php /* Opening hours */ ?>
        <?php if (!empty($opening_hours)) : ?>
          <div class="opening-hours">
            <h4><?php print t('Opening hours'); ?>:</h4>
            <?php foreach ($opening_hours as $key => $value) : ?>
              <div class="days">
                <?php print $key; ?>: <?php print $value; ?>
              </div>
            <?php endforeach; ?>
          </div>
        <?php endif; ?>

        <?php /* Company data */ ?>
        <?php if (!empty($content['field_nip']) || !empty($content['field_regon']) || !empty($content['field_krs'])) : ?>
          <div class="company-data">
            <h4><?php print t('Company data'); ?>:</h4>
            <?php print render($content['field_nip']); ?>
            <?php print render($content['field_regon']); ?>
            <?php print render($content['field_krs']); ?>
          </div>
        <?php endif; ?>

        <?php /* Payment data */ ?>
        <?php if (!empty($content['field_bank_account_number']) || !empty($content['field_iban']) || !empty($content['field_swift_code_bic'])) : ?>
          <div class="payment-data">
            <h4><?php print t('Payment data'); ?>:</h4>
            <?php print render($content['field_bank_account_number']); ?>
            <?php print render($content['field_iban']); ?>
            <?php print render($content['field_swift_code_bic']); ?>
          </div>
        <?php endif; ?>

        <?php /* Payment info */ ?>
        <?php if (isset($payment_info)) : ?>
          <div class="payment-info">
            <div class="payment"><?php print $payment_info; ?></div>
          </div>
        <?php endif; ?>

        <?php /* Body */ ?>
        <?php if (!empty($body)) : ?>
          <div class="body">
            <?php print $body; ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
    ?>
  </div>
  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>
<?php endif; ?>
</div>