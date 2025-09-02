#include <stdio.h>

int add(int a,int b)
{
    return a + b;
}
int main()
{
    printf("Hello, World!\n");
    printf("The sum of 5 and 10 is: %d\n", add(5, 10));
    return 0;
}