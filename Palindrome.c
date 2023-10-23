#include<stdio.h>
int main(){
    int n,o,d,r=0;
    scanf("%d",&n);
    o=n;
    while(n!=0){
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(o==r){
        printf("True");
    }
    else{
        printf("False");
    }
}