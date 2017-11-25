set (TARGET ui)

project (${TARGET})

file (GLOB HEADERS *.h)
add_library (${TARGET} gui.cpp)

install (TARGETS ${TARGET} DESTINATION libs)
install (FILES ${HEADERS} DESTINATION include)
