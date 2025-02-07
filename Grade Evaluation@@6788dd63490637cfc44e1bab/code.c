#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'A':
        printf("Excellent");
        break;
    }
}