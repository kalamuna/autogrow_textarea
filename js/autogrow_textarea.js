/**
 * @file
 * Automatically adjust textarea height based on user input.
 */
(function (Drupal) {

  Drupal.behaviors.autogrow_textarea = {
    attach: function (context, settings) {
      // Iterate through every textarea on the page.
      once('autogrow-textarea', 'textarea', context).forEach(textarea => {
        // Update the height of the textarea.
        function updateTextareaHeight() {
          // Reset the size of the textarea, so that the DOM updates.
          textarea.style.height = "";

          // Adjust the size to match the scrollheight, with some padding.
          textarea.style.height = (textarea.scrollHeight + 10) + "px";
        }

        // On initialization, update the height on load.
        updateTextareaHeight();

        // When the user enters text, update the size of the textareas.
        textarea.oninput = updateTextareaHeight;

      });
    }
  };

})(Drupal);
