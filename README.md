command line instructions: 

$ swig -c++ -python S_example.i

the above line will create. the .cxx wrapper file.  
make sure to include all C++ files in the setup.py including the .cxx and the .cpp
example_module = Extension('_S_example', sources=['S_example_wrap.cxx', 'S_example.cpp'])

this command should return the squared values as the c_types specified

$ result = S_example.square2([c_int(2),c_int(6)])
