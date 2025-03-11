#include <stdio.h>

void printBinary(int num) {
    int bits[32];  // Array to store binary digits
    int i = 0;
    
    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        bits[i++] = num & 1;  
        num = num >> 1;        
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]); 
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printBinary(num);
    return 0;
}
