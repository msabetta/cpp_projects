#include <stdio.h>
void main()
{
    int a=2;
    int b=a;
    switch (b)
    {
        case a:
            printf("Case-a\n");
        case 3:
            printf("Case-3\n");
        default:
            printf("No option\n");
    }
    printf("Exit from switch");
}