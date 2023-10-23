#include <stdio.h>

int main() {
  int m,n,p,l=0;
  scanf("%d",&m);
  for(int i=2;i<=m/2;i++){
      if(m%i==0){
          printf("Not Prime");
          l++;
          break;
      }
  
    }
    if(l==0) {
          printf("Prime");
      }
}