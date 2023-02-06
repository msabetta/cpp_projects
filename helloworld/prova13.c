#include <stdio.h>

char* strFun(void)
{
    char *str="IncludeHelp";
    return str;
}

int main()
{
    char *x;
    x=strFun();
    printf("str value = %s",x);
    return 0;
}