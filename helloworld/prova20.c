#include <stdio.h>

void main()
{
    int a=2;
    switch(a)
    {
        printf("Message\n");
        default:
            printf("Default\n");
        case 2:
            printf("Case-2\n");
        case 3:
            printf("Case-3\n");
    }
    printf("Exit from switch\n");
}