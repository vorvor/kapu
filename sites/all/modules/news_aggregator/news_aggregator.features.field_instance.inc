<?php

/**
 * @file
 * news_aggregator.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function news_aggregator_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'config_pages-sources-field_rss_url'.
  $field_instances['config_pages-sources-field_rss_url'] = array(
    'bundle' => 'sources',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'config_pages',
    'field_name' => 'field_rss_url',
    'label' => 'Rss URL',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Rss URL');

  return $field_instances;
}
