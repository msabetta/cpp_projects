#include <stdio.h>
int main(){
    //char *str="includehelp";
    //printf("%s",str+7);
    // printf("\n");
    // printf("%d",printf("includehelp"));
    // printf("\n");
    // int n=0;
    // while(n<printf("MENU\n")){
    //     n++;
    // }

    // char *str="IncludeHelp";
    // printf("%c\n",*&*str);

    // int iVal;
    // char cVal;
    // void *ptr;
    // iVal=50; cVal=65;

    // ptr=&iVal;
    // printf("value =%d,size= %d\n",*(int*)ptr,sizeof(ptr));

    // ptr=&cVal;
    // printf("value =%d,size= %d\n",*(char*)ptr,sizeof(ptr));

    char *str[]={"AAAAA","BBBBB","CCCCC","DDDDD"};
    char **sptr[]={str+3,str+2,str+1,str};
    char ***pp;

    pp = sptr;
    ++pp;
    printf("%s",**++pp+2);

    return 0;
}