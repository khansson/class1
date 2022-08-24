add_executable( TheSecondExecutable main.cpp testfunction.cpp)

target_include_directories(TheSecondExecutable INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>  
$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}> )