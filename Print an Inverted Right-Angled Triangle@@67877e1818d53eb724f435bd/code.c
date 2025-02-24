#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i<=2;i++){
        for(j=2;j>=i;j--){
            printf("*");

        }
        printf("\n");
    }
}