project (graphics)

add_subdirectory (core)

add_library (graphics Line.cpp)
target_link_libraries (graphics core)
