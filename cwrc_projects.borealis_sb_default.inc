<?php
/**
 * @file
 * cwrc_projects.borealis_sb_default.inc
 */

/**
 * Implements hook_default_semantic_wrapper().
 */
function cwrc_projects_default_semantic_wrapper() {
  $export = array();

  $semantic_wrapper = new stdClass();
  $semantic_wrapper->disabled = FALSE; /* Edit this to true to make a default semantic_wrapper disabled initially */
  $semantic_wrapper->api_version = 1;
  $semantic_wrapper->uid = 'fieldblock_874a8e164b51a4d1eddd5b90118eb12f';
  $semantic_wrapper->module = 'fieldblock';
  $semantic_wrapper->delta = '874a8e164b51a4d1eddd5b90118eb12f';
  $semantic_wrapper->semantics = 'none';
  $export['fieldblock_874a8e164b51a4d1eddd5b90118eb12f'] = $semantic_wrapper;

  $semantic_wrapper = new stdClass();
  $semantic_wrapper->disabled = FALSE; /* Edit this to true to make a default semantic_wrapper disabled initially */
  $semantic_wrapper->api_version = 1;
  $semantic_wrapper->uid = 'menu_block_7';
  $semantic_wrapper->module = 'menu_block';
  $semantic_wrapper->delta = '7';
  $semantic_wrapper->semantics = 'div';
  $export['menu_block_7'] = $semantic_wrapper;

  return $export;
}
