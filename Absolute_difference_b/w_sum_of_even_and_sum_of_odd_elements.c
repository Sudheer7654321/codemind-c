#include<stdio.h>
#include<stdlib.h>
int main()
{
    int b,c=0,i,e,f=0,j,s=0;
    int d;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            s=s+a[i];
        }
        if(a[i]%2!=0){
            c=c+a[i];
        }
      }
   printf("%d",abs(s-c));
}