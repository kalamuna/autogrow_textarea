# Autogrow Textarea Drupal Module

Adds [jQuery NS-Autogrow](https://github.com/ro31337/jquery.ns-autogrow) to Drupal's `textarea` Form API element.

## Installation

### Download the module

**via Composer**

1. Add the following snippet to your `composer.json` to save the JS library into the correct folder:
    ```
    "extra": {
        "installer-types": ["component"],
        "installer-paths": {
            "web/libraries/{$name}": ["type:component"]
        }
    }
    ```
    where `web/libraries/` is the path to your libraries directory relative to your _project_ root.

1. Run `composer require kalamuna/autogrow_textarea`

**just download**

1. Download the latest release of this module's code [here](https://github.com/kalamuna/autogrow_textarea/releases/latest).
2. Extract it into `modules/contrib/autogrow_textarea`

### Install

2. Install and enabe the "Autogrow Textarea" module (`drush en autogrow_textarea`)
3. If you did not use composer you need to [download the `jquery_ns_autogrow` library](https://github.com/ro31337/jquery.ns-autogrow/releases/latest) and extract it in the `libraries/jquery_ns_autogrow` directory inside your Drupal root.
