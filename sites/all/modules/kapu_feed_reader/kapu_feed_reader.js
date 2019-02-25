(function ($) {

// Store our function as a property of Drupal.behaviors.
Drupal.behaviors.kapuFeedReader = {
  attach: function (context, settings) {
    $(document).bind('flagGlobalAfterLinkUpdate', function(event, data) {
    	id = data.contentId;
    	state = data.flagStatus;
    	flag = data.flagName;
    	isSeen = $('.flag-checked-' + id).parent().parent().hasClass('hide-flagged-row');

    	if (flag == 'checked' && state == 'flagged' && !isSeen) {
    	  $('.flag-checked-' + id).parent().parent().addClass('hide-flagged-row');
    	}

    	if (flag == 'trash' && state == 'flagged') {
    	  $('.flag-checked-' + id + ' a').trigger('click');
    	}

  
  //alert('Object #' + data.contentId + ' (of type ' + data.contentType + ') has been ' + data.flagStatus +' using flag "' + data.flagName + '"');
     });

    var colors = Array('#f4eed7', '#eef4d7', '#d5f6ff', '#ffe6d5');
    $('.view-news .views-row').each(function() {
      randomColor = colors[Math.floor(Math.random() * colors.length)];
      $(this).css('background-color', randomColor);
    })
    

  }
};

}(jQuery));