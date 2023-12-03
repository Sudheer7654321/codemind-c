#include<stdio.h>
int main(){
	int l,r,i,j,t;
	scanf("%d",&t);
	for(j=1;j<=t;j++){
		
	scanf("%d%d",&l,&r);
	  int c=0;
	for(i=l;i<=r;i++){
	
	int x=i;
	int d=x%10;
	if(d==2 || d==3|| d==9){
		c++;
	} 
	
}
  printf("%d
",c);
}
}