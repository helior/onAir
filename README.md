## OnAir!
A podcasting platform made with ♥.

### Helpful commands
  - `drush si onAir --account-name=admin --account-pass=admin --site-name=onAir -y`
  - `drush make --no-core --contrib-destination=. --yes onAir.make`

## TODOS:
  - support HTML/CDATA in itunes:summary / show-notes
  - fix encoding of copyright symbol
  - Do not hard-code the language in feed template
  - auto-derive itunes:duration of media file
  - Audit logs

## Installation playbook
- Configure S3FS (access-key/secret-key/bucket-name)
