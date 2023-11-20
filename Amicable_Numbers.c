#include <stdio.h>
int main() {
    int n,m,i,f=0,a=0,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n/2 ;i++){
    	 if(n%i==0){
    	 	f=f+i;
		 }
		 }
		for(j=1;j<=m/2;j++){
			if(m%j==0){
			a=a+j;	
			}
		}
	     if(n==a && m==f){
	     	printf("Amicable");
		 }
		 else printf("Not Amicable");
	}
	  

	

    

