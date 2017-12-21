MESSAGE(STATUS "finding profile package")

include(FindPackageHandleStandardArgs)

# set(PROFILE_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/3rd-party/include/)
# set(PROFILE_LIBRARY ${CMAKE_SOURCE_DIR}/3rd-party/libs/libprofile_impl.a)

find_path(PROFILE_INCLUDE_DIR 
    NAMES profile.h
    PATHS ${CMAKE_SOURCE_DIR}/3rd-party/include/ NO_DEFAULT_PATH)

find_library(PROFILE_LIBRARY 
    NAMES "libprofile_impl.a"
    PATHS ${CMAKE_SOURCE_DIR}/3rd-party/libs/ NO_DEFAULT_PATH)

MESSAGE(STATUS "includes:" ${PROFILE_INCLUDE_DIR})
MESSAGE(STATUS "libs:" ${PROFILE_LIBRARY})

find_package_handle_standard_args(PROFILE
  DEFAULT_MSG
  PROFILE_INCLUDE_DIR
  PROFILE_LIBRARY
)

mark_as_advanced(PROFILE_LIBRARY PROFILE_INCLUDE_DIR)

if(PROFILE_FOUND)
  set(PROFILE_LIBRARIES    ${PROFILE_LIBRARY})
  set(PROFILE_INCLUDE_DIR ${PROFILE_INCLUDE_DIR})
endif()