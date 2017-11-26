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

Once the application has been compiled, you can run tests to verify everything's okay.
To run ctest type in -

```$ cmake .. && make ````

```$ ctest```

### System Introspection

Sometime you may want to verify certain things such as wheather a particular function exists on 
the target OS. for e.g ```log``` function etc... This is where introspection of cmake come in handy.

### Adding generated files and generator

```TODO Complete this section with some valid real world usecase```.




## GIT trick

To remove all files/ folder that are untracted run,

```$ git clean -x -d -f ```

To remove any dangling commits, branches etc, then run

```$ git gc --prune=now```
