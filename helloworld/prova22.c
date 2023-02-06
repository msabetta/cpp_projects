#include <stdio.h>
void main()
{
    short day =2;
    switch(day)
    {
        case 2: || case 22:
            printf("%d nd",day);
        break;
        default:
            printf("%d th",day);
        break;
    }
}