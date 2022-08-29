
add_subdirectory(library)

add_executable( TheThirdExecutable main.cpp )


#notice that I link to a target name, not a cpp or hpp file
target_link_libraries(TheThirdExecutable PUBLIC TheLibrary)