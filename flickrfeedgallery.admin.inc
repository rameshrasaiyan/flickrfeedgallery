<?php

/**
 * @file
 * Administrative page callbacks for the flickrfeedgallery module.
 */

/**
 * Implements hook_admin_settings() for module settings configuration.
 */
function flickrfeedgallery_admin_settings_form($form_state) {
  $form['account'] = array(
    '#type' => 'fieldset',
    '#title' => t('settings'),
  );

  $form['account']['flickrfeedgallery_id'] = array(
    '#title' => t('Your Flickr ID'),
    '#type' => 'textfield',
    '#default_value' => variable_get('flickrfeedgallery_id', '22828405@N04'),
    '#size' => 15,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#description' => t('This ID is unique and you will get it when you register an account with <a href="http://www.flickr.com" target="_blank">www.Flickr.com</a>. Your Flickr ID will look something like this 22828405@N04, if you do not find your ID, you can get it easily from <a href="http://idgettr.com/" target="_blank">http://idgettr.com</a> by giving your username.'),
  );
  return system_settings_form($form);
}
