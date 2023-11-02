#include<stdio.h>
int main()
{
    int n,m,a;
    scanf("%d%d",&n,&m);
    for(int i=n+1;i<m;i++)
    {
        printf("%d ",i);
        printf("%d ",i*i);
        printf("%d
",i*i*i);
        
    }
}