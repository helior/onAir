api = 2
core = 7.x

defaults[projects][subdir] = contrib

; Contrib Modules
projects[] = ctools
projects[] = entity
projects[] = entityreference
projects[] = file_entity
projects[] = features
projects[] = libraries
projects[] = media
projects[] = navbar
projects[] = strongarm
projects[] = token
projects[] = views

; Contrib Themes
projects[] = ember

; Library: Modernizr
libraries[modernizr][download][type] = git
libraries[modernizr][download][url] = https://github.com/BrianGilbert/modernizer-navbar.git
libraries[modernizr][download][revision] = 5b89d9225320e88588f1cdc43b8b1e373fa4c60f

; Library: Backbone
libraries[backbone][download][type] = git
libraries[backbone][download][url] = https://github.com/jashkenas/backbone.git
libraries[backbone][download][tag] = 1.0.0

; Library: Underscore
libraries[underscore][download][type] = git
libraries[underscore][download][url] = https://github.com/jashkenas/underscore.git
libraries[underscore][download][tag] = 1.5.0
