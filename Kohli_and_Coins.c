#include <stdio.h>

int main() {
    int x, y;
    scanf("%d", &x);
    y=x%10;
    int z=x/10;
    
    if (y==0 && x%5==0)
        printf("%d",z);
        else if(y==5 && x%5==0) {
	   printf("%d",z+1);
}
	  else if (x%5!=0){
        printf("-1");
    }   
	
}
    

    
   

