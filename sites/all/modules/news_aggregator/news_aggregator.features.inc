<?php

/**
 * @file
 * news_aggregator.features.inc
 */

/**
 * Implements hook_views_api().
 */
function news_aggregator_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function news_aggregator_flag_default_flags() {
  $flags = array();
  // Exported flag: "Boost".
  $flags['boost'] = array(
    'entity_type' => 'node',
    'title' => 'Boost',
    'global' => 1,
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Boost',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unboost',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'news_aggregator',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "checked".
  $flags['checked'] = array(
    'entity_type' => 'node',
    'title' => 'checked',
    'global' => 0,
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'not checked',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'checked',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'news_aggregator',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "trash".
  $flags['trash'] = array(
    'entity_type' => 'node',
    'title' => 'trash',
    'global' => 0,
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'trash',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'dropped to trash',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'news_aggregator',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function news_aggregator_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'channel' => array(
      'name' => t('Channel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
