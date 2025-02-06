#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if("x>=0"){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
}