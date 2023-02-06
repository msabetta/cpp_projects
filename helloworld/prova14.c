#include <stdio.h>

int main()
{
    void *ptr;
    printf("%p",ptr);
    printf("\n");
    ++ptr;
    printf("%p",ptr);
    return 0;
}