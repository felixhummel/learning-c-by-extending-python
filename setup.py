from distutils.core import setup, Extension

module1 = Extension('spam', sources = ['spammodule.c'])

setup(name='spam',
      version='1.0',
      ext_modules=[module1])
