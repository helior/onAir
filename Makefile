install:
	./scripts/install.sh

clean:
	rm -rf docroot
	rm -rf onAir.tar.gz

build:
	drush make onair-site.make docroot
	grunt copy

package:
	tar -czf onAir.tar.gz docroot

rebuild:
	grunt build_profile

init:
	grunt install_drupal
