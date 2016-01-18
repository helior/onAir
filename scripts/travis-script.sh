#!/bin/bash

set -e

if isOnBranch "master" && ! isPullRequest && [ $GIT_HEAD_TAG -eq 0 ]; then
  echo "Auto version-bumping $TRAVIS_BRANCH...."
  git config --local user.name "Helior Colorado"
  git config --local user.email "me@helior.info"
  npm version patch -m "v%s" && git push https://${GH_TOKEN}@github.com/${TRAVIS_REPO_SLUG} HEAD:${TRAVIS_BRANCH} --tags
fi
