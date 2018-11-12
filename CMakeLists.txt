cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11)


include_directories(${PROJECT_SOURCE_DIR}/src)
aux_source_directory(${PROJECT_SOURCE_DIR}/src STL)
add_library(stl ${STL})
set_target_properties(stl PROPERTIES LINKER_LANGUAGE CXX)


file(GLOB_RECURSE TEST ${PROJECT_SOURCE_DIR}/test/*.cpp)

foreach(TEST_FILE ${TEST})
    message(${TEST_FILE})
    get_filename_component(TEST_FILE_NAME ${TEST_FILE} NAME_WE)
    add_executable(${TEST_FILE_NAME} ${TEST_FILE})
    target_link_libraries(${TEST_FILE_NAME} stl)
endforeach()