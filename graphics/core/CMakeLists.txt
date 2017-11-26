set (TARGET core)
project (${TARGET})

# use glob to pick up all header files
file (GLOB HEADERS *.h)
file (GLOB SOURCES *.cpp)

add_library(${TARGET} SHARED ${SOURCES})

install (TARGETS ${TARGET} DESTINATION libs)
install (FILES ${HEADERS} DESTINATION include)

