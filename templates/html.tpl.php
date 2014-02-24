<?php
	// dpm($variables);
?>

<!DOCTYPE html>
<!--[if IEMobile 7]> <html class="no-js iem7" lang="en"> <![endif]-->
<!--[if IE 8]>       <html class="no-js lt-ie9 ie8" lang="en"> <![endif]-->
<!--[if (gt IE 8)|(gt IEMobile 7)|!(IEMobile)]><!--> <html class="no-js" lang="<?php print $language->language; ?>"> <!--<![endif]-->

<head>
	<meta charset="utf-8" />
	<meta name="viewport" content="width=device-width, initial-scale=1" />
	<link rel="shortcut icon" type="image/ico" href="/<?php print $theme_path; ?>/assets/images/favicon.ico?v2" />
	
  <link href='http://fonts.googleapis.com/css?family=Coda+Caption:800' rel='stylesheet' type='text/css'>

	<title><?php print $head_title; ?></title>
	<?php print $styles; ?>
</head>


<body <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $scripts; ?>
  <?php print $page_bottom; ?>


  <!--[if lte IE 8]>
  <div class="upgrade-message">
    <div class="wrapper">
      <p>Uh-oh. Looks like your browser is out of date. Upgrading it will give you a safer, more secure browsing experience as well as allow you to fully experience this and other modern websites.</p>
      <a title="Upgrade your browser!" href="http://browsehappy.com/" target="_blank">Please upgrade your browser</a>
    </div>
  </div>
  <![endif]-->
</body>

</html>