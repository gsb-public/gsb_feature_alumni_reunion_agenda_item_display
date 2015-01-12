<?php
/**
 * @file
 * gsb_feature_alumni_reunion_agenda_item_display.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_alumni_reunion_agenda_item_display_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_full_day_month_date_and_year';
  $strongarm->value = 'l, F j, Y';
  $export['date_format_full_day_month_date_and_year'] = $strongarm;

  return $export;
}
