#include<stdio.h>
int main(){
    int x, n, i;
    scanf("%d",&n);
    x=n%10;
    
    
    while(n>=10){
        n=n/10;
        
    }
    i=x+n;
    printf("%d",i);
}