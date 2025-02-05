#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    if(x%400==0||(x%4==0&&x%100!=0)){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
}