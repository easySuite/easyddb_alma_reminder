<?php
/**
 * @file
 * easyddb_alma_reminder.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function easyddb_alma_reminder_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
