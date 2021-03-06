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

  // Exported menu link: main-menu_content:admin/content.
  $menu_links['main-menu_content:admin/content'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_content:admin/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_import-news:news.
  $menu_links['main-menu_import-news:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'Import news',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-news:news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_manage-channels:channels-admin.
  $menu_links['main-menu_manage-channels:channels-admin'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'channels-admin',
    'router_path' => 'channels-admin',
    'link_title' => 'Manage channels',
    'options' => array(
      'identifier' => 'main-menu_manage-channels:channels-admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_new-channel:node/add/channel.
  $menu_links['main-menu_new-channel:node/add/channel'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/channel',
    'router_path' => 'node/add/channel',
    'link_title' => 'New channel',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_new-channel:node/add/channel',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_news-frontpage:news-view.
  $menu_links['main-menu_news-frontpage:news-view'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-view',
    'router_path' => 'news-view',
    'link_title' => 'News frontpage',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news-frontpage:news-view',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
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
    'weight' => -44,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Home');
  t('Import news');
  t('Manage channels');
  t('New channel');
  t('News frontpage');
  t('Selection');

  return $menu_links;
}
