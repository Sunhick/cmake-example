# You can add all of the cmake version checks, configure flags, add project name etc
# whatever you did for the root cmake can also be done here. If you add project then
# cmake output will create named project folder that contains the build output.
project (console)

# cmake by default will create a static library. 
add_library (console console.cpp)
