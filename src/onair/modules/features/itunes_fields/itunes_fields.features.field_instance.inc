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

  // Exported field_instance: 'node-episode-field_itunes_order'.
  $field_instances['node-episode-field_itunes_order'] = array(
    'bundle' => 'episode',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The <itunes:order> tag can be used to override the default ordering of episodes on the iTunes Store by populating it with the number value in which you would like the episode to appear. For example, if you would like an <item> to appear as the first episode of the podcast, you would populate the <itunes:order> tag with “1.” If conflicting order values are present in multiple episodes, the store will order by <pubDate>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_itunes_order',
    'label' => 'iTunes: Order',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 15,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('The <itunes:order> tag can be used to override the default ordering of episodes on the iTunes Store by populating it with the number value in which you would like the episode to appear. For example, if you would like an <item> to appear as the first episode of the podcast, you would populate the <itunes:order> tag with “1.” If conflicting order values are present in multiple episodes, the store will order by <pubDate>.');
  t('iTunes: Order');
  t('iTunes: Owner Email');
  t('iTunes: Owner Name');

  return $field_instances;
}
