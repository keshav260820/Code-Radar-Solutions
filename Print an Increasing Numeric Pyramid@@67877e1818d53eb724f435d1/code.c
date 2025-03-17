#include<stdio.h>
int main(){
    int i,j,n,space,ch;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        ch='1';
        
        for(space=0;space<n-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            
            printf("%d",ch);
            ch++;
            
        }
        printf("\n");}

}