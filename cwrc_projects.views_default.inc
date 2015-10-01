<?php
/**
 * @file
 * cwrc_projects.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cwrc_projects_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'project_contact_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Contact Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Connect with Us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone_number']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_phone_number']['settings'] = array(
    'title' => '',
  );
  $handler->display->display_options['fields']['field_phone_number']['field_api_classes'] = TRUE;
  /* Field: Content: Email address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email_address']['field_api_classes'] = TRUE;
  /* Field: Content: Copyrights */
  $handler->display->display_options['fields']['field_copyrights']['id'] = 'field_copyrights';
  $handler->display->display_options['fields']['field_copyrights']['table'] = 'field_data_field_copyrights';
  $handler->display->display_options['fields']['field_copyrights']['field'] = 'field_copyrights';
  $handler->display->display_options['fields']['field_copyrights']['label'] = '';
  $handler->display->display_options['fields']['field_copyrights']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_copyrights']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_copyrights']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_copyrights']['field_api_classes'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'project' => 'project',
  );
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
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Phone number (field_phone_number) */
  $handler->display->display_options['filters']['field_phone_number_value']['id'] = 'field_phone_number_value';
  $handler->display->display_options['filters']['field_phone_number_value']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['filters']['field_phone_number_value']['field'] = 'field_phone_number_value';
  $handler->display->display_options['filters']['field_phone_number_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_phone_number_value']['group'] = 2;
  /* Filter criterion: Content: Email address (field_email_address) */
  $handler->display->display_options['filters']['field_email_address_email']['id'] = 'field_email_address_email';
  $handler->display->display_options['filters']['field_email_address_email']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['filters']['field_email_address_email']['field'] = 'field_email_address_email';
  $handler->display->display_options['filters']['field_email_address_email']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_email_address_email']['group'] = 2;
  /* Filter criterion: Content: Copyrights (field_copyrights:url) */
  $handler->display->display_options['filters']['field_copyrights_url']['id'] = 'field_copyrights_url';
  $handler->display->display_options['filters']['field_copyrights_url']['table'] = 'field_data_field_copyrights';
  $handler->display->display_options['filters']['field_copyrights_url']['field'] = 'field_copyrights_url';
  $handler->display->display_options['filters']['field_copyrights_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_copyrights_url']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['project_contact_information'] = array(
    t('Master'),
    t('Connect with Us'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['project_contact_information'] = $view;

  $view = new view();
  $view->name = 'project_featured_object';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project featured object';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project featured object';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Featured objects */
  $handler->display->display_options['fields']['field_featured_objects']['id'] = 'field_featured_objects';
  $handler->display->display_options['fields']['field_featured_objects']['table'] = 'field_data_field_featured_objects';
  $handler->display->display_options['fields']['field_featured_objects']['field'] = 'field_featured_objects';
  $handler->display->display_options['fields']['field_featured_objects']['label'] = '';
  $handler->display->display_options['fields']['field_featured_objects']['element_type'] = '0';
  $handler->display->display_options['fields']['field_featured_objects']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_objects']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_featured_objects']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_objects']['type'] = 'field_collection_view';
  $handler->display->display_options['fields']['field_featured_objects']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_featured_objects']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_featured_objects']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_featured_objects']['field_api_classes'] = TRUE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
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
    'project' => 'project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['project_featured_object'] = array(
    t('Master'),
    t('Project featured object'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['project_featured_object'] = $view;

  return $export;
}
