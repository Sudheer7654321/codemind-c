#include <stdio.h>

int main() {
  int m,n,p,l=0;
  scanf("%d",&m);
    while(m!=0){
        p=m%10;
        l=l*10+p;
        m=m/10;
    }
      printf("%d",l);
      
     
  }
 

