# CMakeList.txt : CMake project for S_example, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (S_example "S_example.cpp" "S_example.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET S_example PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
