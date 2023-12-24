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
        if(i%2!=0){
        c=c+a[i];
        }
    }
    printf("%d",c);
    
}