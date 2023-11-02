#include<stdio.h>
int main()
{
    int n,m,a;
    scanf("%d%d%d",&n,&m,&a);
    while(m<=a)
    {
        printf("%d x %d = %d
",n,m,n*m);
        m++;
    }
}