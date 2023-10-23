#include <stdio.h>

int main() {

  int n,r=0,p;

  scanf("%d", &n);

  
  for(int i=3;i<=n*3;i=i+3) {
    printf("%d ",i);
  }

  

  return 0;
}