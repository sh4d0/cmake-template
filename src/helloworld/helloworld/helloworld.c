#include "helloworld.h"

#include <windows.h>
#include <stdio.h>

#include <hellolib\hellolib.h>

int main(int argc, char* argv[])
{
    int result = 0;
    printf("Hello World!\n");

    result = hellolib_sum(5, 6);
    if (result == 11)
    {
        printf("hellolib_sum() SUCCESS\n");
    }
    else
    {
        printf("hellolib_sum() FAIL\n");
    }

    return EXIT_SUCCESS;
}
