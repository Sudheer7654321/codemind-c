#include<stdio.h>
int main(){
    int a,i;
    float b,c=1,d,f=0;
    scanf("%d",&a);
     for(i=1;i<=a;i++){
     	d=c/i;
     	f=f+d;
     	 
	 }
	printf("%0.2f ",f);
}