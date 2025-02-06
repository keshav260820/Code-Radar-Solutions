#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y,check;
    scanf("%d %d",&x,&y);
    check=(x==(y*y));
    printf("%d",check);
}