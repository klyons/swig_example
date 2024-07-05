import example
import numpy as np
import pdb


vec = np.array([1.0, 2.0, 3.0, 4.0, 5.0], dtype=np.double)
vec2 = np.array([1, 2, 3, 4, 5], dtype=np.int32)

try:
    resultsD = example.mySumDouble(vec)
    print(f"this is the results of the sumDouble {resultsD}")
except Exception as e:
    print("Error in mySumDouble:", e)

try:
    resultsI = example.mySumInt(vec2)
    print(f"this is the results of the sumInt {resultsI}")
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