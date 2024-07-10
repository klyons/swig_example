import example
import numpy as np
import pdb
import ctypes


vec = np.array([1.0, 2.0, 3.0, 4.0, 5.0], dtype=np.double)
vec2 = np.array([1, 2, 3, 4, 5])
vec2d = np.array([[1.0, 2.0, 3.0], [4.0, 5.0, 6.0]], dtype=np.double)

# Create an array of 5 integers
arr = (ctypes.c_int * 5)()

# Initialize the array
arr[:] = [1, 2, 3, 4, 5]

# Create an array of 5 short integers
arrShort = (ctypes.c_short * 5)()

# Initialize the array
arrShort[:] = [1, 2, 3, 4, 5]

try:
    resultsD = example.mySumDouble(vec)
    print(f"this is the results of the sumDouble {resultsD}")
except Exception as e:
    print("Error in mySumDouble:", e)

try:
    # Call the C++ function multiply2DDouble
    resultsD = example.multiply2DDouble(vec2d, 2.0)
    print(f"This is the result of the multiply2DDouble:\n{resultsD}")
except Exception as e:
    print("Error in multiply2DDouble:", e)

try:
    resultsI = example.findSumInt(arr)
    print(f"this is the results of the sumInt {resultsI}")
except Exception as e:
    print("Error in mySumInt:", e)

try:
    resultsShort = example.findSumInt16(arrShort)
    print(f"this is the results of the sumInt {resultsShort}")
except Exception as e:
    print("Error in mySumInt:", e)

try:
    resultsD = example.findSumDouble(vec)
    print(f"this is the results of the sumDouble {resultsD}")
except Exception as e:
    print("Error in mySumInt:", e)

try:
    testDouble = example.multiplyDouble(vec, 2.0)
    print(f"this is the results of the multiplyDouble {testDouble}")
except Exception as e:
    print("Error in multiplyDouble:", e)

try:
    print(f"and our test with BB {example.mySumFloatBB(vec)}")
except Exception as e:
    print("Error in mySumFloatBB:", e)

try:
    result = example.process_2d_arrayDouble(vec2d, vec2d.shape[0], vec2d.shape[1])
    #Print the result
    for vec in result:
        print([x for x in vec])
except Exception as e:
    print("Error in process_2d:", e)