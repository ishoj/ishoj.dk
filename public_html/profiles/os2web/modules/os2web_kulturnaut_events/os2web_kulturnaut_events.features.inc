<?php
/**
 * @file
 * os2web_kulturnaut_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_kulturnaut_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_kulturnaut_events_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_kulturnaut_events_node_info() {
  $items = array(
    'os2web_kulturnaut_knactivity' => array(
      'name' => t('Kultunaut begivenhed'),
      'base' => 'node_content',
      'description' => t('Præsentere importeret kulturnaut begivenheder fra Kulturnaut.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
