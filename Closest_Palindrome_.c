#include<stdio.h>
int main()
{
	int i,n,c,j,bp=0,np=0,d;
	scanf("%d",&n);
	for(i=n-1;;i--)
	{
		int r=i,rem=0;
		
		while(r>0){
			c=r%10;
			rem=rem*10+c;
			r/=10;
		}
		if(rem==i){
			
		bp=i;
		break;
	}
		
  }
  for(j=n+1; ; j++){
  	int b=j,re=0;
  	while(b>0){
	        d=b%10;
			re=re*10+d;
			b/=10;
	  }
	  if(re==j){
	  	np=j;
	  	break;
	  }
  }
  if(n-bp<np-n) printf ("%d",bp);
  else if (n-bp>np-n) printf ("%d",np);
  else printf("%d %d",bp,np);
}

