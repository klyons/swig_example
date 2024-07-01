%module S_example
%{
#include "S_example.h";
%}

%include "std_vector.i";
using namespace std;

%template(DoubleVector) vector<double>;


%include S_example.h
