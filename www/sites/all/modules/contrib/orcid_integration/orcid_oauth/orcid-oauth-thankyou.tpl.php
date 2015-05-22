<p>Thank you for connecting your ORCID account.</p>
<button id="thankyou-close">Close this window</button>
<script type="text/javascript">
	(function ($) {
    $(document).ready(function () {
			$.ajax({
				url:"/user/<?php print $account->uid; ?>/orcid_oauth",
				async:true
			});
      $('#thankyou-close').click(function () {
        window.opener.location.reload(true);
        window.close();
      });
    });
  })(jQuery);
</script>