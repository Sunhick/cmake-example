set (TARGET ui)

project (${TARGET})

file (GLOB HEADERS *.h)
file (GLOB SOURCES *.cpp)

add_library (${TARGET} ${SOURCES})

install (TARGETS ${TARGET} DESTINATION libs)
install (FILES ${HEADERS} DESTINATION include)
