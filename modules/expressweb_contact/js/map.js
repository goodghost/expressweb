/**
 * @file
 * Add map funcionallity.
 */
(function ($) {
Drupal.behaviors.map = {
  attach: function(context) {
    
    var latitude = Drupal.settings.map.coordinates.latitude,
        longitude = Drupal.settings.map.coordinates.longitude,
        map;
        
    function initialize() {
      var myLatlng = new google.maps.LatLng(latitude, longitude);
      var mapOptions = {
        zoom: 13,
        center: myLatlng,
        scrollwheel: false
      };
      map = new google.maps.Map(document.getElementById('map-canvas'), mapOptions);
      var contentString = '';
      var infowindow = new google.maps.InfoWindow({
          content: contentString
      });

      var marker = new google.maps.Marker({
          position: myLatlng,
          map: map
      });
      google.maps.event.addListener(marker, 'click', function() {
        infowindow.open(map,marker);
      });
      
    }
    google.maps.event.addDomListener(window, 'load', initialize);
  }
};
})(jQuery);