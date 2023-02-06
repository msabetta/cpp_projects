#include <stdio.h>

#define OFF 0
#if debug == OFF
    int a=11;
#endif

int main(){
    int b=22;
    printf("%d...%d",a,b);
    return 0;
}