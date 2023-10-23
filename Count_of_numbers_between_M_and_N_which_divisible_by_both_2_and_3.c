#include <stdio.h>

int main() {

  int m,n,p;

  scanf("%d%d",&m,&n);
  int c=0;
  
  for(int i=m;i<=n;i++) {
      if(i%3==0 && i%2==0){
          c++;
      }
      
   
  }

  printf("%d ",c);

  return 0;
}