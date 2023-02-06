#include <stdio.h>
#define MAX 99
int main(){
    printf("%d...",MAX);
    //#undef MAX
    printf("%d",MAX);
    return 0;
}