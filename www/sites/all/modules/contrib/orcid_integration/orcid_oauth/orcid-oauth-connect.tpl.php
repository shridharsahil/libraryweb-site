<button id="connect-orcid-button" onclick="openORCID()">
  <img id="orcid-id-logo" src="http://orcid.org/sites/default/files/images/orcid_24x24.png" width='24' height='24' alt="ORCID logo"/>
  Create or connect your ORCID iD
</button>

<script type="text/javascript">
  var oauthWindow;
  jQuery('button').click(function(e) {
  	e.preventDefault();
  });
  function openORCID() {
    var oauthWindow = window.open(""+
    	"<?php print $orcid['main_url']; ?>oauth/authorize?client_id=<?php print $orcid['client_id']; ?>"+
    	"&response_type=code"+
    	"&scope=/authenticate"+
    	"&redirect_uri=<?php print $orcid['redirect_url']; ?>user/<?php print $account->uid; ?>/orcid_thankyou",
    	"_blank",
    	"toolbar=no, scrollbars=yes, width=500, height=600, top=500, left=500"
    );
  }
</script>