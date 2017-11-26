# the name of the target operating system
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR ARM)

include(CMakeForceCompiler)
cmake_force_c_compiler(arm-none-eabi-gcc GNU)
cmake_force_cxx_compiler(arm-none-eabi-g++ GNU)

# set(CMAKE_EXE_LINKER_FLAGS_INIT "--specs=nosys.specs")

set (CMAKE_EXE_LINKER_FLAGS "--specs=nosys.specs -mthumb -mcpu=cortex-m3")

# set(CMAKE_EXE_LINKER_FLAGS
#   "-Wl,-gc-sections --specs=nosys.specs -nostdlib -static  -nostartfiles")

# which compilers to use for C and C++
SET(CMAKE_C_COMPILER
  /Users/Sunny/Downloads/gcc-arm-none-eabi-6-2017-q2-update/bin/arm-none-eabi-gcc)

SET(CMAKE_CXX_COMPILER
  /Users/Sunny/Downloads/gcc-arm-none-eabi-6-2017-q2-update/bin/arm-none-eabi-g++)

# set(CMAKE_EXE_LINKER_FLAGS "--specs=nosys.specs" CACHE INTERNAL "")
# set(CMAKE_CXX_FLAGS_INIT "-mthumb -mcpu=cortex-m3")

# SET(CMAKE_RC_COMPILER i586-mingw32msvc-windres)

# here is the target environment located
SET(CMAKE_FIND_ROOT_PATH /Users/Sunny/Downloads/gcc-arm-none-eabi-6-2017-q2-update/
  /Users/Sunny/prv/tmp/kk/dump)

# adjust the default behaviour of the FIND_XXX() commands:
# search headers and libraries in the target environment, search 
# programs in the host environment
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)

set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)


SET(SYSTEM_USR_DIR /Users/Sunny/Downloads/gcc-arm-none-eabi-6-2017-q2-update/)
