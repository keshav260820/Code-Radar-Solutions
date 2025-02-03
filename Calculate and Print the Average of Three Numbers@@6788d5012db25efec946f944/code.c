#include <stdio.h>
int main(){
    int x,y,z;
    float sum;
    scanf("%d %d %d",&x,&y,&z);
    sum=x+y+z;
    printf("Average: %.2f",sum/3.0);
    return 0;
}