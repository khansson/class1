add_library( TheSecondLibrary testfunction.cpp)

target_include_directories(TheSecondLibrary INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>  
$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}> )