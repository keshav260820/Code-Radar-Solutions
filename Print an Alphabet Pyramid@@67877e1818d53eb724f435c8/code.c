#include<stdio.h>
#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        char letter = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;
        }
        printf("\n"); 
    }
}