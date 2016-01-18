module.exports =
  profile_make:
    command: 'drush make --no-core --contrib-destination=. --yes onair.make'
    options:
      execOptions:
        cwd: 'src/onAir'
  install:
    command: 'drush si onair --account-name=admin --account-pass=admin --site-name=onAir -y'
    options:
      execOptions:
        cwd: 'docroot/sites/all'
