<?php 
	// dpm($variables);
?>

<article class="post -<?php print $view_mode; ?>">

	<?php print render($title_prefix); ?>
	
	<?php if (!$page): ?>
    <h1<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h1>
  <?php else: ?>
  	<h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
	<?php endif; ?>
	
	<?php
		// We hide the comments and links now so that we can render them later.
		hide($content['comments']);
		hide($content['links']);
	?>
	
	<div class="content">
		<?php print render($content); ?>
	</div>
</article>