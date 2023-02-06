#include <stdio.h>

int main(){
    static int array[]={10,20,30,40,50};
    printf("%d...%d",*array,*(array+3)* *array);
    return 0;
}