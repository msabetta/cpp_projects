#include <stdio.h>

#define TRUE 1

int main()
{
    int a = 10;
    long b = 10L;
    if(a==b)
        printf("uguali");
    else
        printf("non uguali");

    if(10L == a)
        printf("10L");
    else if(10==a)
        printf("10");
    else
        printf("0");
    return 0;
}

