<?php
/**
 * @file
 * TEMPLATE PREPROCESS FUNCTIONS
 *
 * This file collects all the template preprocess functions for the theme.
 */

function spacecats_preprocess(&$variables, $hook) {
  //$variables['sample_variable'] = t('Lorem ipsum.'); // EXAMPLE

  $variables['theme_path'] = drupal_get_path('theme', $GLOBALS['theme']);
  $variables['logo'] = '/' . $variables['theme_path'] . '/assets/images/logo.png';
}


