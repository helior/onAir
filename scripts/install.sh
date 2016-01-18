#!/bin/bash

DRUSH_MAKE_PKG_NAME="make_local-7.x-1.1"

function install_drush() {
  if command -v drush >/dev/null 2>&1; then
    echo "Drush already installed.."
  else
    export PATH="$PATH:$HOME/.composer/vendor/bin"
    composer self-update
    composer global require drush/drush:7.*
  fi

}

# Install Drush Make Local
function install_drush_make_local() {
  if [ -e "$HOME/.drush/make_local" ]; then
    echo "Drush Make Local already installed.."
  else
    drush dl $DRUSH_MAKE_PKG_NAME --yes
  fi

}

function install_dependencies() {
  echo "Installing Grunt CLI.."
  npm install -g grunt-cli

  echo "Installing Node dependencies.."
  npm install

  echo "Installing Drush.."
  install_drush

  echo "Installing Make Local.."
  install_drush_make_local
}


install_dependencies
