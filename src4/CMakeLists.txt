
add_subdirectory(library)

#First I check if the package I want is already installed
#Find package can be very simple or very complicated, it depends if the package you are looking for was also build with cmake.  If it was, you are golden (minus checking you have the right install path)
#if it wasn't built with cmake you need to write your own find_package (see the metis finder in Lemans) which is a big headache.
find_package(nlohmann_json QUIET)
if(nlohmann_json_FOUND)
  message("json is found at ${Eigen3_DIR}")
else()
#This include the cmake script to get the library
include(FetchContent)
#Here is where i download it if I need to
  FetchContent_Declare(
    json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG master
    GIT_SHALLOW TRUE
    GIT_PROGRESS TRUE)

  FetchContent_MakeAvailable(json)
endif()



add_custom_target( CopyFile ALL COMMAND ${CMAKE_COMMAND} -E copy_if_different  ${CMAKE_CURRENT_LIST_DIR}/input.json ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/input.json)


add_executable( TheFouthExecutable main.cpp )

target_link_libraries(TheFouthExecutable PUBLIC TheSecondLibrary nlohmann_json::nlohmann_json)