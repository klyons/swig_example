%module example

%{
    #define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
    #define SWIG_FILE_WITH_INIT
    #include <numpy/arrayobject.h>
    #include "example.h"
%}

%include "numpy.i"
%include "std_vector.i"

namespace std {
    %template(IntVector) vector<int>;
    %template(Int16Vector) vector<int16_t>;
    %template(FloatVector) vector<float>;
    %template(DoubleVector) vector<double>;
}

%include "example.h"

// Template instantiations
%template(multiplyInt) multiply<int>;
%template(multiplyFloat) multiply<float>;
%template(multiplyDouble) multiply<double>;

// Template instantiations
%template(sumInt) multiply<int>;
double mySumDouble(const std::vector<double>& vec);
//int mySumInt(const std::vector<int>& vec);
//%template(sumDouble) sum<double>;
double mySumFloatBB(const vector<double>& vec);

%init %{
    import_array();
%}
