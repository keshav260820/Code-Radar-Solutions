#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(0<x<101){
        printf("In Range");
    }else{
        printf("Out of Range");
    }
}