#include<stdio.h>
int main(){
    int x,y;
    float z;
    scanf("%d %d",&x,&y);
    z=(float)(x+y)/2;
    printf("Average of %d and %d is: %.2f",x,y,z);
}