#include <stdio.h>
#include <math.h>

int lowestSetBitPosition(int n) {
    if (n == 0) return -1;  

    return log2(n & -n);  
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", lowestSetBitPosition(num));
    return 0;
}
