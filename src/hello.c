#include "hello.h"
#include "stdio.h"

int hello(void)
{
    printf("Hello, World!\n");
    return 0;
}


int hello_add(int a,int b)
{
    int c = add(a,  b);
    return c;
}