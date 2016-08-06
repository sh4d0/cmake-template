cmake_minimum_required (VERSION 3.6.1)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/out)

project (HELLO)

add_subdirectory(src/helloworld)
add_subdirectory(src/lib/hellolib)
