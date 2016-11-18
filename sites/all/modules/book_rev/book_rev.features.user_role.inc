<?php
/**
 * @file
 * book_rev.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function book_rev_user_default_roles() {
  $roles = array();

  // Exported role: Reviewer.
  $roles['Reviewer'] = array(
    'name' => 'Reviewer',
    'weight' => 2,
  );

  return $roles;
}
