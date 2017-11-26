set (TARGET graphics)
project (${TARGET})

# use glob to pick up all header files
file (GLOB HEADERS *.h)
file (GLOB SOURCES *.cpp)

add_subdirectory (core)

# add_library (${TARGET} SHARED ${SOURCES})
# include_directories ("${CMAKE_SOURCE_DIR}")
add_library (${TARGET} STATIC ${SOURCES} ${HEADERS})

target_link_libraries (${TARGET} core)

install (TARGETS ${TARGET} DESTINATION libs)
install (FILES ${HEADERS} DESTINATION include)
