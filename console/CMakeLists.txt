# You can add all of the cmake version checks, configure flags, add project name etc
# whatever you did for the root cmake can also be done here. If you add project then
# cmake output will create named project folder that contains the build output.
# I just noticed cmake will create folder if you have more than one modules.
set (TARGET console)
project (${TARGET})

# use glob to pick up all header files
file (GLOB HEADERS *.h)

# cmake by default will create a static library. 
add_library (${TARGET} console.cpp)

# install the package. put the library in bin and header files for development.
install (TARGETS ${TARGET} DESTINATION libs)
install (FILES ${HEADERS} DESTINATION include)
