from setuptools import setup, Extension
import numpy

# Get the NumPy include directory.
numpy_include_dir = r"C:\Users\lyons\AppData\Local\Programs\Python\Python312\Lib\site-packages\numpy"
python_includes = r"C:\Users\lyons\AppData\Local\Programs\Python\Python312\Lib\site-packages\numpy\_core\include"

# include_dirs=[numpy_include_dir],
include_dirs=[python_includes],

example_module = Extension('_example',
                           sources=['example_wrap.cxx', 'example.cpp'],
                           include_dirs=[python_includes],
                           )

setup(name='exadmple',
      version='0.1',
      author="Kelly Lyons",
      description="""Your module description""",
      ext_modules=[example_module],
      py_modules=["example"],
      )
