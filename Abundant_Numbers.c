#include<stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            x=x+i;
        }
    }
    if(x>n) printf("True");
    else printf("False");
}