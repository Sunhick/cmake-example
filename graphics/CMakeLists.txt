set (TARGET graphics)
project (${TARGET})

# use glob to pick up all header files
file (GLOB HEADERS *.h)

add_subdirectory (core)

add_library (${TARGET} Line.cpp)
target_link_libraries (${TARGET} core)

install (TARGETS ${TARGET} DESTINATION libs)
install (FILES ${HEADERS} DESTINATION include)
