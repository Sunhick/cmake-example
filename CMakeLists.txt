cmake_minimum_required (VERSION 3.6)

project (neon)

# set (CMAKE_CXX_STANDARD 11)
file (GLOB SRCS *.cpp)
add_executable (neon ${SRCS})

# set(CMAKE_CXX_FLAGS "-Wall -std=c++0x")
add_definitions ( 
  "-std=c++1z -fno-inline -Wall -Werror -Wextra -Wfloat-equal -Wshadow
	 -Wpointer-arith -Wcast-qual -Wcast-align -Wwrite-strings
	 -Wno-conversion -Wdisabled-optimization -Wredundant-decls
	 -Wunused-value -Wno-deprecated -g -O0")

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

# include top level root directory.
# All files need to include path from root, per google style c++ guide
include_directories ("${CMAKE_SOURCE_DIR}")

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories ("${PROJECT_BINARY_DIR}" "console")

add_subdirectory ("console")
add_subdirectory ("ui")

set (Profile_DIR ${CMAKE_SOURCE_DIR}/3rd-party)
find_package(Profile REQUIRED)
if (NOT PROFILE_FOUND)
    message(FATAL_ERROR "Package profile not found")
endif (NOT PROFILE_FOUND)
# add_definitions(${PROFILE_DEFINITIONS})
include_directories(${PROFILE_INCLUDE_DIR})

message(STATUS "--->" ${PROFILE_LIBRARIES})
set (LIBS console ui ${PROFILE_LIBRARIES})

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
