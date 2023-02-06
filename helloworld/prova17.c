#include <stdio.h>
char* fun1(void)
{
    char str[]="Hello";
    char *p;
    p=str;
    return p;
}

char* fun2(void)
{
    char *str="Hello";
    return str;
}
int main(){
    printf("%s,%s",fun1(),fun2());
}