<?php
/**
 * @file
 * cwrc_projects.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cwrc_projects_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|project|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'project';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'group_join_form' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'project_featured_object' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|project|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function cwrc_projects_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'group_join_form';
  $ds_field->label = 'Group Join Form';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'project|*';
  $ds_field->properties = array(
    'block' => 'cwrc_projects|project_group_join',
    'block_render' => '1',
  );
  $export['group_join_form'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'project_featured_object';
  $ds_field->label = 'Project featured object';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'project|*';
  $ds_field->properties = array(
    'block' => 'views|project_featured_object-block',
    'block_render' => '1',
  );
  $export['project_featured_object'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cwrc_projects_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'group_join_form',
        7 => 'field_featured_links',
        8 => 'field_acknowledgements',
        9 => 'field_related_projects',
        10 => 'field_social_links',
      ),
      'header' => array(
        1 => 'field_logo',
        2 => 'field_banner_image',
      ),
      'left' => array(
        3 => 'title',
        4 => 'field_project_intro',
        5 => 'body',
        6 => 'project_featured_object',
      ),
      'footer' => array(
        11 => 'field_sponsors',
        12 => 'group_contact',
      ),
    ),
    'fields' => array(
      'group_join_form' => 'right',
      'field_logo' => 'header',
      'field_banner_image' => 'header',
      'title' => 'left',
      'field_project_intro' => 'left',
      'body' => 'left',
      'project_featured_object' => 'left',
      'field_featured_links' => 'right',
      'field_acknowledgements' => 'right',
      'field_related_projects' => 'right',
      'field_social_links' => 'right',
      'field_sponsors' => 'footer',
      'group_contact' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|project|full'] = $ds_layout;

  return $export;
}
