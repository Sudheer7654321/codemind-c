#include<stdio.h>
int main()
{
    int b,c=0,i,e,f=0,j;
    int d;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
      }
    
    int n;
    scanf("%d",&n);
    for(i=0;i<b;i++){
        d=a[i];
        if(n==d){
            f++;
        }
    }
    printf("%d",f);
    
}