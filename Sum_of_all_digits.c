#include<stdio.h>
int main (){
    int n,f=0,s=0;      
    scanf("%d",&n);
  while(n){
      f=n%10;
      n/=10;
      s=f+s;
      
  }
    printf("%d",s);
}