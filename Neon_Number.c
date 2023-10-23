#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s,p,t=0;
    s=n*n;
    while(s!=0){
        p=s%10;
        t=t+p;
        s/=10;
    }
    if(t==n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
    
}
