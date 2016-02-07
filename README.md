[![Build Status](https://travis-ci.org/helior/onAir.svg?branch=master)](https://travis-ci.org/helior/onAir)

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
- Fix PHP 5.4 errors
- Get install profile to install starter modules
- Add HAP to manifest
- Make sure deploying the same release tag exits gracefully.
- Run post-deploy steps for Drupal
- Automate DB backup pre-deploy
