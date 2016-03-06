<rss xmlns:itunes="http://www.itunes.com/dtds/podcast-1.0.dtd" version="2.0">

  <?php if ($podcast): ?>
  <channel>
    <language>en-us</language>

    <?php if (!empty($podcast_title)):?>
      <title><?php print $podcast_title;?></title>
    <?php endif; ?>

    <?php if (!empty($podcast_subtitle)): ?>
      <itunes:subtitle><?php print $podcast_subtitle; ?></itunes:subtitle>
    <?php endif; ?>

    <?php if (!empty($podcast_link_url)): ?>
      <link><?php print $podcast_link_url; ?></link>
    <?php endif; ?>

    <?php if (!empty($podcast_copyright)): ?>
      <copyright><?php print $podcast_copyright; ?></copyright>
    <?php endif; ?>

    <?php if (!empty($podcast_itunes_author)): ?>
      <itunes:author><?php print $podcast_itunes_author; ?></itunes:author>
    <?php endif; ?>

    <?php if (!empty($podcast_itunes_summary)): ?>
      <itunes:summary><?php print $podcast_itunes_summary; ?></itunes:summary>
      <description><?php print $podcast_itunes_summary; ?></description>
    <?php endif; ?>

    <?php if (!empty($podcast_itunes_explicit)): ?>
      <itunes:explicit><?php print $podcast_itunes_explicit; ?></itunes:explicit>
    <?php endif; ?>

    <?php if (!empty($podcast_itunes_block)): ?>
      <itunes:block><?php print $podcast_itunes_block; ?></itunes:block>
    <?php endif; ?>

    <?php if (!empty($podcast_itunes_owner)): ?>
      <itunes:owner>
        <?php if (!empty($podcast_itunes_owner_name)): ?>
          <itunes:name><?php print $podcast_itunes_owner_name; ?></itunes:name>
        <?php endif; ?>
        <?php if (!empty($podcast_itunes_owner_name)): ?>
          <itunes:email><?php print $podcast_itunes_owner_name; ?></itunes:email>
        <?php endif; ?>
      </itunes:owner>
    <?php endif; ?>

    <?php if (!empty($podcast_image)): ?>
      <itunes:image href="<?php print file_create_url($podcast_image['uri']); ?>" />
    <?php endif; ?>

    <?php if (!empty($itunes_categories)): ?>
      <?php print drupal_render($itunes_categories); ?>
    <?php endif; ?>

    <?php if (!empty($podcast_itunes_complete)): ?>
      <itunes:complete><?php print $podcast_itunes_complete; ?></itunes:complete>
    <?php endif; ?>

    <?php if (!empty($podcast_itunes_new_feed_url)): ?>
      <itunes:new-feed-url><?php print $podcast_itunes_new_feed_url; ?></itunes:new-feed-url>
    <?php endif; ?>

    <?php foreach ($episodes as $episode): ?>
      <item>
        <pubDate><?php print date('D, j M Y h:i:s e', $episode['episode']->created->value()); ?></pubDate>

        <?php if (!empty($episode['title'])): ?>
          <title><?php print $episode['title']; ?></title>
        <?php endif; ?>

        <?php if (!empty($episode['itunes_subtitle'])): ?>
          <itunes:subtitle><?php print $episode['itunes_subtitle']; ?></itunes:subtitle>
        <?php endif; ?>

        <?php if (!empty($episode['itunes_author'])): ?>
          <itunes:author><?php print $episode['itunes_author']; ?></itunes:author>
        <?php endif; ?>

        <?php if (!empty($episode['itunes_explicit'])): ?>
          <itunes:explicit><?php print $episode['itunes_explicit']; ?></itunes:explicit>
        <?php endif; ?>

        <?php if (!empty($episode['image'])): ?>
          <itunes:image href="<?php print file_create_url($episode['image']['uri']); ?>" />
        <?php endif; ?>

        <?php if (!empty($episode['itunes_summary'])): ?>
          <itunes:summary><?php print $episode['itunes_summary']; ?></itunes:summary>
          <description><?php print $episode['itunes_summary']; ?></description>
        <?php endif; ?>

        <?php if (!empty($episode['file'])): ?>
          <?php $file_url = file_create_url($episode['file']['uri']); ?>
          <enclosure url="<?php print $file_url; ?>" length="<?php print $episode['file']['filesize']; ?>" type="<?php print $episode['file']['filemime'] ?>" />
          <guid><?php print $file_url; ?></guid>
        <?php endif; ?>

        <?php if (!empty($episode['itunes_duration'])): ?>
          <itunes:duration><?php print $episode['itunes_duration']; ?></itunes:duration>
        <?php endif; ?>

        <?php if (!empty($episode['block'])): ?>
          <itunes:block><?php print $episode['block']; ?></itunes:block>
        <?php endif; ?>

        <?php if (!empty($episode['itunes_is_closed_caption'])): ?>
          <itunes:isClosedCaptioned><?php print $episode['itunes_is_closed_caption']; ?></itunes:isClosedCaptioned>
        <?php endif; ?>

        <?php if (!empty($episode['itunes_order'])): ?>
          <itunes:order><?php print $episode['itunes_order']; ?></itunes:order>
        <?php endif; ?>
      </item>
    <?php endforeach; ?>

  </channel>
  <?php endif; ?>

</rss>
