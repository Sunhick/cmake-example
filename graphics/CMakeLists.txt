set (TARGET graphics)
project (${TARGET})

# use glob to pick up all header files
file (GLOB HEADERS *.h)
file (GLOB SOURCES *.cpp)

add_subdirectory (core)

add_library (${TARGET} ${SOURCES})
target_link_libraries (${TARGET} core)

install (TARGETS ${TARGET} DESTINATION libs)
install (FILES ${HEADERS} DESTINATION include)
