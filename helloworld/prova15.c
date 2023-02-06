#include <stdio.h>
void fun(int *ptr)
{
    *ptr = 100;
}

int main()
{
    // char ch=10;
    // void *ptr=&ch;
    // printf("%d",*(char*)ptr);
    // printf("\n");
    // printf("%d,%d",*(char*)ptr,++(*(char*)ptr));
    // printf("\n");

    // int a=10, b=2;
    // int *pa=&a,*pb=&b;
    // printf("value = %d",(*pa)/(*pb));
    // printf("\n");
    int num=50;
    int *pp;
    fun(& *pp);
    printf("%d,%d",num,*pp);
    return 0;
}