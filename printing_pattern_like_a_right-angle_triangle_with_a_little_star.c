#include<stdio.h>
int main()
{
    int n,m,a;
    scanf("%d",&a);
    for(n=1;n<=a;n++)
    {
        for(m=1;m<=n;m++){
            printf("*");
            
        }
        printf("
");
    }
}