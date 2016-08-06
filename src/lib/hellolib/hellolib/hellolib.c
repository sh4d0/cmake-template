#include <hellolib/hellolib.h>

#include <Windows.h>
#include <stdio.h>

int hellolib_sum(int value1, int value2)
{
    int result = value1 + value2;
    printf("The result is: %d\n", result);

    return result;
}
