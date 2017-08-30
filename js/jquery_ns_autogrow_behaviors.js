/**
 * @file
 * Add jQuery NS Autogrow to every textarea.
 */
(function ($, Drupal) {

  'use strict';

  Drupal.behaviors.jquery_ns_autogrow = {
    attach: function (context, settings) {
      $('textarea', context)
        .once('jquery-ns-autogrow')
        .autogrow({
          horizontal: false,
          flickering: false
        });
    }
  };

})(jQuery, Drupal);
