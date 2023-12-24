#include<stdio.h>
int main()
{
    int n,c=0,i;
    float d;
    
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    d=c/(float)n;
    printf("%.2f",d);
}