#include <stdio.h>
int main(){
    //char *a = "vivek";
    //char *b = "vivek";
    int e=14,f=11;
    
    int *a;
    a=&e;
    int *b;
    b=&e;

    if(a == b){
        printf("Welcome to programming world 2020!");
    }

    // if(&a == &b){
    //     printf("Welcome to programming world 2020!");
    // }

    else{
        printf("Keep Try!");
    }
}