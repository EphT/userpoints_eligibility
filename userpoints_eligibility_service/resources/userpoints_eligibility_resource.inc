<?php

/**
 * @file
 * Provides userpoints eligibility resource for services module.
 */

/**
 * Adds a point for the current user if they are eligible.
 */
function _userpoints_eligibility_resource_add($tid = NULL) {
  if ( is_null($tid) ) {
    $tid = 0;
  }
  return userpoints_eligibility_add(array(
    'uid' => $GLOBALS['user']->uid,
    'tid' => $tid,
    'points' => 1,
  ));
}

/**
 * Determine whether the current user can access a userpoints eligibility resource.
 *
 * @param $op
 *   An operation type.
 * @param $args
 *   Resource arguments passed through from the original request.
 * @return
 *   Boolean TRUE if the current user has the requested permissions.
 */
function _userpoints_eligibility_resource_access($op = 'add', $args = array()) {
  if ( user_is_logged_in() ) {
    if ( $op == 'add' ) {
      return TRUE;
    }
  }

  return FALSE;
}