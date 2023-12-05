#include<stdio.h>
int main()
{
	int i,j,n,d,bp=0,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	
	   bp=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				bp++;
			
			} 
		
}    
	 
if(bp==9){
	printf("%d ",i);
	c++;
} 
	
	}
	printf("
Total=%d",c);
  }
  
