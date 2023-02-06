#include <stdio.h>

int main()
{
    static int x[]={'A','B','C','D','E'},tally;
    for(tally=0;tally<sizeof(x)/sizeof(int);tally+=1)
        printf("%c,%c,%c\n",*(x+tally)+1,x[tally]+1,*(tally+x)+1);
    return 0;
}