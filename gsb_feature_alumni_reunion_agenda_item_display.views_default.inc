<?php
/**
 * @file
 * gsb_feature_alumni_reunion_agenda_item_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_alumni_reunion_agenda_item_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gsb_alumni_agenda_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GSB Alumni Agenda Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Schedule';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Show More';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show More';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 0;
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'alumni_reunion_agenda_list';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_event_date|field_event_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'alumni_reunion_agenda_list';
  /* Field: Event Date: Date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Event Date: Date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'full_day_month_date_and_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Sort criterion: Content: Date/Time */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['ui_name'] = 'Content: Date/Time';
  /* Sort criterion: Content: Stanford Event (field_stanford_event) */
  $handler->display->display_options['sorts']['field_stanford_event_value']['id'] = 'field_stanford_event_value';
  $handler->display->display_options['sorts']['field_stanford_event_value']['table'] = 'field_data_field_stanford_event';
  $handler->display->display_options['sorts']['field_stanford_event_value']['field'] = 'field_stanford_event_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Exclusive to (field_reunion_group_page_ref) */
  $handler->display->display_options['arguments']['field_reunion_group_page_ref_target_id']['id'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['arguments']['field_reunion_group_page_ref_target_id']['table'] = 'field_data_field_reunion_group_page_ref';
  $handler->display->display_options['arguments']['field_reunion_group_page_ref_target_id']['field'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['arguments']['field_reunion_group_page_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_reunion_group_page_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_reunion_group_page_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_reunion_group_page_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_reunion_group_page_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'alumni_reunion_agenda_item' => 'alumni_reunion_agenda_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Exclusive to (field_reunion_group_page_ref) */
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id_1']['id'] = 'field_reunion_group_page_ref_target_id_1';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id_1']['table'] = 'field_data_field_reunion_group_page_ref';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id_1']['field'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id_1']['group'] = 2;
  /* Filter criterion: Content: Exclusive to (field_reunion_group_page_ref) */
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id']['id'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id']['table'] = 'field_data_field_reunion_group_page_ref';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id']['field'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id']['group'] = 2;
  /* Filter criterion: Content: Alumni Reunion Session (field_alumni_session_ref) */
  $handler->display->display_options['filters']['field_alumni_session_ref_target_id']['id'] = 'field_alumni_session_ref_target_id';
  $handler->display->display_options['filters']['field_alumni_session_ref_target_id']['table'] = 'field_data_field_alumni_session_ref';
  $handler->display->display_options['filters']['field_alumni_session_ref_target_id']['field'] = 'field_alumni_session_ref_target_id';

  /* Display: Reunion Schedule */
  $handler = $view->new_display('panel_pane', 'Reunion Schedule', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Reunion Schedule';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_reunion_group_page_ref_target_id' => array(
      'type' => 'none',
      'context' => 'entity:field_collection_item.archived',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Exclusive to (field_reunion_group_page_ref)',
    ),
    'field_reunion_session_ref_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.field-reunion-session-ref',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Reunion Session (field_reunion_session_ref)',
    ),
  );
  $export['gsb_alumni_agenda_list'] = $view;

  return $export;
}
