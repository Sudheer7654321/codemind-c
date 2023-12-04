#include<stdio.h>
#include<math.h>
int main(){
	int x,y,i,j=1,d=0,rem,r,rd,re,ro=0;
	scanf("%d%d",&x,&y);
	int p=pow(10,y);
	   d=x%p;
		while(x>0){
		
		 rem=x%10;
		 r=r*10+rem;
		 x=x/10;
	}
	 rd=r%p;
	 while(rd>0){
		
		 re=rd%10;
		 ro=ro*10+re;
		 rd=rd/10;
	}
	int abosulute=abs(d-ro);
	printf("%d",abosulute);
	}
	
