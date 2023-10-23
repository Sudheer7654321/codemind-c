#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=0,p=1;
    while(n!=0){
        int d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    if(p==s){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
    
}
/*int main{
    int n,d;
    int s=0,p=1;
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    if(p==s){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
    
}
*/