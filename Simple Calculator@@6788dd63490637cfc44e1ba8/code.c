#include <stdio.h>

int main() {
    int x, y;
    char z;

    // Read input and validate
    if (scanf("%d %d %c", &x, &y, &z) != 3) {
        printf("error\n");
        return 1;
    }

    // Perform calculation based on operator
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
            printf("error\n");  // Prevent division by zero
        } else {
            printf("%d\n", x / y);
        }
    } 
    else {
        printf("error\n");  // Handle invalid operator
    }

    return 0;
}
