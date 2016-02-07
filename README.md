[![Build Status](https://travis-ci.org/helior/onAir.svg?branch=master)](https://travis-ci.org/helior/onAir)

## Requirements
- Grunt CLI
- PHP 5.4
- NPM/Node.js

## Installation
Running the following will 1) install dependencies 2) build artifact; install Drupal
> #> make install; make build; make init

## Deployment
Via Openshift [(More info on deploying with Openshift)](https://developers.openshift.com/en/managing-deployments.html):
  - install the command-line tool
  > sudo gem install rhc

  - run setup
  > rhc setup

  - set Release Tag environment variable
  > rhc env set RELEASE_TAG=v1.2.3 -a [app name]

  - invoke deployment script
  > rhc deploy [branch] -a [app name]
  (note that your code should be pushed to Openshift's remote git repository for the [branch] references to work.)


###### TODO:
- Make sure deploying the same release tag exits gracefully.
- Run post-deploy steps for Drupal
- Automate DB backup pre-deploy
