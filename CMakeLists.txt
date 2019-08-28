cmake_minimum_required(VERSION 2.6)
project(resting)

# Default to a Debug build type
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

# Try to find the cmocka testing library
find_library(CMOCKA cmocka)
if(CMOCKA)
  # Tell the preprocessor that we have cmocka
  add_compile_definitions(HAVE_CMOCKA=1)
  # Tell the preprocessor whether we are debugging
  if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(UNIT_TESTING=1)
  else()
    add_compile_definitions(UNIT_TESTING=0)
  endif()

  enable_testing()
  add_subdirectory(test)
else()
  add_compile_definitions(HAVE_CMOCKA=0)
endif()

add_subdirectory(src)
 

