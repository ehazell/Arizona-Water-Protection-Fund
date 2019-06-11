<div id="zone-footer" class="zone" role="contentinfo" aria-labelledby="<?php (($page['footer_first']) ? print('footer-first '):'') ?>footer-first-contact<?php (($page['footer_second']) ? print(' region-footer-second'):'') ?>">
   
<div class="col-md-6 col-xs-12">
    <div class="footer-social">
      <h2>Follow Us</h2>
      <a class="btn btn-social-icon btn-youtube" title="YouTube" href="https://www.youtube.com/channel/UCKvc5_o4nvfj-QIUQcgBEdQ" target="_blank">
      <span class="fa fa-youtube"></span>
     </a>
      <a class="btn btn-social-icon btn-twitter" title="Twitter" href="https://twitter.com/azwater" target="_blank">
      <span class="fa fa-twitter"></span>
      </a>
      <a class="btn btn-social-icon btn-facebook" title="Facebook" href="https://www.facebook.com/azwatergov/" target="_blank">
        <span class="fa fa-facebook"></span>
      </a>
      <a class="btn btn-social-icon btn-google" title="Google+" href="https://plus.google.com/u/0/113828969915636042943" target="_blank">
        <span class="fa fa-google-plus"></span>
      </a>
      <a class="btn btn-social-icon btn-linkedin" title="LinkedIn" href="https://www.linkedin.com/company/arizona-department-of-water-resources/" target="_blank"><span class="fa fa-linkedin"></span>
      <a class="btn btn-social-icon btn-wordpress" title="WordPress" href="https://azwaternews.com" target="_blank">
      <span class="fa fa-wordpress"></span>
     </a>
      <a class="btn btn-social-icon btn-briefcase" title="Careers at ADWR" href="http://www.hr.az.gov/AZStateJobs" target="_blank">
      <span class="fa fa-briefcase"></span>
      </a>
    </div> <!-- end .footer-social -->
  </div>



    <?php if ($page['footer_first']): ?>
        <div id="footer-first">
            <?php print render($page['footer_first']); ?>
        </div>
    <?php endif; ?>

      <div class="col-md-6 col-xs-12">
        <h2>Contact Info</h2>

    <?php include_once('footer-contact.inc'); ?>
    <?php endif; ?>
  
    </div>

    <?php if ($page['footer_second']) : ?>
        <div id="region-footer-second">
            <?php print render($page['footer_second']); ?>
        </div>
    <?php endif; ?>
</div>
