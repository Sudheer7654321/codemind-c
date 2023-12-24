#include<stdio.h>
int main()
{
    int b,c=0,i,e,f=0,j,s=0;
    int d;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
      }
  for(i=b-1;i>=0;i--){
      if(a[i]%2!=0){
          printf("%d",a[i]);
          break;
      }
  }
}