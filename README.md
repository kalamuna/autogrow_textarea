# Autogrow Textarea Drupal Module

Adds [jQuery NS Autogrow](https://github.com/ro31337/jquery.ns-autogrow) to the Drupal's `textarea` Form API element.

## Usage

1. Add the `jquery_ns_autogrow` in `composer.json` repositories
Edit `composer.json` and add the following repository definition so that the `jquery_ns_autogrow`
library will be found and downloaded automatically.
```
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

2. Install and enable the jQuery NS Autogrow module

3. See that any textarea will add the jQuery NS Autogrow module
