<?php

/**
 * @file
 * Provides variable definitions for userpoints_eligibility module.
 */


/**
 * Implements hook_variable_info().
 */
function userpoints_eligibility_variable_info($options) {
  $variables['userpoints_eligibility_is_eligible_text'] = array(
    'type' => 'string',
    'title' => t('Eligible Button Text', array(), $options),
    'description' => t('Eligible Button Text', array(), $options),
    'default' => 'Collect now!',
    'required' => TRUE,
    'group' => 'userpoints_eligibility',
  );
  $variables['userpoints_eligibility_is_not_eligible_text'] = array(
    'type' => 'string',
    'title' => t('Not Eligible Button Text', array(), $options),
    'description' => t('Not Eligible Button Text', array(), $options),
    'default' => 'Back to Site',
    'required' => TRUE,
    'group' => 'userpoints_eligibility',
  );
  $variables['userpoints_eligibility_is_not_eligible_link'] = array(
    'type' => 'string',
    'title' => t('Return to Site URL', array(), $options),
    'description' => t('Link to use when user is not eligible', array(), $options),
    'default' => 'http://example.com',
    'required' => TRUE,
    'group' => 'userpoints_eligibility',
  );
  $variables['userpoints_eligibility_note_is_early'] = array(
    'type' => 'string',
    'title' => t('Note to show when eligibility is early', array(), $options),
    'description' => 'Note to show when eligibility is early',
    'default' => 'Availability starts at @start',
    'required' => TRUE,
    'group' => 'userpoints_eligibility',
  );
  $variables['userpoints_eligibility_note_is_late'] = array(
    'type' => 'string',
    'title' => t('Note to show when eligibility is late', array(), $options),
    'description' => 'Note to show when eligibility is late',
    'default' => 'Availability ended at @end',
    'required' => TRUE,
    'group' => 'userpoints_eligibility',
  );
  $variables['userpoints_eligibility_note_is_not_eligible'] = array(
    'type' => 'string',
    'title' => t('Note to show when not eligible', array(), $options),
    'description' => 'Note to show when not eligible',
    'default' => 'Next point available in @timeleft',
    'required' => TRUE,
    'group' => 'userpoints_eligibility',
  );
  $variables['userpoints_eligibility_redirect'] = array(
    'type' => 'string',
    'title' => t('Path to redirect user to after collecting a point', array(), $options),
    'description' => 'Path to redirect user to after collecting a point',
    'default' => '<front>',
    'required' => TRUE,
    'group' => 'userpoints_eligibility',
  );

  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function userpoints_eligibility_variable_group_info() {
  $groups['userpoints_eligibility'] = array(
    'title' => t('Userpoints Collect'),
    'description' => t('Userpoints Collect settings.'),
    'access' => 'administer site configuration',
    'path' => array('admin/config/people/userpoints/collect'),
  );

  return $groups;
}
