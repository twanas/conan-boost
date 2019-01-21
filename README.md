# conan-boost 

This sample projects demonstrates using conan to define boost dependency within a c++ project.

This repository can be used as a base project for all c++ development requiring boost and other third party libraries.

## build

```
mkdir build && cd build
conan install ..
cmake .. -G "Unix Makefiles"
cmake --build .
```