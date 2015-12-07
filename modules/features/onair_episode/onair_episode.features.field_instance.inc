<?php
/**
 * @file
 * onair_episode.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function onair_episode_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-episode-field_file'.
  $field_instances['node-episode-field_file'] = array(
    'bundle' => 'episode',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_file',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'episode/media',
      'file_extensions' => 'm4a mp3 mov mp4 m4v pdf epub',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-episode-field_image'.
  $field_instances['node-episode-field_image'] = array(
    'bundle' => 'episode',
    'deleted' => 0,
    'description' => 'The <itunes:image> tag points to the artwork for your podcast, via the URL specified in the <a href> attribute.

Cover art must be in the JPEG or PNG file formats and in the RGB color space with a minimum size of 1400 x 1400 pixels and a maximum size of 3000 x 3000 pixels. Note that these requirements are different from the standard RSS image tag specification.

Potential subscribers will see your cover art in varying sizes depending on the device they’re using. Make sure your design is effective at both its original size and at thumbnail size.

If the <itunes:image> tag is not present, iTunes will use the content of the RSS image tag, but your podcast will not be considered for a potential feature placement in the Podcasts app and the iTunes Store.

We recommend including a title, brand, or source name as part of your cover art. For examples of cover art, see the Top Podcasts section in the Podcasts app or the iTunes Store.

If you update the cover art for your podcast, be sure to avoid technical issues by doing the following:

- change the cover art file name and URL at the same time

- verify the web server hosting your cover art allows HTTP head requests

The <itunes:image> tag is also supported at the <item> (episode) level.

For best results, we also recommend embedding the same cover art within the metadata for that episode’s media file prior to uploading to your host server. You may need to edit your media file via Garageband or other content-creation tool to do so.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'episode',
      'file_extensions' => 'png jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '3000x3000',
      'min_resolution' => '1400x1400',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-episode-field_itunes_author'.
  $field_instances['node-episode-field_itunes_author'] = array(
    'bundle' => 'episode',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The content of this tag is shown in the Artist column in iTunes. If the <itunes:author> tag is not present, iTunes uses the contents of the <author> tag. If <itunes:author> is not present at the RSS podcast feed level, iTunes will use the contents of <managingEditor>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_itunes_author',
    'label' => 'iTunes: Author',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-episode-field_itunes_sub_title'.
  $field_instances['node-episode-field_itunes_sub_title'] = array(
    'bundle' => 'episode',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The contents of the <itunes:subtitle> tag are displayed in the Description column in iTunes. For best results, choose a subtitle that is only a few words long.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_itunes_sub_title',
    'label' => 'iTunes: Sub-title',
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

  // Exported field_instance: 'node-episode-field_itunes_summary'.
  $field_instances['node-episode-field_itunes_summary'] = array(
    'bundle' => 'episode',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The contents of the <itunes:summary> tag are shown on the iTunes Store page for your podcast. The information also appears in a separate window if the information (“i”) icon in the Description column is clicked. This field can be up to 4000 characters.

If a <itunes:summary> tag is not included, the contents of the <description> tag are used.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_itunes_summary',
    'label' => 'iTunes: Summary',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-episode-field_media_type'.
  $field_instances['node-episode-field_media_type'] = array(
    'bundle' => 'episode',
    'default_value' => array(
      0 => array(
        'value' => 'audio',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_media_type',
    'label' => 'Media Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-episode-field_ref_podcast'.
  $field_instances['node-episode-field_ref_podcast'] = array(
    'bundle' => 'episode',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_podcast',
    'label' => 'Podcast',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-episode-field_show_notes'.
  $field_instances['node-episode-field_show_notes'] = array(
    'bundle' => 'episode',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_show_notes',
    'label' => 'Show Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('File');
  t('Image');
  t('Media Type');
  t('Podcast');
  t('Show Notes');
  t('The <itunes:image> tag points to the artwork for your podcast, via the URL specified in the <a href> attribute.

Cover art must be in the JPEG or PNG file formats and in the RGB color space with a minimum size of 1400 x 1400 pixels and a maximum size of 3000 x 3000 pixels. Note that these requirements are different from the standard RSS image tag specification.

Potential subscribers will see your cover art in varying sizes depending on the device they’re using. Make sure your design is effective at both its original size and at thumbnail size.

If the <itunes:image> tag is not present, iTunes will use the content of the RSS image tag, but your podcast will not be considered for a potential feature placement in the Podcasts app and the iTunes Store.

We recommend including a title, brand, or source name as part of your cover art. For examples of cover art, see the Top Podcasts section in the Podcasts app or the iTunes Store.

If you update the cover art for your podcast, be sure to avoid technical issues by doing the following:

- change the cover art file name and URL at the same time

- verify the web server hosting your cover art allows HTTP head requests

The <itunes:image> tag is also supported at the <item> (episode) level.

For best results, we also recommend embedding the same cover art within the metadata for that episode’s media file prior to uploading to your host server. You may need to edit your media file via Garageband or other content-creation tool to do so.');
  t('The content of this tag is shown in the Artist column in iTunes. If the <itunes:author> tag is not present, iTunes uses the contents of the <author> tag. If <itunes:author> is not present at the RSS podcast feed level, iTunes will use the contents of <managingEditor>.');
  t('The contents of the <itunes:subtitle> tag are displayed in the Description column in iTunes. For best results, choose a subtitle that is only a few words long.');
  t('The contents of the <itunes:summary> tag are shown on the iTunes Store page for your podcast. The information also appears in a separate window if the information (“i”) icon in the Description column is clicked. This field can be up to 4000 characters.

If a <itunes:summary> tag is not included, the contents of the <description> tag are used.');
  t('iTunes: Author');
  t('iTunes: Sub-title');
  t('iTunes: Summary');

  return $field_instances;
}
