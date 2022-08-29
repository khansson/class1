#You need this line for CMake, but it only defines anything when you are installing things (not covered here (yet))
project(Class1)



#these lines set the output to build/bin /lib and /include
include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})


#CAN'T FORGET THESE LINES!!!
add_subdirectory(src)
add_subdirectory(src2)
add_subdirectory(src3)
add_subdirectory(src4)