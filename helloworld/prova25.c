#include <stdio.h>
int main()
{
    int i;
    for(i=0; i<5; i++)
    {
        //printf("%d\n",i*i);
        if(i*i > 30)
           goto lbl;
        else
           printf("%d",i);
    lbl:
        //printf("IHelp ");
    }
    return 0;
}