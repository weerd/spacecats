<?php
/**
 * TEMPLATE THEME FUNCTIONS
 *
 * Functions that override Drupal's default theme functions.
 */



function spacecats_field($variables) {
  $output = '';

  // Scorching Drupal's output for the time being. Huggles!

  // Render the label, if it's not hidden.
  // if (!$variables['label_hidden']) {
  //   $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  // }

  // // Render the items.
  // $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  // foreach ($variables['items'] as $delta => $item) {
  //   $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
  //   $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  // }
  // $output .= '</div>';

  // // Render the top-level DIV.
  // $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}