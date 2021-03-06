<?php

/**
 * @file
 * file to integrate color module.
 */


$info = array(
  'fields' => array(
    'base' => t('Base Color'),
    'text' => t('Text Color'),
    'link' => t('Link Color'),
    'branding' => t('Branding'),
    'header' => t('Header'),
    'preface' => t('Preface'),
    'prefacetitles' => t('Preface Titles'),
    'content' => t('Content'),
    'footer' => t('Footer'),
    'footertext' => t('Footer Text'),
    'footersecond' => t('Footer Second'),
    'filebg' => t('File Button BG'),
    'menulinks' => t('Menu Links - 1st Level'),
  ),
  'schemes' => array(
    'default' => array(
      'title' => t('Bisbee (default)'),
      'colors' => array(
        'base' => '#a99071',
        'text' => '#333333',
        'link' => '#b73a10',
        'branding' => '#547d79',
        'header' => '#494949',
        'preface' => '#d9e5e8',
        'prefacetitles' => '#547d80',
        'content' => '#eae5d7',
        'footer' => '#547d78',
        'footertext' => '#ffffff',
        'footersecond' => '#8b8175',
        'filebg' => '#e8e2de',
        'menulinks' => '#000009',
      ),
    ),
    'flagstaff' => array(
      'title' => t('Flagstaff'),
      'colors' => array(
        'base' => '#e5e5e5',
        'text' => '#333333',
        'link' => '#b73a10',
        'branding' => '#3e68ac',
        'header' => '#494949',
        'preface' => '#f6e9d1',
        'prefacetitles' => '#6687bc',
        'content' => '#ffffff',
        'footer' => '#283e68',
        'footertext' => '#ffffff',
        'footersecond' => '#484848',
        'filebg' => '#f6e9d1',
        'menulinks' => '#4d0078',
      ),
    ),
    'scottsdale' => array(
      'title' => t('Scottsdale'),
      'colors' => array(
        'base' => '#fff8e4',
        'text' => '#333333',
        'link' => '#b73a10',
        'branding' => '#d73e2d',
        'header' => '#1f1b29',
        'preface' => '#f5e1d6',
        'prefacetitles' => '#fc5f32',
        'content' => '#fff3f0',
        'footer' => '#1f1b29',
        'footertext' => '#ffffff',
        'footersecond' => '#865d6b',
        'filebg' => '#f5e1d6',
        'menulinks' => '#4d0078',
      ),
    ),
    'oakcreek' => array(
      'title' => t('Oak Creek'),
      'colors' => array(
        'base' => '#fff9e5',
        'text' => '#333333',
        'link' => '#b73a10',
        'branding' => '#bd241f',
        'header' => '#494949',
        'preface' => '#c7c7bf',
        'prefacetitles' => '#c43a36',
        'content' => '#fbfbfb',
        'footer' => '#606851',
        'footertext' => '#ffffff',
        'footersecond' => '#515b68',
        'filebg' => '#e5e5e0',
        'menulinks' => '#4d0078',
      ),
    ),
    'holbrook' => array(
      'title' => t('Holbrook'),
      'colors' => array(
        'base' => '#74584d',
        'text' => '#333333',
        'link' => '#b73a10',
        'branding' => '#600504',
        'header' => '#0d0d0d',
        'preface' => '#f6e1cb',
        'prefacetitles' => '#b74427',
        'content' => '#fbeede',
        'footer' => '#5e0909',
        'footertext' => '#ffffff',
        'footersecond' => '#cc4c2b',
        'filebg' => '#f6e1cb',
        'menulinks' => '#4d0078',
      ),
    ),
    'strawberry' => array(
      'title' => t('Strawberry'),
      'colors' => array(
        'base' => '#d0beac',
        'text' => '#333333',
        'link' => '#b73a10',
        'branding' => '#3f3d5f',
        'header' => '#292b1d',
        'preface' => '#f3e5bb',
        'prefacetitles' => '#76767d',
        'content' => '#fcf8e5',
        'footer' => '#3f3c29',
        'footertext' => '#ffffff',
        'footersecond' => '#68653c',
        'filebg' => '#ece2da',
        'menulinks' => '#4d0078',
      ),
    ),
    'page' => array(
      'title' => t('Page'),
      'colors' => array(
        'base' => '#4b5467',
        'text' => '#333333',
        'link' => '#b73a10',
        'branding' => '#3f3c29',
        'header' => '#6a2818',
        'preface' => '#fcdfc5',
        'prefacetitles' => '#ad6500',
        'content' => '#fcf8e5',
        'footer' => '#381c32',
        'footertext' => '#ffffff',
        'footersecond' => '#60485b',
        'filebg' => '#ece2da',
        'menulinks' => '#4d0078',
      ),
    ),
    'winslow' => array(
      'title' => t('Winslow'),
      'colors' => array(
        'base' => '#e0dad4',
        'text' => '#333333',
        'link' => '#b73a10',
        'branding' => '#a36479',
        'header' => '#0b172b',
        'preface' => '#eae2da',
        'prefacetitles' => '#3ab3c1',
        'content' => '#eeeadf',
        'footer' => '#00828d',
        'footertext' => '#000000',
        'footersecond' => '#8b8376',
        'filebg' => '#ece2da',
        'menulinks' => '#4d0078',
      ),
    ),
    'douglas' => array(
      'title' => t('Douglas'),
      'colors' => array(
        'base' => '#e1caa0',
        'text' => '#333333',
        'link' => '#b73a10',
        'branding' => '#648000',
        'header' => '#263566',
        'preface' => '#eae3dc',
        'prefacetitles' => '#648000',
        'content' => '#fdfdfd',
        'footer' => '#263566',
        'footertext' => '#ffffff',
        'footersecond' => '#755956',
        'filebg' => '#ece2da',
        'menulinks' => '#4d0078',
      ),
    ),
    'verdevalley' => array(
      'title' => t('Verde Valley'),
      'colors' => array(
        'base' => '#e2d8d5',
        'text' => '#333333',
        'link' => '#b73a10',
        'branding' => '#4a612d',
        'header' => '#6a2717',
        'preface' => '#f6ebe8',
        'prefacetitles' => '#c45420',
        'content' => '#ffffff',
        'footer' => '#6a2717',
        'footertext' => '#ffffff',
        'footersecond' => '#d47256',
        'filebg' => '#f6ebe8',
        'menulinks' => '#4d0078',
      ),
    ),
  ),
  'css' => array(
    'css/colors.css',
  ),
  'gradients' => array(),
  'fill' => array(),
  'slices' => array(),
  'blend_target' => '#ffffff',
  'base_image' => 'color/base.png',
  'preview_css' => 'color/preview.css',
  'preview_html' => 'color/preview.html',
  'preview_js' => 'color/preview.js',
  'copy' => array(
    'logo.png'
  ),
);
