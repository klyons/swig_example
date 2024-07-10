#ifndef EXAMPLE_H
#define EXAMPLE_H
#include<vector>
#include <cstdint>
//#include <pybind11/pybind11.h>




typedef float Float32;
using namespace std;

//overloading for suqare function works just fine
vector<short> square(const vector<short>& vec);
vector<Float32> square(const vector<Float32>& vec);
vector<double> square(const vector<double>& vec);

//tewmplate tests for finding sum
extern short findSumInt16(const vector<short>& vec);
extern int findSumInt(const vector<int>& vec);
extern double findSumDouble(const vector<double>& vec);

//testing only
double mySumFloatBB(const vector<double>& vec);

//tewmplate tests for multiplying and returning vectors
extern vector<double> multiplyDouble(const vector<double>& vec, double b);
extern vector<int> multiplyInt(const vector<int>& vec, int b);

//templates for 2Dimensinal arrays
extern vector<vector<int>> multiply2DInt(const vector<vector<int>>& vec, int b);
extern vector<vector<float>> multiply2DFloat(const vector<vector<float>>& vec, float b);
extern vector<vector<double>> multiply2DDouble(const vector<vector<double>>& vec, double b);

//template for feeding in Numpy arrays and returning 2 dimentional vectors
extern vector<vector<int>> process_2d_arrayInt(const vector<vector<int>>& vec, int dim1, int dim2);
extern vector<vector<float>> process_2d_arrayFloat(const vector<vector<float>>& vec, int dim1, int dim2);
extern vector<vector<double>> process_2d_arrayDouble(const vector<vector<double>>& vec, int dim1, int dim2);

//template for multipling a vector and returning a value
template <typename T>
vector<T> multiply(const vector<T>& a, T b) {
    vector<T> result = a;
    for (int i = 0; i < a.size(); ++i) {
        result[i] *= b;
    }
    return result;
}

//template for multipling a vector and returning a vector multiplied by a scaler
template <typename T>
vector<vector<T>> multiply2D(const vector<vector<T>>& a, T b) {
    vector<vector<T>> result = a;
    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j < a[i].size(); ++j) {
            result[i][j] *= b;
        }
    }
    return result;
}

template <typename T>
T findSum(const vector<T>& a) {
    T sum = 0;
    for (int i = 0; i < a.size(); ++i) {
        sum += a[i];
    }
    return sum;
}

template <typename T>
vector<vector<T>> process_2d_array(const vector<vector<T>>& a, int dim1, int dim2) {
    // Create a 2D vector with the same dimensions as the numpy array
    vector<vector<T>> vec(dim1, vector<T>(dim2));

    // Copy the numpy array into the 2D vector
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j < dim2; ++j) {
            vec[i][j] = a[i][j];
        }
    }

    // Return the 2D vector
    return vec;
}
#endif