#include <stdio.h>
#include<math.h>
int main() {
    int n,m,i,f=0,a=0,r=0,d=0,t=0;
    scanf("%d",&n);
    int org=n;
    while(n){
    	f=n%10;
    	r=r*10+f;
    	n/=10;
	}
     while(r){
     	t=r%10;
     	a++;
     	d=pow(t,a)+d;
     	r/=10;
     	
	 }
		if(d==org) printf("True");
		
		else printf("False");
		
	}
	
	  

	

    

