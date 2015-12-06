<?xml version="1.0" encoding="utf-8"?>
<rss xmlns:itunes="http://www.itunes.com/dtds/podcast-1.0.dtd" version="2.0">

  <?php if ($podcast): ?>
  <channel>
    <language>en-us</language><?php //@TODO Do not hard-code language-code ?>
    <title><?php print $podcast->title->value();?></title>

    <?php if (!empty($podcast->field_itunes_sub_title->value())): ?>
    <itunes:subtitle><?php print $podcast->field_itunes_sub_title->value(); ?></itunes:subtitle>
    <?php endif; ?>

    <?php if (!empty($podcast->field_link_url->value())): ?>
    <link><?php print $podcast->field_link_url->value(); ?></link>
    <?php endif; ?>

    <?php if (!empty($podcast->field_copyright->value())): ?>
    <copyright><?php print htmlspecialchars($podcast->field_copyright->value(), ENT_COMPAT, 'UTF-8'); ?></copyright>
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
    </itunes:owner>
    <?php endif; ?>

    <?php if (!empty($podcast->field_image->value())): ?>
    <itunes:image href="<?php print file_create_url($podcast->field_image->value()['uri']); ?>" />
    <?php endif; ?>

  </channel>
  <?php endif; ?>

</rss>
