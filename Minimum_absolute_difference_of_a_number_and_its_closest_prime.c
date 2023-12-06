#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,flag=1,bp,n,i,j,a,b,k;
    scanf("%d",&x);
     for(k=2;k<=x/2;k++){
        	flag=1;
            if(x%k==0){
                flag=0;
                break;
            }
        }
            if(flag) printf("0");
            else {
    for(i=x+1; ; i++){
        for(j=2;j<=i/2;j++){
        	flag=1;
            if(i%j==0){
                flag=0;
                break;
            }
            
        }
        if(flag){
                n=i;
                break;
            }
        
    }
    for(a=x-1; ; a--){
    	flag=1;
        for(b=2;b<=a/2;b++){
            if(a%b==0){
                flag=0;
                break;
            }
            
        }
        if(flag){
                bp=a;
                break;
            }
        
    }
    int ab = n-x;
    int bc = x-bp;
    if(ab<bc)      printf("%d",ab);
    else if(ab>bc) printf("%d",bc);
    else           printf("%d",ab);
}

}