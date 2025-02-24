#include<stdio.h>
int main(){
    int i,j,spaces,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(spaces=0;spaces<i-n;spaces++){
            printf("");
        }
        for(j=1;j<=i;j++){
            printf("&");

        }
        printf("\n");
    }
}