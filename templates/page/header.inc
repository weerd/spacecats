<header class="global" role="banner">
	<div class="wrapper">
		
		<?php if ($site_name): ?>
			<?php $output = $site_name; ?>

			<?php if (!$is_front): ?>
				<?php $output = '<a href="' . $front_page . '" title="' . $site_name . '">' . $output . '</a>'; ?>
			<?php endif;?>
		<?php endif; ?>

		<h1 class="fade-in"><span class="site-title"><?php print $output; ?></span> <em class="site-tagline">from <span>space!</span></em></h1>

		<?php print render($page['header']); ?>

	</div>
</header>



