<?php
/**
 * @file
 * itunes_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function itunes_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'multifield-field_itunes_owner-field_itunes_owner_email'.
  $field_instances['multifield-field_itunes_owner-field_itunes_owner_email'] = array(
    'bundle' => 'field_itunes_owner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_itunes_owner_email',
    'label' => 'iTunes: Owner Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'multifield-field_itunes_owner-field_itunes_owner_name'.
  $field_instances['multifield-field_itunes_owner-field_itunes_owner_name'] = array(
    'bundle' => 'field_itunes_owner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'multifield',
    'field_name' => 'field_itunes_owner_name',
    'label' => 'iTunes: Owner Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('iTunes: Owner Email');
  t('iTunes: Owner Name');

  return $field_instances;
}
