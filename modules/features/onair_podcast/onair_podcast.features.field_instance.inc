<?php
/**
 * @file
 * onair_podcast.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function onair_podcast_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-podcast-field_copyright'.
  $field_instances['node-podcast-field_copyright'] = array(
    'bundle' => 'podcast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Visible under podcast details.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_copyright',
    'label' => 'Copyright',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-podcast-field_image'.
  $field_instances['node-podcast-field_image'] = array(
    'bundle' => 'podcast',
    'deleted' => 0,
    'description' => 'The <itunes:image> tag points to the artwork for your podcast, via the URL specified in the "a href" attribute.

Cover art must be in the JPEG or PNG file formats and in the RGB color space with a minimum size of 1400 x 1400 pixels and a maximum size of 3000 x 3000 pixels. Note that these requirements are different from the standard RSS image tag specification.

Potential subscribers will see your cover art in varying sizes depending on the device they’re using. Make sure your design is effective at both its original size and at thumbnail size.

If the <itunes:image> tag is not present, iTunes will use the content of the RSS image tag, but your podcast will not be considered for a potential feature placement in the Podcasts app and the iTunes Store.

We recommend including a title, brand, or source name as part of your cover art. For examples of cover art, see the Top Podcasts section in the Podcasts app or the iTunes Store.

If you update the cover art for your podcast, be sure to avoid technical issues by doing the following:

- change the cover art file name and URL at the same time

- verify the web server hosting your cover art allows HTTP head requests

The <itunes:image> tag is also supported at the "item" (episode) level.

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
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'podcast/image',
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
        'preview_image_style' => 'large',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-podcast-field_itunes_author'.
  $field_instances['node-podcast-field_itunes_author'] = array(
    'bundle' => 'podcast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The content of this tag is shown in the Artist column in iTunes. If <itunes:author> is not present at the RSS podcast feed level, iTunes will use the contents of <managingEditor>.

Visible under podcast title and in iTunes Store Browse.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-podcast-field_itunes_block'.
  $field_instances['node-podcast-field_itunes_block'] = array(
    'bundle' => 'podcast',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-podcast-field_itunes_complete'.
  $field_instances['node-podcast-field_itunes_complete'] = array(
    'bundle' => 'podcast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The <itunes:complete> tag, populated with a “yes” value, indicates that a podcast has been completed and no further episodes will be posted in the future.

If you populate this tag with any other value, it will have no effect.

This tag is only supported at a <channel> (podcast) level.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_itunes_complete',
    'label' => 'iTunes: Complete',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-podcast-field_itunes_explicit'.
  $field_instances['node-podcast-field_itunes_explicit'] = array(
    'bundle' => 'podcast',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-podcast-field_itunes_new_feed_url'.
  $field_instances['node-podcast-field_itunes_new_feed_url'] = array(
    'bundle' => 'podcast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The <itunes:new-feed-url> tag allows you to change the URL where the RSS podcast feed is located, for example:

<itunes:new-feed-url>http://newlocation.com/example.rss</itunes:new-feed-url>

After adding the tag to your old feed, you should maintain the old feed for 48 hours before retiring it.

For more information, please see the “Changing Your Feed URL” section earlier in this document.

This tag is only supported at a <channel> (podcast) level.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_itunes_new_feed_url',
    'label' => 'iTunes: New Feed URL',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-podcast-field_itunes_owner'.
  $field_instances['node-podcast-field_itunes_owner'] = array(
    'bundle' => 'podcast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The <itunes:owner> tag contains contact information for the owner of the podcast intended to be used for administrative communication about the podcast. This information is not displayed on the iTunes Store.

The email address of the owner should be included in a nested <itunes:email> element. Include the name of the owner in a nested <itunes:name> element.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'multifield',
        'settings' => array(
          'view_mode' => 'default',
        ),
        'type' => 'multifield_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_itunes_owner',
    'label' => 'iTunes: Owner',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multifield',
      'settings' => array(),
      'type' => 'multifield_default',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-podcast-field_itunes_sub_title'.
  $field_instances['node-podcast-field_itunes_sub_title'] = array(
    'bundle' => 'podcast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The contents of the <itunes:subtitle> tag are displayed in the Description column in iTunes. For best results, choose a subtitle that is only a few words long.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-podcast-field_itunes_summary'.
  $field_instances['node-podcast-field_itunes_summary'] = array(
    'bundle' => 'podcast',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-podcast-field_link_url'.
  $field_instances['node-podcast-field_link_url'] = array(
    'bundle' => 'podcast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Website link under podcast details.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link_url',
    'label' => 'Link URL',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-podcast-field_name'.
  $field_instances['node-podcast-field_name'] = array(
    'bundle' => 'podcast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'safeword',
        'settings' => array(),
        'type' => 'safeword_machine_basic',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'safeword',
      'settings' => array(),
      'type' => 'safeword_machine_name_only',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-podcast-field_ref_itunes_category'.
  $field_instances['node-podcast-field_ref_itunes_category'] = array(
    'bundle' => 'podcast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Users can browse podcast subject categories on iTunes using one of two methods:

- click Browse under Features at the bottom of the iTunes Store window to open a text-based table

- choose a category from the Podcasts pop-up menu in the navigation bar, which leads to pages that include the podcast art.

Within the older, text-based browsing system, podcast feeds may list up to three category and subcategory pairs. (For example, “Music” counts as one of the three items, as does “Business > Careers.”)

Use the <itunes:category> tag to specify the browsing category. You must also define a subcategory if one is available within your category.

Within the newer browsing system based on Category links, including the Top Podcasts and Top Episodes lists, only the first category listed in the feed will be recognized. A complete list of categories and subcategories included at the end of this document.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_ref_itunes_category',
    'label' => 'iTunes: Category',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-podcast-field_ref_keywords'.
  $field_instances['node-podcast-field_ref_keywords'] = array(
    'bundle' => 'podcast',
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
    'field_name' => 'field_ref_keywords',
    'label' => 'Keywords',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-podcast-field_ref_network'.
  $field_instances['node-podcast-field_ref_network'] = array(
    'bundle' => 'podcast',
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
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ref_network',
    'label' => 'Network',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Copyright');
  t('If the <itunes:block> tag is present and populated with the “yes” value inside a <channel> (podcast) element, it will prevent the entire podcast from appearing in the iTunes Store podcast directory.

If the <itunes:block> tag is present and populated with the “yes” value inside an <item> (episode) element, it will prevent that episode from appearing in the iTunes Store podcast directory. For example, you may want to block a specific episode if you know that its content would otherwise cause the entire podcast to be removed from the iTunes Store.

If the <itunes:block> tag is populated with any other value, it will have no effect.');
  t('Image');
  t('Keywords');
  t('Link URL');
  t('Name');
  t('Network');
  t('The <itunes:complete> tag, populated with a “yes” value, indicates that a podcast has been completed and no further episodes will be posted in the future.

If you populate this tag with any other value, it will have no effect.

This tag is only supported at a <channel> (podcast) level.
');
  t('The <itunes:explicit> tag indicates whether your podcast contains explicit material. The two usable values for this tag are “yes” and “clean”.

If you populate this tag with the “yes” value, indicating the presence of explicit content, an “explicit” parental advisory graphic will appear.

If you populate this tag with the “clean” value, indicating that none of your podcast episodes contain explicit language or adult content, a “clean” parental advisory graphic will appear.

If you populate this tag with any other value besides “yes” or “clean,” neither of the parental advisory graphics will appear and that space will remain blank.

Note that podcasts that contain explicit material are not available in some iTunes Store territories.');
  t('The <itunes:image> tag points to the artwork for your podcast, via the URL specified in the "a href" attribute.

Cover art must be in the JPEG or PNG file formats and in the RGB color space with a minimum size of 1400 x 1400 pixels and a maximum size of 3000 x 3000 pixels. Note that these requirements are different from the standard RSS image tag specification.

Potential subscribers will see your cover art in varying sizes depending on the device they’re using. Make sure your design is effective at both its original size and at thumbnail size.

If the <itunes:image> tag is not present, iTunes will use the content of the RSS image tag, but your podcast will not be considered for a potential feature placement in the Podcasts app and the iTunes Store.

We recommend including a title, brand, or source name as part of your cover art. For examples of cover art, see the Top Podcasts section in the Podcasts app or the iTunes Store.

If you update the cover art for your podcast, be sure to avoid technical issues by doing the following:

- change the cover art file name and URL at the same time

- verify the web server hosting your cover art allows HTTP head requests

The <itunes:image> tag is also supported at the "item" (episode) level.

For best results, we also recommend embedding the same cover art within the metadata for that episode’s media file prior to uploading to your host server. You may need to edit your media file via Garageband or other content-creation tool to do so.');
  t('The <itunes:new-feed-url> tag allows you to change the URL where the RSS podcast feed is located, for example:

<itunes:new-feed-url>http://newlocation.com/example.rss</itunes:new-feed-url>

After adding the tag to your old feed, you should maintain the old feed for 48 hours before retiring it.

For more information, please see the “Changing Your Feed URL” section earlier in this document.

This tag is only supported at a <channel> (podcast) level.');
  t('The <itunes:owner> tag contains contact information for the owner of the podcast intended to be used for administrative communication about the podcast. This information is not displayed on the iTunes Store.

The email address of the owner should be included in a nested <itunes:email> element. Include the name of the owner in a nested <itunes:name> element.
');
  t('The content of this tag is shown in the Artist column in iTunes. If <itunes:author> is not present at the RSS podcast feed level, iTunes will use the contents of <managingEditor>.

Visible under podcast title and in iTunes Store Browse.');
  t('The contents of the <itunes:subtitle> tag are displayed in the Description column in iTunes. For best results, choose a subtitle that is only a few words long.');
  t('The contents of the <itunes:summary> tag are shown on the iTunes Store page for your podcast. The information also appears in a separate window if the information (“i”) icon in the Description column is clicked. This field can be up to 4000 characters.

If a <itunes:summary> tag is not included, the contents of the <description> tag are used.');
  t('Users can browse podcast subject categories on iTunes using one of two methods:

- click Browse under Features at the bottom of the iTunes Store window to open a text-based table

- choose a category from the Podcasts pop-up menu in the navigation bar, which leads to pages that include the podcast art.

Within the older, text-based browsing system, podcast feeds may list up to three category and subcategory pairs. (For example, “Music” counts as one of the three items, as does “Business > Careers.”)

Use the <itunes:category> tag to specify the browsing category. You must also define a subcategory if one is available within your category.

Within the newer browsing system based on Category links, including the Top Podcasts and Top Episodes lists, only the first category listed in the feed will be recognized. A complete list of categories and subcategories included at the end of this document.');
  t('Visible under podcast details.');
  t('Website link under podcast details.');
  t('iTunes: Author');
  t('iTunes: Block');
  t('iTunes: Category');
  t('iTunes: Complete');
  t('iTunes: Explicit');
  t('iTunes: New Feed URL');
  t('iTunes: Owner');
  t('iTunes: Sub-title');
  t('iTunes: Summary');

  return $field_instances;
}
