<?php print render($title_prefix); ?>

<?php if ($block->subject): ?>
	<?php if (isset($subject_class)): ?>
  	<h2><?php print $block->subject ?></h2>
  <?php else: ?>
  	<h2><?php print $block->subject ?></h2>
  <?php endif; ?>
<?php endif;?>

<?php print render($title_suffix); ?>

<?php print $content ?>