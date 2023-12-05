#include<stdio.h>
int main()
{
	int i,a,b,c,j,bp=0,np=0,d;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		int r=i,rem=0;
		
		while(r>0){
			c=r%10;
			rem=rem*10+c;
			r/=10;
		}
		if(rem==i) printf("%d ",i);
	}
}