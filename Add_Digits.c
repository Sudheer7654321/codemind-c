#include<stdio.h>
int main()
{
	int i,j,n,d,bp=0,c=0;
	scanf("%d",&n);
	while(n>9){
		c=0;
		while(n>0){
			d=n%10;
			c=c+d;
			n/=10;
		}
		n=c;
	}
	printf("%d",n);
}