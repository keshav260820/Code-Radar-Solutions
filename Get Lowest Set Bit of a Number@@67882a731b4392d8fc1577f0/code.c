#include <stdio.h>

int lowestSetBitPosition(int n) {
    if (n == 0) return -1; 

    int pos = 0;
    while ((n & 1) == 0) {  
        n >>= 1; 
        pos++;
    }
    return pos;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", lowestSetBitPosition(num));
    return 0;
}

