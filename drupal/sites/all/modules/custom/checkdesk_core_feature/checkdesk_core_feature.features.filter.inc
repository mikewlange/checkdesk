<?php
/**
 * @file
 * checkdesk_core_feature.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function checkdesk_core_feature_filter_default_formats() {
  $formats = array();

  // Exported format: Basic text used in report description and others.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Basic text used in report description and others',
    'cache' => 0,
    'status' => 1,
    'weight' => -99,
    'filters' => array(
      'filter_url' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <blockquote> <ul> <ol> <li> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_checkdesk_markup' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'filter_url' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_checkdesk_markup' => array(
        'weight' => -38,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -37,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Rich text used in story and update.
  $formats['liveblog'] = array(
    'format' => 'liveblog',
    'name' => 'Rich text used in story and update',
    'cache' => 0,
    'status' => 1,
    'weight' => -98,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <blockquote> <ul> <ol> <li> <p> <div> <iframe> <h2> <h3> <hr> <img> <figure> <script>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_checkdesk_markup' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_meedan_oembed' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => 0,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'php_code' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
