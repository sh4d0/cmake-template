add_library(hellolib
    hellolib/hellolib.c  hellolib/hellolib.h
    )

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(hellolib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

