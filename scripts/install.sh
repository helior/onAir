#!/bin/bash

DRUSH_MAKE_PKG_NAME="make_local-7.x-1.1"

function install_drush() {
  if command -v drush >/dev/null 2>&1; then
    echo "Drush already installed.."
  else
    composer self-update
    composer global require drush/drush:6.*
  fi

}

function install_dependencies() {
  echo "Installing Grunt CLI.."
  npm install -g grunt-cli

  echo "Installing Node dependencies.."
  npm install

  echo "Installing Drush.."
  install_drush
}


install_dependencies
