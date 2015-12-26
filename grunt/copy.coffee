module.exports =
  drush:
    files: [
      expand: true
      cwd: 'src'
      src: 'drush/*'
      dest: 'docroot/sites/all/'
    ]
  settings:
    files: [
      expand: true
      cwd: 'src/'
      src: ['settings.php', 'settings/**']
      dest: 'docroot/sites/default/'
    ]
