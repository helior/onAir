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
      'filefield_paths' => array(
        'active_updating' => 1,
        'file_name' => array(
          'options' => array(
            'pathauto' => FALSE,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[node:field-ref-podcast:field_name]--e[node:nid]--[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => FALSE,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'episode/media/[node:field_media_type]',
        ),
        'redirect' => FALSE,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
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
    'description' => 'The itunes:image tag points to the artwork for your podcast, via the URL specified in the "a href" attribute.

Cover art must be in the JPEG or PNG file formats and in the RGB color space with a minimum size of 1400 x 1400 pixels and a maximum size of 3000 x 3000 pixels. Note that these requirements are different from the standard RSS image tag specification.

Potential subscribers will see your cover art in varying sizes depending on the device they’re using. Make sure your design is effective at both its original size and at thumbnail size.

If the itunes:image tag is not present, iTunes will use the content of the RSS image tag, but your podcast will not be considered for a potential feature placement in the Podcasts app and the iTunes Store.

We recommend including a title, brand, or source name as part of your cover art. For examples of cover art, see the Top Podcasts section in the Podcasts app or the iTunes Store.

If you update the cover art for your podcast, be sure to avoid technical issues by doing the following:

- change the cover art file name and URL at the same time

- verify the web server hosting your cover art allows HTTP head requests

The itunes:image tag is also supported at the item (episode) level.

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
      'file_directory' => 'episode/image',
      'file_extensions' => 'png jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 1,
        'file_name' => array(
          'options' => array(
            'pathauto' => FALSE,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[node:field-ref-podcast:field_name]--e[node:nid].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => FALSE,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'episode/images',
        ),
        'redirect' => FALSE,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
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

  // Exported field_instance: 'node-episode-field_itunes_block'.
  $field_instances['node-episode-field_itunes_block'] = array(
    'bundle' => 'episode',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the <itunes:block> tag is present and populated with the “yes” value inside a <channel> (podcast) element, it will prevent the entire podcast from appearing in the iTunes Store podcast directory.

If the <itunes:block> tag is present and populated with the “yes” value inside an <item> (episode) element, it will prevent that episode from appearing in the iTunes Store podcast directory. For example, you may want to block a specific episode if you know that its content would otherwise cause the entire podcast to be removed from the iTunes Store.

If the <itunes:block> tag is populated with any other value, it will have no effect.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_itunes_block',
    'label' => 'iTunes: Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-episode-field_itunes_duration'.
  $field_instances['node-episode-field_itunes_duration'] = array(
    'bundle' => 'episode',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The content of the <itunes:duration> tag is shown in the Time column in the List View on iTunes.

The value provided for this tag can be formatted as HH:MM:SS, H:MM:SS, MM:SS, or M:SS, where H = hours, M = minutes, S = seconds. If a single number is provided as a value (no colons are used), the value is assumed to be in seconds. If one colon is present, the number to the left is assumed to be minutes, and the number to the right is assumed to be seconds. If more than two colons are present, the numbers farthest to the right are ignored.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_itunes_duration',
    'label' => 'iTunes: Duration',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-episode-field_itunes_explicit'.
  $field_instances['node-episode-field_itunes_explicit'] = array(
    'bundle' => 'episode',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The <itunes:explicit> tag indicates whether your podcast contains explicit material. The two usable values for this tag are “yes” and “clean”.

If you populate this tag with the “yes” value, indicating the presence of explicit content, an “explicit” parental advisory graphic will appear.

If you populate this tag with the “clean” value, indicating that none of your podcast episodes contain explicit language or adult content, a “clean” parental advisory graphic will appear.

If you populate this tag with any other value besides “yes” or “clean,” neither of the parental advisory graphics will appear and that space will remain blank.

Note that podcasts that contain explicit material are not available in some iTunes Store territories.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_itunes_explicit',
    'label' => 'iTunes: Explicit',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-episode-field_itunes_is_closed_caption'.
  $field_instances['node-episode-field_itunes_is_closed_caption'] = array(
    'bundle' => 'episode',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The <itunes:isClosedCaptioned> tag should be used with a “yes” value for a video podcast episode with embedded closed captioning.

A closed-caption icon will appear next to the corresponding episode.

If the closed-caption tag is present and has any other value, no closed-caption indicator will appear.

This tag is only supported at the <item> (episode) level.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_itunes_is_closed_caption',
    'label' => 'iTunes: Is Closed Caption',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
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
  t('If the <itunes:block> tag is present and populated with the “yes” value inside a <channel> (podcast) element, it will prevent the entire podcast from appearing in the iTunes Store podcast directory.

If the <itunes:block> tag is present and populated with the “yes” value inside an <item> (episode) element, it will prevent that episode from appearing in the iTunes Store podcast directory. For example, you may want to block a specific episode if you know that its content would otherwise cause the entire podcast to be removed from the iTunes Store.

If the <itunes:block> tag is populated with any other value, it will have no effect.');
  t('Image');
  t('Media Type');
  t('Podcast');
  t('Show Notes');
  t('The <itunes:explicit> tag indicates whether your podcast contains explicit material. The two usable values for this tag are “yes” and “clean”.

If you populate this tag with the “yes” value, indicating the presence of explicit content, an “explicit” parental advisory graphic will appear.

If you populate this tag with the “clean” value, indicating that none of your podcast episodes contain explicit language or adult content, a “clean” parental advisory graphic will appear.

If you populate this tag with any other value besides “yes” or “clean,” neither of the parental advisory graphics will appear and that space will remain blank.

Note that podcasts that contain explicit material are not available in some iTunes Store territories.');
  t('The <itunes:isClosedCaptioned> tag should be used with a “yes” value for a video podcast episode with embedded closed captioning.

A closed-caption icon will appear next to the corresponding episode.

If the closed-caption tag is present and has any other value, no closed-caption indicator will appear.

This tag is only supported at the <item> (episode) level.');
  t('The content of the <itunes:duration> tag is shown in the Time column in the List View on iTunes.

The value provided for this tag can be formatted as HH:MM:SS, H:MM:SS, MM:SS, or M:SS, where H = hours, M = minutes, S = seconds. If a single number is provided as a value (no colons are used), the value is assumed to be in seconds. If one colon is present, the number to the left is assumed to be minutes, and the number to the right is assumed to be seconds. If more than two colons are present, the numbers farthest to the right are ignored.');
  t('The content of this tag is shown in the Artist column in iTunes. If the <itunes:author> tag is not present, iTunes uses the contents of the <author> tag. If <itunes:author> is not present at the RSS podcast feed level, iTunes will use the contents of <managingEditor>.');
  t('The contents of the <itunes:subtitle> tag are displayed in the Description column in iTunes. For best results, choose a subtitle that is only a few words long.');
  t('The contents of the <itunes:summary> tag are shown on the iTunes Store page for your podcast. The information also appears in a separate window if the information (“i”) icon in the Description column is clicked. This field can be up to 4000 characters.

If a <itunes:summary> tag is not included, the contents of the <description> tag are used.');
  t('The itunes:image tag points to the artwork for your podcast, via the URL specified in the "a href" attribute.

Cover art must be in the JPEG or PNG file formats and in the RGB color space with a minimum size of 1400 x 1400 pixels and a maximum size of 3000 x 3000 pixels. Note that these requirements are different from the standard RSS image tag specification.

Potential subscribers will see your cover art in varying sizes depending on the device they’re using. Make sure your design is effective at both its original size and at thumbnail size.

If the itunes:image tag is not present, iTunes will use the content of the RSS image tag, but your podcast will not be considered for a potential feature placement in the Podcasts app and the iTunes Store.

We recommend including a title, brand, or source name as part of your cover art. For examples of cover art, see the Top Podcasts section in the Podcasts app or the iTunes Store.

If you update the cover art for your podcast, be sure to avoid technical issues by doing the following:

- change the cover art file name and URL at the same time

- verify the web server hosting your cover art allows HTTP head requests

The itunes:image tag is also supported at the item (episode) level.

For best results, we also recommend embedding the same cover art within the metadata for that episode’s media file prior to uploading to your host server. You may need to edit your media file via Garageband or other content-creation tool to do so.');
  t('iTunes: Author');
  t('iTunes: Block');
  t('iTunes: Duration');
  t('iTunes: Explicit');
  t('iTunes: Is Closed Caption');
  t('iTunes: Sub-title');
  t('iTunes: Summary');

  return $field_instances;
}
