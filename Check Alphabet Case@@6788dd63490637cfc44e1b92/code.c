#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x;
    scanf("%d",&x);
    if(isupper(x)){
        printf("Uppercase",x);
    }else{
        printf("Lowercase",x);
    }
}