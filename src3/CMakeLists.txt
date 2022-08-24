
add_subdirectory(library)

add_executable( TheThirdExecutable main.cpp )

target_link_libraries(TheThirdExecutable PUBLIC TheLibrary)