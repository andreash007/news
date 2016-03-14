<?php
/**
 * @file
 * news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function news_image_default_styles() {
  $styles = array();

  // Exported image style: news_block.
  $styles['news_block'] = array(
    'label' => 'News block',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 235,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_page.
  $styles['news_page'] = array(
    'label' => 'News page',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 235,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_single.
  $styles['news_single'] = array(
    'label' => 'News single',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
