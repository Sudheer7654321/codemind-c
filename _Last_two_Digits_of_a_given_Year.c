#include<stdio.h>
int main(){
    int X,x;
    scanf("%d",&X);
    x=X%100;
    if(x<10){
        printf("0%d",x);
    }
    else printf("%d",x);
}