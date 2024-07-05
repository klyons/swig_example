#ifndef EXAMPLE_H
#define EXAMPLE_H
#include<vector>
#include <cstdint>



typedef float Float32;
using namespace std;

//overloading for suqare function works just fine
vector<short> square(const vector<short>& vec);
vector<Float32> square(const vector<Float32>& vec);
vector<double> square(const vector<double>& vec);

//tewmplate tests for finding sum
extern double mySumDouble(const vector<double>& vec);
extern int mySumInt(const vector<int>& vec);

//testing only
extern double mySumFloatBB(const vector<double>& vec);

//tewmplate tests for multiplying and returning vectors
extern vector<double> multiplyDouble(const vector<double>& vec, double b);
extern vector<int> multiplyInt(const vector<int>& vec, int b);

template <typename T>
vector<T> multiply(const vector<T>& a, T b) {
    vector<T> result = a;
    for (int i = 0; i < a.size(); ++i) {
        result[i] *= b;
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
#endif