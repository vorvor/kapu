<?php

/**
 * @file
 * news_aggregator.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function news_aggregator_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_news-view:news-view.
  $menu_links['main-menu_news-view:news-view'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-view',
    'router_path' => 'news-view',
    'link_title' => 'News view',
    'options' => array(
      'identifier' => 'main-menu_news-view:news-view',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_news:news.
  $menu_links['main-menu_news:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'identifier' => 'main-menu_news:news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_selection:selection.
  $menu_links['main-menu_selection:selection'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'selection',
    'router_path' => 'selection',
    'link_title' => 'Selection',
    'options' => array(
      'identifier' => 'main-menu_selection:selection',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('News view');
  t('Selection');

  return $menu_links;
}
