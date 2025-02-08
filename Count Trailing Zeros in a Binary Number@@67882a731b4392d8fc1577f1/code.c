#include <stdio.h>
int main() {
    int x;
    int count=0;
    scanf("%d",&x);
    while(x>0&&(x%2==0)){
        count++;
        x/=2;
        
        printf("%d",count);
    }
}