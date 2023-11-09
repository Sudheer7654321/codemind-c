#include<stdio.h>
int main (){
    int x,y=0,z=0;
    
    scanf("%d",&x);  
    for(int i=1;i<=x;i++){
    	y=y+i;
    	z=z+i*i;
       
    }
      printf("%d",y*y-z);
}