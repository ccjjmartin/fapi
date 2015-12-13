<?php
/**
 * @file
 * Administration pages for the madlib module.
 */

/**
 * Page callback for madlib administration settings.
 */
function madlib_admin_settings() {
  $form = array();

  $form['madlib_checkbox'] = array(
    '#type' => 'checkbox',
    '#title' => t('Debug mode'),
    '#default_value' => variable_get('madlib_checkbox', 0),
    '#description' => t('Turn on/off debug mode'),
  );

  return system_settings_form($form);
}

/**
 * Madlib administration menu block page.
 */
function madlib_admin_menu_block_page() {
  $build = array(
    'header_text' => array(
      '#type' => 'markup',
      '#markup' => '<p>' . l(t('Madlib Settings'), 'admin/config/madlib/settings') . '</p>',
    ),
  );
  return $build;
}
