<div class="news">
	<div><?php print $source; ?></div>
	<div><img src=" <?php print (string)$article->enclosure['url'][0]; ?>"></div>
<?php
print '<span class="news-pubdate">' . (string)$article->pubDate . '</span>';
print '<h2 class="news-title">' . (string)$article->title . '</h2>';
print '<p class="news-description">' . (string)$article->description . '</p>';
print (string)$article->category;
?>
</div>