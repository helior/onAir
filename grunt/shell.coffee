module.exports =
  dist_make:
    command: [
      'rm -rf docroot'
      'drush make onair-site.make docroot'
    ].join('&&')
  profile_make:
    command: 'drush make --no-core --contrib-destination=. --yes onair.make'
    options:
      execOptions:
        cwd: 'src/epistemo'
  install:
    command: 'drush si onair --account-name=admin --account-pass=admin --site-name=onAir -y'
    options:
      execOptions:
        cwd: 'docroot/sites/all'
