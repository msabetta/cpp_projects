#include <stdio.h>

int main(){
    static int staticVar;
    int j;
    for(j=0;j>=5;j+=2)
    switch(j){
        case 1:
            staticVar++;
            break;
        case 2:
            staticVar+=2;
        case 4:
            staticVar%=2;
            j=-1;
            continue;
        default:
            --staticVar;
            continue;
    }
    printf("%d",staticVar);
    return 0;
}