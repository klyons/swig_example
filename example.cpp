#include "example.h"

//template std::vector<int> multiply(std::vector<int>& a, int b);
//template std::vector<float> multiply(std::vector<float>& a, float b);
//template std::vector<double> multiply(std::vector<double>& a, double b);

// template int findSum(std::vector<int>& a);
// template double findSum(std::vector<double>& a);

// template float findSum(std::vector<float>& a);

//overloaded function for int16
vector<int16_t> square(const vector<int16_t>& vec) {
    vector<int16_t> result(vec.size());
    for (size_t i = 0; i < vec.size(); i++) {
        result[i] = vec[i] * vec[i];
    }
    return result;
}

//overloaded function for floats
vector<float> square(const vector<float>& vec) {
    vector<float> result(vec.size());
    for (size_t i = 0; i < vec.size(); i++) {
        result[i] = vec[i] * vec[i];
    }
    return result;
}

//overloaded function for doubles
vector<double> square(const vector<double>& vec) {
    vector<double> result(vec.size());
    for (size_t i = 0; i < vec.size(); i++) {
        result[i] = vec[i] * vec[i];
    }
    return result;
}

#if 1
//extra not needed??
int mySumInt(const vector<int>& vec) {
    return (findSum(vec));    
}

//extra not needed??
double mySumDouble(const vector<double>& vec) {
    return (findSum(vec));
}

//extra not needed??
vector<int> multiplyInt(const vector<int>& vec, int b) {
    return (multiply(vec, b));
}

//extra not needed??
vector<double> multiplyDouble(const vector<double>& vec, double b) {
    return (multiply(vec, b));
}
#endif 
 
double mySumFloatBB(const vector<double>& vec)
{
    return(13.4);
}
