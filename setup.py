from distutils.core import setup, Extension

example_module = Extension('_S_example', sources=['S_example_wrap.cxx', 'S_example.cpp'])


setup (name='S_example',
       version = '0.1',
       author = "SWIG Docs",
       description = """simple example from docs""",
       ext_modules = [example_module],
       py_modules = ["S_example"],
)
