#include <stdio.h>

int main() {
    int x, y;
    char z;
    if (scanf("%d %d %c", &x, &y, &z)) {
    }
    if (z == '+') {
        printf("%d\n", x + y);
    } 
    else if (z == '-') {
        printf("%d\n", x - y);
    } 
    else if (z == '*') {
        printf("%d\n", x * y);
    } 
    else if (z == '/') {
        if (y == 0) {
            printf("error\n"); 
        } else {
            printf("%d\n", x / y);
        }
    } 
    else {
        printf("error\n");  
    }
}
