#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    printf("%d",num^(1<<num));
}