%module example

%{
    #define SWIG_FILE_WITH_INIT
    #include "example.h"
%}

%include "numpy.i"
%include "std_vector.i"

namespace std {
    %template(IntVector) vector<int>;
    %template(Int16Vector) vector<short>;
    %template(FloatVector) vector<float>;
    %template(DoubleVector) vector<double>;
    %template(VectorOfDoubleVector) vector<vector<double>>;
    %template(VectorOfIntVector) vector<vector<int>>;
    %template(VectorOfFloatVector) vector<vector<float>>;
}

%include "example.h"

// Template instantiations
%template(multiplyInt) multiply<int>;
%template(multiplyFloat) multiply<float>;
%template(multiplyDouble) multiply<double>;

// Template instantiations
%template(mySumInt) findSum<int>;
%template(mySumInt16) findSum<short>;
%template(mySumDouble) findSum<double>;

// Template instantiations
%template(multiply2DInt) multiply2D<int>;
%template(multiply2DFloat) multiply2D<float>;
%template(multiply2DDouble) multiply2D<double>;

//test new function
%template(process_2d_arrayInt) process_2d_array<int>;
%template(process_2d_arrayDouble) process_2d_array<double>;
%template(process_2d_arrayFloat) process_2d_array<float>;

double mySumFloatBB(const std::vector<double>& vec);

// Apply the numpy.i typemaps
//%apply (double* IN_ARRAY2, int DIM1, int DIM2) {(double* arr, int dim1, int dim2)}

//extern vector<vector<double>> process_2d_arrayDouble(double* arr, int dim1, int dim2);
