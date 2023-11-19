#include <stdio.h>
int main() {
    int n,m,i,lar=0,a;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n ;i++){
    	a=(n%i==0 && m%i==0) ? i : 0;
    	 if(a!=0){
    	 	lar=(lar<a) ? a :0; 
		 }
		}
		if(lar!=0){
		printf("%d",lar);
	}
	}

    

