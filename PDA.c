#include<stdio.h>
int main(){
	int i,a,p=0;
	scanf("%d",&a);
	for(i=1;i<a;i++){
	if(a%i==0){
		p=p+i;
	}
}
	  if(p==a) printf("PERFECT");
	  else if(p>a) printf("ABUNDANT");
	  else printf("DEFICIENT");  
	    

}