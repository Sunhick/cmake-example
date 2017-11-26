set (TARGET ui)

project (${TARGET})

file (GLOB HEADERS *.h)
file (GLOB SOURCES *.cpp)

add_library (${TARGET} STATIC ${SOURCES} ${HEADERS})
# add_library (${TARGET} SHARED ${SOURCES})

install (TARGETS ${TARGET} DESTINATION libs)
install (FILES ${HEADERS} DESTINATION include)
