#include <stdio.h>
int main() {
    int x;count=0;
    scanf("%d",&x);
    while(x>0&&(x%2==0)){
        x/=2;
        count++;
        printf("%d",count);
    }
}