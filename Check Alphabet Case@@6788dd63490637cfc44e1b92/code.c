#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x;
    scanf("%c",&x);
    if(isupper(x)){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
}