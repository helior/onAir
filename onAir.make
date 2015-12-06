api = 2
core = 7.x

defaults[projects][subdir] = contrib

; Contrib Modules
projects[] = ctools
projects[] = entity
projects[] = entityreference
projects[] = field_group
projects[] = file_entity
projects[] = features
projects[] = getid3
projects[] = libraries
projects[] = navbar
projects[] = s3fs
projects[] = safeword
projects[] = strongarm
projects[] = token
projects[] = views

projects[multifield][download][branch] = 7.x-1.x
projects[multifield][download][revision] = 	1aaeaa
projects[multifield][patch][2546900] = https://www.drupal.org/files/issues/multifield-2546900-include-module-file-2.patch

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

; Library: GetID3
libraries[getid3][download][type] = git
libraries[getid3][download][url] = https://github.com/JamesHeinrich/getID3.git
libraries[getid3][download][tag] = v1.9.10
