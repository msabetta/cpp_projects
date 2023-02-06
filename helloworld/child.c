#include <stdio.h>
#include <unistd.h>

int main(){
    int p;
    p = fork();
    printf("Hello world\n");
    return 0;
}