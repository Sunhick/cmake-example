set (TARGET core)
project (${TARGET})

# use glob to pick up all header files
file (GLOB HEADERS *.h)
add_library(${TARGET} core.cpp)

install (TARGETS ${TARGET} DESTINATION libs)
install (FILES ${HEADERS} DESTINATION include)

