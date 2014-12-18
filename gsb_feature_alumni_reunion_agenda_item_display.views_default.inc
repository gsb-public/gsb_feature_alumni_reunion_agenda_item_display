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
  $view->human_name = 'GSB Alumni Agenda List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Ref to Alumni Reunion Session */
  $handler->display->display_options['relationships']['field_reunion_session_ref_target_id']['id'] = 'field_reunion_session_ref_target_id';
  $handler->display->display_options['relationships']['field_reunion_session_ref_target_id']['table'] = 'field_data_field_reunion_session_ref';
  $handler->display->display_options['relationships']['field_reunion_session_ref_target_id']['field'] = 'field_reunion_session_ref_target_id';
  $handler->display->display_options['relationships']['field_reunion_session_ref_target_id']['ui_name'] = 'Ref to Alumni Reunion Session';
  $handler->display->display_options['relationships']['field_reunion_session_ref_target_id']['label'] = 'Content Entity Reference - Reunion Session';
  /* Relationship: Ref to Alumni Reunion Group Page */
  $handler->display->display_options['relationships']['field_reunion_group_page_ref_target_id']['id'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['relationships']['field_reunion_group_page_ref_target_id']['table'] = 'field_data_field_reunion_group_page_ref';
  $handler->display->display_options['relationships']['field_reunion_group_page_ref_target_id']['field'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['relationships']['field_reunion_group_page_ref_target_id']['ui_name'] = 'Ref to Alumni Reunion Group Page';
  $handler->display->display_options['relationships']['field_reunion_group_page_ref_target_id']['label'] = 'Content Entity Reference - Reunion Group Page';
  /* Field: Event Date: Date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Event Date: Date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'dayname_no_year',
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
  /* Field: Agenda Item - Reunion Session Ref */
  $handler->display->display_options['fields']['field_alumni_session_ref']['id'] = 'field_alumni_session_ref';
  $handler->display->display_options['fields']['field_alumni_session_ref']['table'] = 'field_data_field_alumni_session_ref';
  $handler->display->display_options['fields']['field_alumni_session_ref']['field'] = 'field_alumni_session_ref';
  $handler->display->display_options['fields']['field_alumni_session_ref']['ui_name'] = 'Agenda Item - Reunion Session Ref';
  $handler->display->display_options['fields']['field_alumni_session_ref']['label'] = '';
  $handler->display->display_options['fields']['field_alumni_session_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alumni_session_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alumni_session_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Group Page - Reunion Session Ref */
  $handler->display->display_options['fields']['field_reunion_session_ref']['id'] = 'field_reunion_session_ref';
  $handler->display->display_options['fields']['field_reunion_session_ref']['table'] = 'field_data_field_reunion_session_ref';
  $handler->display->display_options['fields']['field_reunion_session_ref']['field'] = 'field_reunion_session_ref';
  $handler->display->display_options['fields']['field_reunion_session_ref']['relationship'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['fields']['field_reunion_session_ref']['ui_name'] = 'Group Page - Reunion Session Ref';
  $handler->display->display_options['fields']['field_reunion_session_ref']['label'] = '';
  $handler->display->display_options['fields']['field_reunion_session_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reunion_session_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reunion_session_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
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
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
  /* Filter criterion: Content: Reunion Session (field_reunion_session_ref) */
  $handler->display->display_options['filters']['field_reunion_session_ref_target_id']['id'] = 'field_reunion_session_ref_target_id';
  $handler->display->display_options['filters']['field_reunion_session_ref_target_id']['table'] = 'field_data_field_reunion_session_ref';
  $handler->display->display_options['filters']['field_reunion_session_ref_target_id']['field'] = 'field_reunion_session_ref_target_id';
  $handler->display->display_options['filters']['field_reunion_session_ref_target_id']['relationship'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['filters']['field_reunion_session_ref_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_reunion_session_ref_target_id']['group'] = 1;
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_alumni_session_ref';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_reunion_session_ref';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['group'] = 2;
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_reunion_session_ref';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'field_alumni_session_ref';
  /* Filter criterion: Content: Exclusive to (field_reunion_group_page_ref) */
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id']['id'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id']['table'] = 'field_data_field_reunion_group_page_ref';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id']['field'] = 'field_reunion_group_page_ref_target_id';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_reunion_group_page_ref_target_id']['group'] = 2;

  /* Display: Reunion Schedule */
  $handler = $view->new_display('panel_pane', 'Reunion Schedule', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Reunion Schedule';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node_edit_form.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['gsb_alumni_agenda_list'] = $view;

  return $export;
}
