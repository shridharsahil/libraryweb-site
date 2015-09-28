<article>You linked your ORCID to your University ID.
<p><strong>One more step</strong>: a verification email has been sent to you from orcid.org. Please <strong>follow the link</strong> within the email to verify the registered address.</p></article>
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