cmake_minimum_required(VERSION 3.20)
project(y0_math_test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# without this statement, cannot build
set(GOOGLETEST_VERSION 1.15.2)

add_subdirectory(lib/googletest/googletest)

# set(Y0_MATH_SOURCE_DIR ${CMAKE_SOURCE_DIR}/../src/y0_core/math)
set(Y0_MATH_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/../include)

include_directories(${Y0_MATH_INCLUDE_DIR})
message(STATUS "include: " ${Y0_MATH_INCLUDE_DIR})

add_library(math_util ../src/y0_math/math/math_util.cc)
add_executable(math_util_test ./y0_math/math/math_util_test.cc)
target_link_libraries(math_util_test math_util gtest_main)
