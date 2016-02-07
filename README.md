[![Build Status](https://travis-ci.org/helior/onAir.svg?branch=master)](https://travis-ci.org/helior/onAir)

## Requirements
- Grunt CLI
- PHP 5.4
- NPM/Node.js

## Installation
Running the following will 1) install dependencies 2) build artifact 3) install Drupal
> $> make install; make build; make init

## Deployment
Via Openshift [(More info on deploying with Openshift)](https://developers.openshift.com/en/managing-deployments.html):
  - install the command-line tool
  > sudo gem install rhc

  - run setup
  > rhc setup

  - set Release Tag environment variable
  > rhc env set -a [app name] RELEASE_TAG=v1.2.3

  - invoke deployment script
  > rhc deploy -a [app name] [branch]
  (note that your code should be pushed to Openshift's remote git repository for the [branch] references to work.)

### Environment Variables
  - `RELEASE_TAG`: the current git tag name (also the Github release name) for the current deployment
  - `ONAIR_AWS_ACCESS_KEY`: your AWS access key
  - `ONAIR_AWS_SECRET_KEY`: your AWS secret key
  - `ONAIR_AWS_REGION`: the AWS region used for your S3 bucket
  - `ONAIR_AWS_S3_BUCKET`: the name of the S3 bucket

###### TODO:
- Configure essential variables on Install (S3, et al.)
- Ensure admin user is also an editor on install
- Make sure deploying the same release tag exits gracefully.
- Run post-deploy steps for Drupal
- Automate DB backup pre-deploy
