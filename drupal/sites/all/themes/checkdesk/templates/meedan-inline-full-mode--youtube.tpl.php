<div class="media-holder media-inline-holder<?php if (isset($media_type_class)) { print ' ' . $media_type_class; } ?>">
  <div class="media-content">
    <span class="title"><?php print l($node->title, 'node/' . $node->nid , array('html' => TRUE)); ?></span>
    <?php if(isset($media_description)) : ?><span class="description expandable"><?php print $media_description; ?></span><?php endif; ?>
    <?php if(isset($author_name)) : ?><span class="author"><?php print $author_name ?></span><?php endif; ?>
    <span>
      <?php if(isset($favicon_link)) : ?><span class="provider-icon"><?php print $favicon_link ?></span><?php endif; ?> <span class="ts"><?php print $media_creation_info; ?></span>
    </span>
  </div>
  <?php if(isset($report_status['status'])) : ?>
    <div class="inline-attachment-status media-status">
      <?php print $report_status['status']; ?>
    </div>
  <?php endif; ?>
  <!-- render as full view -->
  <div class="media">
    <div class="inline-holder inline-video-holder video-holder media-16by9">
			<?php print $embed->html; ?>
		</div>
  </div>
</div> <!-- /media-holder -->