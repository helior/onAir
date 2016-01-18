install:
	./scripts/install.sh

clean:
	rm -rf docroot
	rm -rf onAir.tar.gz

build:
	grunt build_core

package:
	tar -czf onAir.tar.gz docroot

rebuild:
	grunt build_profile

init:
	grunt install_drupal
