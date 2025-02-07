#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x;
    scanf("%c",&x);
    switch(x){
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid input")
    }
}