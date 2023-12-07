#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int a=24-x;
    int b=abs(a*60-y);
    printf("%d",b);
}