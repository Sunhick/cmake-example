# CMake tutorials

### Compiling using verbose flag in make

```$ make VERBOSE=1```
	
### Compiling debug or release flavors

```$ cmake .. -DCMAKE_BUILD_TYPE=Debug```

### Using optional libraries

You can disable compiling certain modules using CMAKE. For e.g. in the this neon project we 
disable the graphics modules as,

```$ cmake .. -DUSE_GRAPHICS=OFF```

The graphics module is included by default in the build. see option flag in 
CMakeLists.txt in project root folder.

### Installing the binaries / package.

To install the package use the CMake's variable ```CMAKE_INSTALL_PREFIX```. 

```$ cmake .. -DCMAKE_INSTALL_PREFIX=../install```
```$ make && make install```

To install release binaries,

```$ cmake .. -DCMAKE_INSTALL_PREFIX=../install -DCMAKE_BUILD_TYPE=Relase```

### Testing package using CMake
