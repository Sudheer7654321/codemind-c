#include <stdio.h>

int main() {

  int n, reverse = 0, r;

  scanf("%d", &n);

  
  for(int i=n*2;i>=2;i=i-2) {
     printf("%d ",i);
  }

 

  return 0;
}