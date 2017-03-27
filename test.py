import spam

assert spam.system('date') == 0
assert spam.system('/bin/false') > 0
try:
    spam.system('does-not-exist')
except spam.error as e:
    assert str(e) == 'System command failed'

