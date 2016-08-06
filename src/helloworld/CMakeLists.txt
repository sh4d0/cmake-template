add_executable(helloworld
    helloworld/helloworld.c    helloworld/helloworld.h
    )

target_link_libraries(helloworld LINK_PUBLIC hellolib)
