<?php
/**
 * @file
 * cwrc_projects.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cwrc_projects_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_research_space'.
  $permissions['create field_research_space'] = array(
    'name' => 'create field_research_space',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_top_level_collection'.
  $permissions['create field_top_level_collection'] = array(
    'name' => 'create field_top_level_collection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_research_space'.
  $permissions['edit field_research_space'] = array(
    'name' => 'edit field_research_space',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_top_level_collection'.
  $permissions['edit field_top_level_collection'] = array(
    'name' => 'edit field_top_level_collection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_research_space'.
  $permissions['edit own field_research_space'] = array(
    'name' => 'edit own field_research_space',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_top_level_collection'.
  $permissions['edit own field_top_level_collection'] = array(
    'name' => 'edit own field_top_level_collection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_research_space'.
  $permissions['view field_research_space'] = array(
    'name' => 'view field_research_space',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_top_level_collection'.
  $permissions['view field_top_level_collection'] = array(
    'name' => 'view field_top_level_collection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_research_space'.
  $permissions['view own field_research_space'] = array(
    'name' => 'view own field_research_space',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_top_level_collection'.
  $permissions['view own field_top_level_collection'] = array(
    'name' => 'view own field_top_level_collection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
