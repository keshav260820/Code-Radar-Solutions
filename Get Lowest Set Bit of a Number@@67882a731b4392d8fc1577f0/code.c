#include <stdio.h>

int main() {
    int num, position = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("No set bits in 0.\n");
        return 0;
    }

    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }

    printf("%d\n", position);
    return 0;
}