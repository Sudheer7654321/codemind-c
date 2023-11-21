#include <stdio.h>
int main() {
    int n,m,i,a,b,lcm,lar;
    scanf("%d%d",&n,&m);
     lar=m;
    while(m){
    	if(lar%m==0 && lar%n==0){
    		printf("%d",lar);
    		break;
		}
		lar++;
	}

}
