#include <stdio.h>
int main(){
    float x,y,z,sum;

    scanf("%f %f %f",&x,&y,&z);
    sum=x+y+z;
    print("Average: %.2f",sum/3.0);
}