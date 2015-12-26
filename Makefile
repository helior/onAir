all: install init

install:
	- npm install
	- grunt build_core
copy:
	- grunt copy
rebuild:
	- grunt build_profile
init:
	- grunt install_drupal
