#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}