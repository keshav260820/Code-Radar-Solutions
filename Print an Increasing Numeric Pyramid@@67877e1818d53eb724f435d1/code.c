#include<stdio.h>
int main(){
    int i,j,n,space,ch;
    scanf("%d",&n);
    ch='1';
    for(i=1;i<=n;i++){
        
        for(space=0;space<n-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            ch++;
            printf("%d",ch);
            
        }
        printf("\n");}

}