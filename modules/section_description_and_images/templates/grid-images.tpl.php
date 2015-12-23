<?php foreach($images as $value) : ?>
  <div class="row">
    <?php foreach($value as $single_image) :?>
      <div class="<?php print $col_classes; ?> grid">
        <figure class="effect-ruby">
          <img src="<?php print $single_image['url']; ?>" alt="" class="img-responsive" />
          <figcaption>
            <a href="<?php print $single_image['url']; ?>" rel="lightbox[default_group]"></a>
            <?php if ($single_image['title']) : ?>
              <h2 class="title"><?php print $single_image['title']; ?></h2>
            <?php endif; ?>
          </figcaption>
        </figure>
      </div>
      <?php /* <a href="<?php print $single_image['url']; ?>" class="photoswipe" data-size="500x500">dupa</a> */ ?>
    <?php endforeach; ?>
  </div>

<?php endforeach; ?>
<?php print $extra; ?>