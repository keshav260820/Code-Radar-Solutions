#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num,n;
    scanf("%d",&num,&n);
    printf("%d",num&~(n>>1));
}