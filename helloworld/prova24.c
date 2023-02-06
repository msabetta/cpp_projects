#include <stdio.h>
void main()
{
    int a=2;
    switch (a/2*1.5)
    {
    case 1:
        printf("One...");
        break;
    case 2:
        printf("Two...");
        break;
    
    default:
        printf("Other...");
        break;
    }
}