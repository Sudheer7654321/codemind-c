#include<stdio.h>
int main(){
	int i,a,s=0;
	scanf("%d",&a);
	for(i=1;i<a;i++){
	if(a%i==0){
	    s++;
	}
		}
	if(s<=1)
	    printf("Prime");
	 else
	    printf("Not Prime");
	    
	    
	
}