#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x>=60){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
}