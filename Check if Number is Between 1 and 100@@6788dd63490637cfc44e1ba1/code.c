#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x>0&&x<100){
        printf("In Range");
    }else if(x<=0||x>100) {
        printf("Out of Range");
    }
}