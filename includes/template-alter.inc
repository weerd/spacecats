<?php
/**
 * @file
 * TEMPLATE ALTER FUNCTIONS
 */


/**
* Remove unnecessary module CSS files.
* 
* Implements hook_css_alter().
*/
function spacecats_css_alter(&$css) {
	// Make list of module CSS to remove.
	$css_to_remove = array();
	$css_to_remove[] = drupal_get_path('module', 'block').'/block.css';
	$css_to_remove[] = drupal_get_path('module', 'book').'/book.css';
	$css_to_remove[] = drupal_get_path('module', 'comment').'/comment.css';
	$css_to_remove[] = drupal_get_path('module', 'field').'/theme/field.css';
	$css_to_remove[] = drupal_get_path('module', 'node').'/node.css';
	$css_to_remove[] = drupal_get_path('module', 'search').'/search.css';
	$css_to_remove[] = drupal_get_path('module', 'system').'/system.base.css';
	$css_to_remove[] = drupal_get_path('module', 'system').'/system.css';
	$css_to_remove[] = drupal_get_path('module', 'system').'/system.maintenance.css';
	$css_to_remove[] = drupal_get_path('module', 'system').'/system.menus.css';
	$css_to_remove[] = drupal_get_path('module', 'system').'/system.messages.css';
	$css_to_remove[] = drupal_get_path('module', 'system').'/system.theme.css';
	$css_to_remove[] = drupal_get_path('module', 'user').'/user.css';

	// Remove the specified modules in the list from the CSS array.
	foreach ($css_to_remove as $index => $css_file) {
		unset($css[$css_file]);
	}

	// dpm($css);
}



// /**
// * Form modifications.
// * 
// * Implements hook_form_alter().
// */
// function rsns_form_alter(&$form, &$form_state, $form_id) {
// 	// dpm($form_id);
// 	// dpm($form);
// }



// /**
// * Search Block form modifications.
// * 
// * Implements hook_form_FORM_ID_alter().
// */
// function rsns_form_search_block_form_alter(&$form, &$form_state) {
// 	$form['search_block_form'] = array_diff_key($form['search_block_form'], array('#title_display'=>''));

// 	// dpm($form);
// }



// /**
// * User Login form modifications.
// * 
// * Implements hook_form_FORM_ID_alter().
// */
// function rsns_form_user_login_alter(&$form, &$form_state) {
// 	$form['name'] = array_diff_key($form['name'], array('#description'=>''));
// 	$form['pass'] = array_diff_key($form['pass'], array('#description'=>''));
// 	$form['forgot']['#suffix'] = '<a href="/user/password" class="forgot-password">I forgot my username!</a>';
// }



// /**
// * User Profile form modifications.
// * 
// * Implements hook_form_FORM_ID_alter().
// */
// function rsns_form_user_profile_form_alter(&$form, &$form_state) {
// 	$form['field_user_contact_phone_number']['und']['add_more']['#value'] = '+ Add another number';
// 	// dpm($form);
// }



// /**
// * Member 2 Member form modifications.
// * 
// * Implements hook_form_FORM_ID_alter().
// */
// function rsns_form_webform_client_form_28_alter(&$form, &$form_state) {
// 	$form['actions']['submit']['#value'] = 'Request Access';

// 	// dpm($form);
// }

