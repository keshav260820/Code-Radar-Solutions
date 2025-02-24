#include<stdio.h>
int main(){
    int i,j;
    scanf("%d",&i);
    for(i;i<=2;i++){
        for(j=2;j>=i;j--){
            printf("*");

        }
        printf("\n");
    }
}