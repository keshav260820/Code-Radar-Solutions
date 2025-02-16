#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(){
    int i,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(i==2){
            printf("%d",i);
        }else if((i%2!=0&&i%3!=0)||i==3){
            printf("%d",i);
        }
    }
}