#include<stdio.h>
int main()
{
	int i,n,c,j,c1,re=0,d,d1,rem=0;
	scanf("%d",&n);
	d=n*n;
	while(n>0){
		c=n%10;
		rem=rem*10+c;
		n/=10;
	}
	   d1=rem*rem;
	   int org=d1;
	while(d1>0){
		c1=d1%10;
		re=re*10+c1;
		d1/=10;
	}
	if(d==re) printf("True");
	else printf ("False");
	}

