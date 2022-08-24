
add_subdirectory(library)


find_package(nlohmann_json QUIET)
if(nlohmann_json_FOUND)
  message("json is found at ${Eigen3_DIR}")
else()

include(FetchContent)

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