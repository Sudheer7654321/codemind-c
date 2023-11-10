#include<stdio.h>
#include<math.h>
int main(){
	int i,a,b;
	float s=0.0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		s=s+sqrt(i);
		}
	
		printf("%0.2f",s);
}