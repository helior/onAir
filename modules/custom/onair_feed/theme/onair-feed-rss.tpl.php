<?xml version="1.0" encoding="utf-8"?>
<rss xmlns:itunes="http://www.itunes.com/dtds/podcast-1.0.dtd" version="2.0">

  <?php if ($podcast): ?>
  <channel>
    <language>en-us</language><?php //@TODO Do not hard-code language-code ?>

    <?php if (!empty($podcast->title->value())):?>
      <title><?php print $podcast->title->value();?></title>
    <?php endif; ?>

    <?php if (!empty($podcast->field_itunes_sub_title->value())): ?>
      <itunes:subtitle><?php print $podcast->field_itunes_sub_title->value(); ?></itunes:subtitle>
    <?php endif; ?>

    <?php if (!empty($podcast->field_link_url->value())): ?>
      <link><?php print $podcast->field_link_url->value(); ?></link>
    <?php endif; ?>

    <?php if (!empty($podcast->field_copyright->value())): ?>
      <copyright><?php print $podcast->field_copyright->value(); ?></copyright>
    <?php endif; ?>

    <?php if (!empty($podcast->field_itunes_author->value())): ?>
      <itunes:author><?php print $podcast->field_itunes_author->value(); ?></itunes:author>
    <?php endif; ?>

    <?php if (!empty($podcast->field_itunes_summary->value())): ?>
      <itunes:summary><?php print $podcast->field_itunes_summary->value(); ?></itunes:summary>
      <description><?php print $podcast->field_itunes_summary->value(); ?></description>
    <?php endif; ?>

    <?php if (!empty($podcast->field_itunes_owner->value())): ?>
      <itunes:owner>
        <?php if (!empty($podcast->field_itunes_owner->field_itunes_owner_name->value())): ?>
          <itunes:name><?php print $podcast->field_itunes_owner->field_itunes_owner_name->value(); ?></itunes:name>
        <?php endif; ?>
        <?php if (!empty($podcast->field_itunes_owner->field_itunes_owner_email->value())): ?>
          <itunes:email><?php print $podcast->field_itunes_owner->field_itunes_owner_email->value(); ?></itunes:email>
        <?php endif; ?>
      </itunes:owner>
    <?php endif; ?>

    <?php if (!empty($podcast->field_image->value())): ?>
      <itunes:image href="<?php print file_create_url($podcast->field_image->value()['uri']); ?>" />
    <?php endif; ?>

    <?php if (!empty($itunes_categories)): ?>
      <?php print drupal_render($itunes_categories); ?>
    <?php endif; ?>

    <?php foreach ($episodes as $episode): ?>
      <item>
        <?php if (!empty($episode->title->value())): ?>
          <title><?php print $episode->title->value(); ?></title>
        <?php endif; ?>

        <?php if (!empty($episode->field_itunes_sub_title->value())): ?>
          <itunes:subtitle><?php print $episode->field_itunes_sub_title->value(); ?></itunes:subtitle>
        <?php endif; ?>

        <?php if (!empty($episode->field_itunes_author->value())): ?>
          <itunes:author><?php print $episode->field_itunes_author->value(); ?></itunes:author>
        <?php endif; ?>

        <?php if (!empty($episode->field_image->value())): ?>
          <itunes:image href="<?php print file_create_url($episode->field_image->value()['uri']); ?>" />
        <?php endif; ?>

        <?php if (!empty($episode->field_itunes_summary->value())): ?>
          <itunes:summary><?php print $episode->field_itunes_summary->value(); ?></itunes:summary>
          <description><?php print $episode->field_itunes_summary->value(); ?></description>
        <?php endif; ?>

        <?php if (!empty($episode->field_file->value())): ?>
          <?php $file_url = file_create_url($episode->field_file->value()['uri']); ?>
          <enclosure url="<?php print $file_url; ?>" length="<?php print $episode->field_file->value()['filesize']; ?>" type="<?php print $episode->field_file->value()['filemime'] ?>" />
          <guid><?php print $file_url; ?></guid>
        <?php endif; ?>

      </item>
    <?php endforeach; ?>

  </channel>
  <?php endif; ?>

</rss>
