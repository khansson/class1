add_library( TheLibrary testfunction.cpp)

target_include_directories(TheLibrary INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>  
$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}> )