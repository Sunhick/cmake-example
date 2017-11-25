cmake_minimum_required (VERSION 3.6)

project (kk)

# The version number.
set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)
set (AUTHOR "Sunil")

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
  )
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories ("${PROJECT_BINARY_DIR}" "console")

add_library (console console/console.cpp)

add_executable (kk main.cpp)
target_link_libraries (kk console)

