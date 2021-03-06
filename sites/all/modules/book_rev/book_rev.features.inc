<?php
/**
 * @file
 * book_rev.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function book_rev_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function book_rev_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function book_rev_node_info() {
  $items = array(
    'book_review' => array(
      'name' => t('Book Review'),
      'base' => 'node_content',
      'description' => t('Create a book review post here.'),
      'has_title' => '1',
      'title_label' => t('Book Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
