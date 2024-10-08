cmake_minimum_required(VERSION 3.20)
project(y0_engine CXX)

set(CMAKE_CXX_STANDARD 20)

if(MSVC)
  # Force to always compile with W4
  if(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
    string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
  else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
  endif()
elseif(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
  # Update if necessary
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wno-long-long --pedantic-errors")
endif()

set(BIN_NAME y0_math)
set(Y0_MATH_INCLUDE_DIRECTORIES include)

target_include_directories(
  ${BIN_NAME} PUBLIC
  ${Y0_MATH_INCLUDE_DIRECTORIES})

# target_link_libraries(${BIN_NAME})

# test code
# add_subdirectory(test)
