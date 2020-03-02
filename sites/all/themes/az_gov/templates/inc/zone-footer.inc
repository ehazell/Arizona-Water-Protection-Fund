<div id="zone-footer" class="zone" role="contentinfo" aria-labelledby="<?php (($page['footer_first']) ? print('footer-first '):'') ?>footer-first-contact<?php (($page['footer_second']) ? print(' region-footer-second'):'') ?>">
    <?php if ($page['footer_first']): ?>
        <div id="footer-first">
            <?php print render($page['footer_first']); ?>
        </div>
    <?php endif; ?>

    <div class="col-sm-8 col-xs-12">
    <?php include_once('footer-contact.inc'); ?>
  </div>

  <div class="col-sm-4 col-xs-12 subscription">
    <h2>E-mail Subscription</h2>
    <p>Sign up to get updates about the Arizona Water Protection Fund! </p>
    <form accept-charset="UTF-8" action="/footer-sign" class="webform-client-form webform-client-form-47" id="webform-client-form-47" method="post">
      <div id="SignUp" class="form-group">
        <div class="form-item webform-component webform-component-email webform-component--email form-group form-item form-item-submitted-email form-type-webform-email form-group error-processed">
          <input class="email form-control form-text form-email required" id="edit-submitted-email" title="Enter your email to subscribe for updates" placeholder="Email for updates" name="submitted[email]" required="required" size="60" type="email">
          <!-- <input class="webform-submit button-primary btn btn-primary form-submit" name="op" type="submit" value="Sign up"> -->
          <div class="form-actions">
            <button class="webform-submit button-primary btn btn-primary form-submit" name="op" type="submit" value="Submit">Sign-Up</button>
          </div>
        </div>
        <input type="hidden" name="details[sid]">
        <input type="hidden" name="details[page_num]" value="1">
        <input type="hidden" name="details[page_count]" value="1">
        <input type="hidden" name="details[finished]" value="0">
        <input type="hidden" name="form_build_id" value="form-2drtcXYfKMPNWXziLIxYQOwhWj2aG5xAxysKlySl2zA">
        <input type="hidden" name="form_token" value="2ffRC1R6VQUzhBTzvUIlF00jNQ7pGHrz97SlC8IsR7M">
        <input type="hidden" name="form_id" value="webform_client_form_47">
        </div>
      </form>
  </div>

    <?php if ($page['footer_second']) : ?>
        <div id="region-footer-second">
            <?php print render($page['footer_second']); ?>
        </div>
    <?php endif; ?>
    <div class="col-sm-12 policy-sitemap">
      <div class="footer-links">&copy; 1994 - <?php echo date("Y"); ?> Arizona Water Protection Fund - <a href="http://az.gov/policies">Statements & Policies</a> | <a href="/sitemap.xml">Site Map</a></div>
    </div>
</div>
