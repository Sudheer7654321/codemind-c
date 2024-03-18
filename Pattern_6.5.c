#include<stdio.h>
int main()
{
    int a,b=1,i,j,k,x;
    scanf("%d",&a);
x=a;
    for(i=a;i>=1;i--)
    {
        for(j=a-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("%c ",b+64);
            
            
        }

        printf("
");
        b++;
    }
}