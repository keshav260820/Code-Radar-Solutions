#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<y){
        printf("Profit");
    }else if(x>y){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
}