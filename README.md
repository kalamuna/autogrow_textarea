# Autogrow Textarea Drupal Module

Adds [jQuery NS-Autogrow](https://github.com/ro31337/jquery.ns-autogrow) to Drupal's `textarea` Form API element.

## Installation

### Download the module

**via Composer**

1. Define the `kalamuna/autogrow_textarea` and `ro31337/jquery_ns_autogrow` repositories by editing your project's `composer.json` and adding the following items in the `repositories` section:

	```
    "autogrow_textarea": {
        "type": "vcs",
        "url": "https://github.com/kalamuna/autogrow_textarea"
    },
    "jquery_ns_autogrow": {
        "type": "package",
        "package": {
            "name": "ro31337/jquery_ns_autogrow",
            "version": "1.1.6",
            "type": "drupal-library",
            "dist": {
                "url": "https://github.com/ro31337/jquery.ns-autogrow/archive/1.1.6.zip",
                "type": "zip"
            }
        }
    }
	```

2. Run `composer require kalamuna/autogrow_textarea`

**just download**

1. Download the module code from "https://github.com/kalamuna/autogrow_textarea/archive/8.x-1.x.zip"
2. Extract in `modules/contrib/autogrow_textarea`

### Install

2. Install and enabe the "Autogrow Textarea" module (`drush en autogrow_textarea`)
3. If you did not use composer you need to [download the `jquery_ns_autogrow` library](https://github.com/ro31337/jquery.ns-autogrow/archive/1.1.6.zip) and extract it in the `libraries/jquery_ns_autogrow` directory inside your Drupal root.
