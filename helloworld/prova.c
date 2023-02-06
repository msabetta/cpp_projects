#include <stdio.h>

int main(){
    const int intVar=24;
    static int x=intVar;
    printf("%d,%d",intVar,x);
    return 0;
}

