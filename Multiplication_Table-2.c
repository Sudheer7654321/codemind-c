#include<stdio.h>
int main()
{
    int n,m,a;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
        
    }
}