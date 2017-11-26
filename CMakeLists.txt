cmake_minimum_required (VERSION 3.6)

project (neon)

# set (CMAKE_CXX_STANDARD 11)
file (GLOB SRCS *.cpp)
add_executable (neon ${SRCS})

# set(CMAKE_CXX_FLAGS "-Wall -std=c++0x")
add_definitions ( 
  "-std=c++11 -Wc++11-extensions -pedantic -Wall -Werror -Wimplicit -Wunused
  -Wcomment -Wchar-subscripts -Wuninitialized -Wshadow -Wcast-qual -Wcast-align
  -Wwrite-strings -Wno-deprecated-declarations -Wno-unknown-pragmas
  -Wformat-security")

# The version number.
set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)
set (AUTHOR "Sunil")

# optional modules
option (USE_GRAPHICS "Use graphics module" ON)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
  )
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories ("${PROJECT_BINARY_DIR}" "console")

add_subdirectory ("console")
add_subdirectory ("ui")

set (LIBS console ui)

if (USE_GRAPHICS)
  add_subdirectory ("graphics")
  set (LIBS ${LIBS} graphics)
endif (USE_GRAPHICS)

# Introspection: Probing host operating system for supported features / functions.
include (${CMAKE_ROOT}/Modules/CheckFunctionExists.cmake)
# include (CheckLogCheckFunctionExists)
check_function_exists (log HAS_LOG)

target_link_libraries (neon ${LIBS})

install (TARGETS neon DESTINATION bin)

# Verify application is working correctly
# by performing some test on the application.
# using ctest.
include (CTest)

add_test (neon_runs neon)

add_test (neon_greets neon)
set_tests_properties (neon_greets PROPERTIES PASS_REGULAR_EXPRESSION
  "Welcome to cmake *")

add_test(neon_graphics neon)
set_tests_properties (neon_graphics PROPERTIES PASS_REGULAR_EXPRESSION
  "Line drawn on the context")

# Build a CPack driven installer package
include (InstallRequiredSystemLibraries)
set (CPACK_RESOURCE_FILE_LICENSE  
     "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set (CPACK_PACKAGE_VERSION_MAJOR "${VERSION_MAJOR}")
set (CPACK_PACKAGE_VERSION_MINOR "${VERSION_MINOR}")
include (CPack)
