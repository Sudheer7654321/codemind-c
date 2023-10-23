#include <stdio.h>

int main() {

  int n,r=0,p;

  scanf("%d", &n);

  
  for(int i=1;i<n;i++) {
      if(n%i==0){
        r=r+i;  
      }
    
  }

  printf("%d",r);

  return 0;
}